#include "include/list.h"

/**
 * @brief Main program controll
 * 
 * @param arg_count Number of arguments
 * @param args Array of arguments
 * @return int 
 */
int main(int arg_count, char *args[])
{
    if (arg_count > 1)
    {
        List simpleList;
        simpleList.name = string(args[1]); 
        simpleList.print_menu();
    }
    else
    {
        cout << "Username not supplied.. exiting the progam" << endl;
    }
    return 0;
}

