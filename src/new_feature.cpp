#include <iostream>

using namespace std;

void functionality() {
    string message = "Executing new feature functionality.";
    cout << message << endl;
    cout << "This is the new feature!" << endl;
}

void more_functionality() {
    cout << "More functionality can be added here." << endl;
}

int main() {
    functionality();
    more_functionality();
    cout << "New features implemented! yay!" << endl;
    return 0;
}