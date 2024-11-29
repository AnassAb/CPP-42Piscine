#include "Point.hpp"
#include "raylib.h"
#include <vector>
#include <string>

// Convert our Fixed coordinates to screen coordinates
Vector2 toScreen(const Point& p, float scale = 100.0f, float offsetX = 400.0f, float offsetY = 300.0f) {
    return (Vector2){
        static_cast<float>(p.getX()) * scale + offsetX,
        -static_cast<float>(p.getY()) * scale + offsetY  // Flip Y coordinate for screen space
    };
}

// Convert screen coordinates to our Fixed point space
Point toPoint(const Vector2& v, float scale = 100.0f, float offsetX = 400.0f, float offsetY = 300.0f) {
    float x = (v.x - offsetX) / scale;
    float y = -(v.y - offsetY) / scale;  // Flip Y coordinate back from screen space
    return Point(x, y);
}

struct TestTriangle {
    Point a, b, c;
    const char* name;
    Color color;
};

int main() {
    // Initialize window
    InitWindow(800, 600, "BSP Visualizer");
    SetTargetFPS(60);

    // Define our test triangles
    std::vector<TestTriangle> triangles;
    triangles.push_back({Point(0, 0), Point(4, 0), Point(2, 4), "Basic Triangle", 
        (Color){0, 121, 241, 255}}); // Blue
    triangles.push_back({Point(-2, -2), Point(2, -2), Point(0, 2), "Negative Coords Triangle", 
        (Color){0, 228, 48, 255}}); // Green
    triangles.push_back({Point(0, 0), Point(0.1f, 10), Point(0, 10), "Thin Triangle", 
        (Color){230, 41, 55, 255}}); // Red
    triangles.push_back({Point(0, 0), Point(3, 0), Point(0, 3), "Right Triangle", 
        (Color){200, 122, 255, 255}}); // Purple

    int currentTriangle = 0;
    Vector2 mousePoint = {0, 0};
    bool isInside = false;

    // Main game loop
    while (!WindowShouldClose()) {
        // Update
        mousePoint = GetMousePosition();
        Point testPoint = toPoint(mousePoint);
        
        // Check if point is inside current triangle
        isInside = bsp(
            triangles[currentTriangle].a,
            triangles[currentTriangle].b,
            triangles[currentTriangle].c,
            testPoint
        );

        // Switch triangle with left/right arrow keys
        if (IsKeyPressed(KEY_RIGHT))
            currentTriangle = (currentTriangle + 1) % triangles.size();
        if (IsKeyPressed(KEY_LEFT))
            currentTriangle = (currentTriangle - 1 + triangles.size()) % triangles.size();

        // Draw
        BeginDrawing();
        ClearBackground((Color){245, 245, 245, 255}); // RAYWHITE

        // Draw grid
        for (int i = 0; i < 800; i += 50) {
            DrawLine(i, 0, i, 600, (Color){200, 200, 200, 255}); // LIGHTGRAY
            DrawLine(0, i, 800, i, (Color){200, 200, 200, 255}); // LIGHTGRAY
        }

        // Draw coordinate axes
        DrawLine(0, 300, 800, 300, (Color){130, 130, 130, 255}); // GRAY
        DrawLine(400, 0, 400, 600, (Color){130, 130, 130, 255}); // GRAY

        // Draw current triangle
        const TestTriangle& tri = triangles[currentTriangle];
        Vector2 screenA = toScreen(tri.a);
        Vector2 screenB = toScreen(tri.b);
        Vector2 screenC = toScreen(tri.c);

        DrawTriangle(screenA, screenB, screenC, (Color){tri.color.r, tri.color.g, tri.color.b, 30});
        DrawTriangleLines(screenA, screenB, screenC, tri.color);

        // Draw vertices
        DrawCircleV(screenA, 5, tri.color);
        DrawCircleV(screenB, 5, tri.color);
        DrawCircleV(screenC, 5, tri.color);

        // Draw test point
        Color pointColor = isInside ? (Color){0, 228, 48, 255} : (Color){230, 41, 55, 255}; // GREEN : RED
        DrawCircleV(mousePoint, 5, pointColor);

        // Draw info text
        DrawText(tri.name, 10, 10, 20, tri.color);
        DrawText(isInside ? "INSIDE" : "OUTSIDE", 10, 40, 20, pointColor);
        DrawText("Use LEFT/RIGHT arrow keys to switch triangles", 10, 570, 20, (Color){130, 130, 130, 255}); // GRAY

        // Draw coordinates
        char coords[50];
        snprintf(coords, sizeof(coords), "Point: (%.2f, %.2f)", 
                static_cast<float>(testPoint.getX()),
                static_cast<float>(testPoint.getY()));
        DrawText(coords, 10, 70, 20, (Color){130, 130, 130, 255}); // GRAY

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
