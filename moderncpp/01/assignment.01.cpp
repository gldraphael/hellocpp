#include <print>
#include <iostream>
#include <sstream>
using namespace std;
 
int main() {
    const int SCREEN_WIDTH = 80;
    string title = "Alice's Adventures In Wonderland";
    stringstream prefixedTitle;
    for(int i = 0; i<(SCREEN_WIDTH - title.length())/2; i++)
        prefixedTitle << " ";
    prefixedTitle << title;

    print(
        "{}\n"
        "\n"
        "Price:\n"
        "  €4.99\n"
        "  $6.99\n\n",
        prefixedTitle.str()
    );

    println();
    println();

    
    cout << prefixedTitle.str() << endl
        << endl 
        << "Price:"  << endl
        << reinterpret_cast<const char*>(u8"  €4.99") << endl
        << "  $6.99" << endl << endl;
        

}
