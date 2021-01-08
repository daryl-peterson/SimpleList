#include <iostream>
#include <vector>

using namespace std;

class List
{
public:
    List()
    {
        // contructor
    }
    ~List()
    {
        // destructor
    }
    vector<string> list;
    string name;

    void print_menu();
    void list_items();
    void print_list();
    void add_item();
    void delete_item();

protected:
private:
};