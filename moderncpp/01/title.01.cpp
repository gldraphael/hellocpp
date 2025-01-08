#include <print>
using namespace std;
 
int main() {
    // the 1+ idiom uses pointer arithmetic to remove the first newline character from the raw string literal
    print(1+R"(
                   Alice's
                Adventures In
                 Wonderland
 
                     by
                LEWIS CARROLL
)");
}
