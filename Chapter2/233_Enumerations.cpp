// Enumerations are used to represent small sets of integer values
// Make code more readable and less error-prone
// the class after the enum specifies that an enumeration is strongly
// typed and that its enumerators are scoped.
// enum classes help prevent accidental misuses of constants
// An enum class has only assignmente, initialization, and comparisons
// (e.g., == and <) defined. But we can define operators for it

#include <iostream>

enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };

Traffic_light& operator++(Traffic_light& t)
    // prefix increment: ++
{
    switch (t) {
        case Traffic_light::green: return t = Traffic_light::yellow;
        case Traffic_light::yellow: return t = Traffic_light::red;
        case Traffic_light::red: return t = Traffic_light::green;
    }
}

int main(){
    Color col = Color::red;
    Traffic_light light = Traffic_light::red;

    Traffic_light next = ++light;   // next becomes Traffic_light::green
}