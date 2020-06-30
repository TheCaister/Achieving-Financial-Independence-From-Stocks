#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

double getRequiredIncome(double cGain, double requiredIncome) {

	// if cgain = 0.33 that means requiredincome is 0.66 (1 - cgain)
	//to get requiredincome to 1... (1 - cgain)(x) = 1
	// x = 1/(1-cgain)


	return requiredIncome/(1 - cGain);
}

float getIndexAmount(float incomeAfterTax) {
	return ((incomeAfterTax * 100) / 4);
}

float getTSLA(float index) {
	return ((index * 3) / 2);

}


int main()
{
	double cGainRate;
	double annualRequiredIncome;
	float incomeAfterTax;
	float index;
	float TSLA;



	cout << "What is the Capital Gain rate? In decimals, if you don't mind: ";
	cin >> cGainRate;
	cout << "What is the amount of annual income required? ";
	cin >> annualRequiredIncome;

	cout << endl;

	cout << fixed;

	incomeAfterTax = getRequiredIncome(cGainRate, annualRequiredIncome);
	cout << "You would take out this much yearly before taxes: " << round(incomeAfterTax) << endl;

	index = getIndexAmount(incomeAfterTax);
	cout << "Which means, you need this much in the index assuming it grows 8% yearly and you take out 4%: " << index << endl;


	TSLA = getTSLA(index);
	cout << "Finally, you would need this much in TSLA to be financially independent: " << TSLA << endl;

	while (1) {


	}





	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
