#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{

    if (argc == 2)
    {

        if (!strcmp(argv[1], "Client"))
        {
            std::cout << "Client" << std::endl;
        }

        else if (!strcmp(argv[1], "Service"))
        {
            std::cout << "Service" << std::endl;
        }

        else
        {
            std::cout << "Error : Command line argument is invalid" << std::endl;
            exit(1);
        }
    }
    else
    {
        std::cout << "Error : Command line argument is invalid" << std::endl;
        exit(1);
    }
    return 0;
}