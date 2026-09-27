#include <iostream>
#include <string>

using namespace std;

int main() {
	//setup out variables
	int i;
	int d;
	int m;

	//setup our array for the program
	string Days[] = { "Monday", "Tuesday", "Wendsday", "Thurday", "Friday", "Saturday", "Sunday" };
	string Months[] = { "January","February", "March", "April","May", "June", "july", "Augest", "september","october", "november", "december" };
	
	// we use this to setup the main where user input what case they going to use 
	cout << "UI main" << endl;
	cout << "1 to enter day 1-7" << endl;
	cout << "2 to enter month 1-12" << endl;
	cout << "3 to exit" << endl;
	cin >> i;
	
		do {
           
			switch (i) {

			case 1:
				cout << "what day" << endl;
				cin >> d;
				//use if the number is within the range of our array
				if (d < 8 && d > 0) {
					//we use this because in program range 0 to 8 and if we want 1 to 7 we can make it look like it
					//by less by 1 ex if they enter 1 it be 0 so it look first unit then the secound one
					d = d--;

					//this help find our day within our array and then output
					cout << Days[d] << endl << endl;
					cout << "UI main" << endl;
					cout << "1 to enter day 1-7" << endl;
					cout << "2 to enter month 1-12" << endl;
					cout << "3 to exit" << endl;
					cin >> i;
				}
				//use if they enter a anything but number
				else if (cin.fail()){
					cin.clear();
					cin.ignore();
					cout << "invaild day try again" << endl << endl;
					break;
				}
				//use if they enter a number outside our range of the array
				else {
					cout << "invaild day try again" << endl << endl;
					break;
				}

				break;
			case 2:
				cout << "what month" << endl;
				cin >> m;
				//now we do the same we did in case 1 but for the month and use the method we did as before
				if (m < 13 && m > 0) {
					m = m--;

					// we get our month then print it and double endl for more readable 
					cout << Months[m] << endl << endl;
					cout << "UI main" << endl;
					cout << "1 to enter day 1-7" << endl;
					cout << "2 to enter month 1-12" << endl;
					cout << "3 to exit" << endl;
					cin >> i;
				}
				//use if they enter a anything but number
				else if (cin.fail()) {
					cin.clear();
					cin.ignore();
					cout << "invaild month try again" << endl << endl;
					break;
					//use if they enter a number outside our range of the array
				}
				else {
					cout << "invaild month try again" << endl << endl;
					break;
				}
				break;
			case 3:
				// use to have the user a option to end/leave the program
				cout << "now exit program" << endl;
				break;

			default:
				//use if they enter a anything but number
				cin.clear();
				cin.ignore();
				cout << "inpiut is invalid" << endl << endl;
				cout << "UI main" << endl;
				cout << "1 to enter day 1-7" << endl;
				cout << "2 to enter month 1-12" << endl;
				cout << "3 to exit" << endl;
				cin >> i;
				break;

			}
			//use when the program loop and leave when is hit 3 then stop the loop
		} while (i != 3);
	
//this end the program as a whole
	return 0;
}