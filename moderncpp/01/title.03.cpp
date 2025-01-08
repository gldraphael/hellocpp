#include <print>
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
        "All in the golden afternoon\n"
        "        Full leisurely we glide;\n"
        "For both our oars, with little skill,\n"
        "        By little arms are plied,\n"
        "While little hands make vain pretence\n"
        "        Our wanderings to guide.\n",
        prefixedTitle.str()
    );
}
