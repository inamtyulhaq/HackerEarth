// Question:
/*https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/*/

// Explanation:
/*I inputted all values, used long long int for values like 10^9.
Applied the formula and used conditions to output the answer.*/

// Solution:
#include <iostream>
using namespace std;

int main() 
{
	long long int D, OC, OF, OD, CS, CB, CM, CD;
	long long int onTaxiCost, clTaxiCost;
	cin >> D;
	cin >> OC >> OF >> OD;
	cin >> CS >> CB >> CM >> CD;
	onTaxiCost = OC + (OD * (D-OF));
	clTaxiCost = CB + (CD * D) + (D / CS) * CM;
	if (onTaxiCost < clTaxiCost) {
        cout << "Online Taxi";
    }
	else if (onTaxiCost > clTaxiCost) {
        cout << "Classic Taxi";
    }
	else if (onTaxiCost == clTaxiCost)
	{
		cout << "Online Taxi";
	}
	return 0;
}
// git clone practice commi
