#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265359;
    double radius;
    int operation;
    int times = 0;

    while (times < 100000) { // Enables the user to perform the calculations for unlimited times. 
        // Ask the user to enter the radius value.
        cout << "Enter the value for the radius. (in cm)" << "\n";
        cin >> radius;

        // Ask the user to select the operation to perform.
        cout << "Select the operation that you want to perform." << endl;
        cout << "1. Circumference\n2. Area\n" << endl;
        cout << "--------------------------------------------------------------------------------------------" << endl;
        cin >> operation;

        // Switch case to perform the selected operation.
        switch (operation) {
        case 1:
            // Calculate and display the circumference.
            cout << "--------------------------------------------------------------------------------------------\nCircumference : " << endl;
            cout << 2 * PI * radius << " cm" << endl;
            cout << "-------------------------------------End Line-------------------------------------------------------" << endl;
            cout << "-------------------------------------End Line-------------------------------------------------------" << endl;
            break;
        case 2:
            // Calculate and display the area.
            cout << "--------------------------------------------------------------------------------------------\nArea : " << endl;
            cout << PI * radius * radius << " cm" << endl;
            cout << "-------------------------------------End Line-------------------------------------------------------" << endl;
            cout << "-------------------------------------End Line-------------------------------------------------------" << endl;
            break;
        default:
            // Display an error message for any invalid input.
            cout << "--------------------------------------------------------------------------------------------" << endl;
            cout << "Only select numbers 1 and 2." << endl;
            break;
        }
    }
    

    return 0;
}