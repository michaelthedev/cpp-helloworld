#include <iostream>

/**
 * Greeter class
 *
 * Takes a name and prints all letters
 * then prints "Hello {name}!!!"
 *
 * @author Michael A<michael@logad.net>
 */
class Greeter {
public:
    static void sayHello(const std::string& name) {
        // Loop through letters in name
        for (char c : name) {
            std::string letter(1, c);
            std::cout << letter << std::endl;
        }

        // Say hello like a gentleman :)
        std::cout << "Hello "+ name +"!!" << std::endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Greeter::sayHello("Michael");
    return 0;
}
