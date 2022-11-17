
//Hannah Coleman J00963674
//11/15/2022
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
const string SENTINEL = "-1";
int main() {
	string name;
	int numOfVolunteers;
	int numOfBoxesSold;
	int totalNumOfBoxesSold;
	double costOfOneBox;


	cout << fixed << showpoint << setprecision(2);

	totalNumOfBoxesSold = 0;
	numOfVolunteers = 0;

	cin >> name;

	while (name != SENTINEL)
	{
		cin >> numOfBoxesSold;
		totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;

		numOfVolunteers++;
		cin >> name;
	}
	cout << endl;
	cin >> costOfOneBox;
	cout << endl;
	cout << "Total number of boxes sold: "
		<< totalNumOfBoxesSold << endl;	
	cout << "Total money made: $"
		<< totalNumOfBoxesSold * costOfOneBox << endl;
	if (numOfVolunteers != 0)
		cout << "Average number of boxes sold by each person: "
		<< totalNumOfBoxesSold / numOfVolunteers
		<< endl;
		
	return 0;
}
