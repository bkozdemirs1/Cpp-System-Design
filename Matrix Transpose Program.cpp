#include <iostream>
using namespace std;

int main() {

	int c;
	int num1, num2;
	double sum = 0;

	while(true) {

		cout <<"\n--- MENU ---";
		cout <<"\n1. View Message";
		cout <<"\n2. Perform Division";
		cout <<"\n3. Exit";

		cout<<"\nPlease make your choice: ";
		cin>>c;

		if (c == 3) {
			cout <<"Exiting the program...";
			break;
		}

		else {
			switch(c) {
			case 1: {
				cout <<"Welcome to the Program!";
				break;
			}

			case 2: {
				cout <<"Please enter first number: ";
				cin >> num1;
				cout<<"Please enter second number: ";
				cin >> num2;

				if(num2 == 0) {
					cout << "0 can not be divided!";
					break;
				}
				else {
					sum = num1 / num2;
				}
				break;
			}
			}
		}
	}

}
