#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>
#include "ship_list.hpp"

int main()
{
    bool keepGoing = true;

    while(keepGoing)
    {
        std::string inp;
        std::cout << "Enter the Short Name for the ship type (enter Q to quit)> ";
        std::cin >> inp;
        boost::to_upper(inp);
        if(inp.compare("Q") == 0)
        {
            keepGoing = false;
        }
        else
        {
            size_t i;
            for(i = 0; i < shortNames.size(); i++)
            {
                if(inp.compare(shortNames[i]) == 0)
                {
                    std::cout << fullNames[i] << "\n\n";
                    break;
                }
            }
            if(i >= shortNames.size())
            {
                std::cout << "Not Found\n";
            }
        }        
    }
    std::cout << "Bye Bye" << std::endl;
    return 0;
}