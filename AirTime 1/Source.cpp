#include<iostream>

using namespace std;
//class declaration
class AirTime {
	int hrs, min, sec;			//private by default.
public:
	void init();
	void settime();
	void disptime() const;

};
//function definition.
void AirTime::init() {
	 hrs =  min = sec = 0;
	cout << hrs << ":" << min << ":" << sec << endl;
}
void AirTime::settime() {
	//getting time from the system.
	cout << __TIME__ << endl;
}
void AirTime::disptime() const {
	cout <<"Timing : " << __TIME__ << endl;
}
int main() {
	AirTime arvtime, deptime;
	int choice;
	while (true) {
		cout << "________________MAIN MENU_______________" << endl;
		cout << " 1.Initialization" << endl;
		cout << " 2.Arrival" << endl;
		cout << " 3.Departure" << endl;
		cout << " 4.Exit" << endl;
		cout << "_________________________________________"<<endl;
		cout << "Choice an option: " << endl;
		cin >> choice;

		//for initialization.
		if (choice == 1) {
			system("cls");
			cout << "			Initialization\n\n";
			cout << " 5.initialization of arrival time." << endl;
			cout << " 6.initialization of Departure time." << endl;
			cout << " 7.initialization of both." << endl;
			cout << "Choice an option: ";
			cin >> choice;
			if (choice == 5) {
				cout << " initialization of arrival time:";
				arvtime.init();
				cout << endl << endl;
			}
			if (choice == 6) {
				cout << " initialization of departure time:";
				deptime.init();
				cout << endl << endl;
			}
			if (choice == 7) {
				cout << " initialization of both:";
				arvtime.init();
				deptime.init();
				cout << endl << endl;
			}
		}

		//for arrival time .
		if (choice == 2) {
			system("cls");
			cout << "_____________ARRIVAL____________\n\n";
			cout << "8.Set arrival time " << endl;
			cout << "9.Display arrival time " << endl;
			cout << "What do you want to do : " << endl;
			cin >> choice;
			if (choice == 8) {
				arvtime.settime();
			}
			if (choice == 9) {
				arvtime.disptime();
			}
			cout << endl << endl;
		}

		//for Departure time .
		if (choice == 3) {
			system("cls");
			cout << "_____________DEPARTURE____________\n\n";
			cout << "10.Set arrival time " << endl;
			cout << "11.Display arrival time " << endl;
			cout << "What do you want to do : " << endl;
			cin >> choice;
			if (choice == 10) {
				deptime.settime();
			}
			if (choice == 11) {
				deptime.disptime();
			}
			cout << endl << endl;
		}

		//For exit.
		if (choice == 4) {
			cout << EXIT_SUCCESS;
			break;
		}
				
		else {
			cout << "input a valid choice." << endl;
		}
		/*arvtime.init();
			deptime.init();
			arvtime.settime();
			deptime.settime();
			arvtime.disptime();
			deptime.disptime();*/
	}
}
