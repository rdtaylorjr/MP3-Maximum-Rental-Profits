#include <iostream>
using namespace std;

/* Name of programmer: Russell Taylor
 * Date: 5/15/2020
 * This program calculates the maximum profit for a real estate office.
 * The program prompts the user to enter the total number of units, the
 * rent that will keep all units occupied, the increase in rent that
 * results in a vacant unit, and the cost to maintain each rented unit.
 * The program assumes that the user inputs integer values that are correct.
 * The program outputs the maximum profit and how many units should be
 * rented in order to maximize the profit.
 */

int main () {

	//Declare variables for each input value
	int units, rent, increase, maintenance;
	//Declare variables for each calculated value
	int profit, maxProfit, maxUnits;

	//Prompt the user to input required information
	cout << "Maximum Rental Profits by Russell Taylor" << endl;
	cout << "\nEnter the total number of units: ";
	cin >> units;
	cout << "Enter the rent that will keep all units occupied: ";
	cin >> rent;
	cout << "Enter the increase in rent that results in a vacant unit: ";
	cin >> increase;
	cout << "Enter the cost to maintain each rented unit: ";
	cin >> maintenance;
	cout << endl;

	//Record input values for units and rent, for use in calculations below
	int totalUnits = units;
	int initialRent = rent;

	//Calculate and display profit for each number of units rented
	for (int count = 0; count <= totalUnits; count++) {
		units = totalUnits - count;  //Increment number of rented units by -1
		rent = initialRent + (increase * count);  //Increment rent by the amount input by user
		profit = units * (rent - maintenance);  //Calculate profit

		//Display number of rented units, monthly rent, total maintenance costs, and profit
		cout << "Units: " << units;
		cout << "\tRent: $" << rent;
		cout << "\tMaintenance: $" << units * maintenance;
		cout << "\tProfit: $" << profit << endl;

		// Calculate maximum profit and the number of units rented in order to maximize profit
		if (maxProfit < profit) {
			maxProfit = profit;
			maxUnits = units;
		}
	}

	//Display maximum profit and number of units rented to maximize profit
	cout << "\nThe number of units that should be rented to maximize profit is " << maxUnits << endl;
	cout << "The maximum profit is $" << maxProfit << endl;

	return 0;
}
