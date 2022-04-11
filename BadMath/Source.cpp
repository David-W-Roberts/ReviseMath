#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	// in the original it only divided the last number by three
	// but now that i put parenthesis around the three numbers
	// it will divide all of them by 3
	return (i1 + i2 + i3) / 3.0f;
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	// changed up the prompts a bit to clarify that this is input
	cout << "This program calculates the average of three numbers." << endl;
	cout << "Please enter the first number: "; cin >> n1;
	cout << "Plase enter the second number: "; cin >> n2;
	cout << "Please enter the third number: "; cin >> n2;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}