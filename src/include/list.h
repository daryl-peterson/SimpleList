#include <iostream>
#include <vector>

using namespace std;

class List
{
public:
    List()
    {
        seperator_length = 52;
        
        seperator = " " + std::string(seperator_length -2, '*');

        for (int i = 0; i < 10;i++){
            page_sep = page_sep + "\n";
        }
    }
    ~List()
    {
        // destructor
    }
    vector<string> list;
    string name;
    string seperator;
    int seperator_length;
    string page_sep;
    void print_menu();
    void list_items();
    void print_list();
    void add_item();
    void delete_item();
    string menu_center(string text);
    string menu_left(string text);

protected:
private:
};