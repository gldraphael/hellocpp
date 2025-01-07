#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> messages {"Hello world!", "It's a good day :)"};
    
    for(const auto& message: messages) {
        std::cout << message << std::endl;
    }
}
