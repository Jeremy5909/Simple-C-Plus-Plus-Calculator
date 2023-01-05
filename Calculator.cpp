#include <iostream>
#include <string>

using namespace std;

int main(){
string calc;
string mult = "Multiplication";
string div = "Division";
string add = "Addition";
string sub = "Subtraction";
string hlp = "Help";
double num1;
double num2;
double ans;

cout << "Simple C++ Calculator 1.0.1\n\nTypes of calculaton:\n\nMultiplication\nDivision\nAddition\nSubtraction\nHelp\n\nSelect your calculation: ";
cin >> calc;
if (calc == hlp) {
	cout << "\nInstructions:\nFirst, type in one of the types of calcultation from the list and press enter. Next, type in the first number of the calculation after \"First Number: \" and press enter. After that, type the second number of the calculation after \"Second number: \" and press enter. Lastly, see the answer you got and restart to run again.\n\nExample:\n\nTypes of calculaton:\n\nMultiplication\nDivision\nAddition\nSubtraction\nHelp\n\nSelect your calculation: Division\n\nDivision calculator\n\nFirst number: 6\n\nSecond number: 5\n\nAnswer: 1.2\n";
}
if (calc == mult) {
	cout << "Multiplication calculator\n\nFirst number: ";
	cin >> num1;
	cout << "\nSecond number: ";
	cin >> num2;
	ans = num1 * num2;
	cout << "\nAnswer: " << ans;
	cout << "\n";
}
if (calc == div) {
	cout << "\nDivision calculator\n\nFirst number: ";
	cin >> num1;
	cout << "\nSecond number: ";
	cin >> num2;
	ans = num1 / num2;
	cout << "\nAnswer: " << ans;
        cout << "\n";
}
if (calc == add) {
	cout << "\nAddition calculator\n\nFirst number: ";
	cin >> num1;
	cout << "\nSecond number: ";
	cin >> num2;
	ans = num1 + num2;
	cout << "\nAnswer: " << ans;
        cout << "\n";
}
if (calc == sub) {
	cout << "\nSubtraction calculator\n\nFirst number: ";
	cin >> num1;
	cout << "\nSecond number: ";
	cin >> num2;
	ans = num1 - num2;
	cout << "\nAnswer: " << ans;
        cout << "\n";
}
return 0;
}
