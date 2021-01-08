#include "include/list.h"

/**
 * @brief Print menu
 * 
 * @return void 
 */
void List::print_menu()
{
    int choice;

    cout << page_sep;
    cout << seperator << "\n";
    cout << menu_center("MENU");
    cout << menu_left("1 - Print Item List");
    cout << menu_left("2 - Add Item");
    cout << menu_left("3 - Delete Item");
    cout << menu_left("4 - Quit");
    cout << seperator << "\n\n";
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

    cout << page_sep;
    cout << seperator << "\n";
    cout << menu_center("Add Item");
    cout << seperator << "\n\n";
    cout << " Type in an item and press enter:  ";

    cin >> item;
    list.push_back(item);

    cout << "\n"
         << " Item Added \n";

    cin.clear();

    print_menu();
}

/**
 * @brief 
 * 
 */
void List::delete_item()
{
    int item;

    cout << page_sep;
    cout << seperator << "\n";
    cout << menu_center("Delete Item");
    cout << seperator << "\n\n";

    if (list.size())
    {
        list_items();
        cout << "\n\n";
        cout << " Enter Item Index: ";
        cin >> item;
        list.erase(list.begin() + item);
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
    cout << page_sep;
    cout << seperator << "\n";
    cout << menu_center("Printing List");
    cout << seperator << "\n\n";

    list_items();

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

string List::menu_center(string text)
{
    int int_txt, int_sep, int_pad;
    string str_pad, str_return;

    int_txt = text.length();
    int_sep = seperator.length();

    int_pad = ((int_sep - int_txt) / 2) - 4;

    str_pad = std::string(int_pad, ' ');
    str_return = " * " + str_pad + text + str_pad + str_pad;
    str_return = str_return.substr(0, int_sep - 1) + "*\n";
    return str_return;
}

string List::menu_left(string text)
{
    int int_sep;

    int_sep = seperator.length();
    string str_pad, str_return;

    str_return = " * " + text + std::string(50, ' ');
    str_return = str_return.substr(0, int_sep - 1) + "*\n";
    return str_return;
}