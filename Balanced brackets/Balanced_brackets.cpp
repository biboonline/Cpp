#include <iostream>
#include <string.h>
int main()
{   
    size_t opened_bracket_c = 0,  closed_bracket_c = 0;
    std::string  brackets_string;
    bool error_f = 0;
    std::cout << "Enter bracket sequence"<< std::endl;
    std::cin >> brackets_string;
    for (size_t i = 0; i < brackets_string.length(); i++)
    {
        if(brackets_string[i] == '(') 
        {
            opened_bracket_c++;
        }
        else if(brackets_string[i] == ')')
        {
            if(opened_bracket_c >= closed_bracket_c)
            {
                closed_bracket_c++;
            }
            else
            {
                std::cout<< "Not balanced brackets" <<std::endl;
                error_f = 1;
                break;
            }
        }
        else
        {
            std::cout << "Element " << brackets_string[i] <<" not a bracket" << std::endl;
            error_f = 1;
            break;
        }
    }
    if(error_f != 1)
    {
        if(opened_bracket_c == closed_bracket_c)
        {
            std::cout <<" Balanced brackets" << std::endl;
        }
        else
        {
            std::cout<< "Not balanced brackets" <<std::endl;
        }
    }
    // std::cout << brackets_string.length();
    return 0;
}