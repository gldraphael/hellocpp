#include <print>
#include <iostream>
#include <sstream>
using namespace std;
 
int main() {

    print(
        1+R"(
                        Alice's Adventures In Wonderland

Price:
  €4.99
  $6.99
)"
    );

}
