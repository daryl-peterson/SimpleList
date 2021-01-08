#include "include/list.h"

/**
 * @brief Print menu
 * 
 * @return void 
 */
void List::print_menu()
{
    int choice;

    cout << " ************************************************\n";
    cout << " *                     MENU                     *\n";
    cout << " * 1 - Print list                               *\n";
    cout << " * 2 - Add to list                              *\n";
    cout << " * 3 - Delete from list                         *\n";
    cout << " * 4 - Quit                                     *\n";
    cout << " *                                              *\n";
    cout << " ************************************************\n\n";

    cout << " Enter your choice: ";
    cin >> choice;

    if (choice == 4)
    {
        exit(0);
    }
    else if (choice == 2)
    {
        add_item();
    }
    else if (choice == 3)
    {
        delete_item();
    }
    else if (choice == 1)
    {
        print_list();
    }
    else
    {
        cout << " Sorry choice not impleemented yet\n";
    }
}
/**
 * @brief Add item to list
 * 
 * @return void
 */
void List::add_item()
{
    string item;

    cout << "\n\n\n\n\n";
    cout << " ************************************************\n";
    cout << " *                  Add Item                    *\n";
    cout << " ************************************************\n";
    cout << " Type in an item and press enter:  ";

    cin >> item;
    list.push_back(item);

    cout << "\n"
         << " Item Added \n\n\n\n";
    cin.clear();

    print_menu();
}

/**
 * @brief 
 * 
 */
void List::delete_item()
{
    string item;

    cout << "\n\n\n\n\n";
    cout << " ************************************************\n";
    cout << " *                 Delete Item                  *\n";
    cout << " ************************************************\n\n";

    if (list.size())
    {
        list_items();
        cout << "\n\n";
        cout << " Enter Item Index: ";
        cin >> item;
        cin.clear();
    }
    else
    {
        cout << " No items to delete\n";
    }

    cin.clear();

    print_menu();
}

/**
 * @brief 
 * 
 */
void List::print_list()
{
    cout << "\n\n\n\n\n";
    cout << " ************************************************\n";
    cout << " *                  Printing List               *\n";
    cout << " ************************************************\n\n";
    list_items();

    cout << "\n\n\n\n\n";
    print_menu();
}

void List::list_items()
{

    if (list.size())
    {
        cout << "\n";
        for (int i = 0; i < (int)list.size(); i++)
        {
            cout << " " << i << ": " << list[i] << "\n";
        }
    }
}