#include <iostream>

std::string to_uppercase(std::string str)
{
    unsigned long j = 0;
    
    while (j < str.length())
    {
        str[j] = std::toupper(str[j]);
        j++;
    }
    return (str);
}

int main(int ac, char *av[])
{
    int i = 1;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (i < ac)
        {
            std::string arg = av[i];
            std::cout << to_uppercase(arg);
            i++;
        }
    }
    std::cout << std::endl;
    return (0);
}