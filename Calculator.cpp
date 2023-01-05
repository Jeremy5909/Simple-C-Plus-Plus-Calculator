#include <iostream>
#include <string>

using namespace std;

int main(){
string calc;
string mult = "Multiplication";
string div = "Division";
string add = "Addition";
string sub = "Subtraction";
double num1;
double num2;
double ans;

cout << "Simple C++ calculator 1.0.0\n\nTypes of calculaton:\n\nMultiplication\nDivision\nAddition\nSubtraction\n\nSelect your calculation: ";
cin >> calc;
if (calc == mult) {
	cout << "Multiplication calculator\n\nFirst number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	ans = num1 * num2;
	cout << "Answer: " << ans;
	cout << "\n";
}
if (calc == div) {
	cout << "Division calculator\n\nFirst number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	ans = num1 / num2;
	cout << "Answer: " << ans;
        cout << "\n";
}
if (calc == add) {
	cout << "Addition calculator\n\nFirst number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	ans = num1 + num2;
	cout << "Answer: " << ans;
        cout << "\n";
}
if (calc == sub) {
	cout << "Subtraction calculator\n\nFirst number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	ans = num1 - num2;
	cout << "Answer: " << ans;
        cout << "\n";
}
return 0;
}
