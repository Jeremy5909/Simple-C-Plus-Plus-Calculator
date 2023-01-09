#include <iostream>
#include <string>

using namespace std;

int main() {
        int calc;
        int hlp = 1;
        int mult = 2;
        int divi = 3;
        int add = 4;
        int sub = 5;

        double num1;
        double num2;
        double ans;

        cout << "Simple C++ Calculator 1.0.3\n\nTypes of calculaton:\n\n[1]\tHelp\n[2]\tMultiplication\n[3]\tDivision\n[4]\tAddition\n[5]\tSubtraction\n\nSelect your calculation: ";
        cin >> calc;
        if (calc == hlp) {
                cout << "\nInstructions:\nFirst, type in one of the types of calcultation from the list and press enter. Next, type in the first number of the calculation after \"First Number: \" and press enter. After that, type the second number of the calculation after \"Second number: \" and press enter. Lastly, see the answer you got and restart to run again.\n\nExample:\n\nTypes of calculaton:\n\nMultiplication\nDivision\nAddition\nSubtraction\nHelp\n\nSelect your calculation: Division\n\nDivision calculator\n\nFirst number: 6\n\nSecond number: 5\n\nAnswer: 1.2\n";
        } else if (calc == mult) {
                cout << "\nMultiplication calculator\n\nFirst number: ";
                cin >> num1;
                cout << "\nSecond number: ";
                cin >> num2;
                ans = num1 * num2;
                cout << "\nAnswer: " << ans;
                cout << "\n";
        } else if (calc == divi) {
                cout << "\nDivision calculator\n\nFirst number: ";
                cin >> num1;
                cout << "\nSecond number: ";
                cin >> num2;
                ans = num1 / num2;
                cout << "\nAnswer: " << ans;
                cout << "\n";
        } else if (calc == add) {
                cout << "\nAddition calculator\n\nFirst number: ";
                cin >> num1;
                cout << "\nSecond number: ";
                cin >> num2;
                ans = num1 + num2;
                cout << "\nAnswer: " << ans;
                cout << "\n";
        } else if (calc == sub) {
                cout << "\nSubtraction calculator\n\nFirst number: ";
                cin >> num1;
                cout << "\nSecond number: ";
                cin >> num2;
                ans = num1 - num2;
                cout << "\nAnswer: " << ans;
                cout << "\n";
        } else {
                cout << "\n" << calc << " is not an option.\n";
        }
        return 0;
}
