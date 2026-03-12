#include <iostream>
using namespace std;

int main() {

	int r_type;
	double sum = 0;
	int width, height, length;
	int index, i;

	cout<<"Please enter number of room(s): ";
	cin>>index;

	int roomnumber[index];

	for(i = 0 ; i < index ; i++) {

		cout<<"\nRoom "<<(i+1)<<endl;
		
    cout<<"Length (meters): ";
		cin>>length;
		
    cout<<"Width (meters): ";
		cin>>width;
		
    cout<<"Height (meters): ";
		cin>>height;
		
    cout<<"Enter renovation type (1=Painting, 2=Flooring, 3=Full renovation): ";
		cin>>r_type;
		
		if(r_type == 1) {
		    sum = 2 * (length * height) + 2 * (width * height);
		    cout<<"Room "<<(i+1)<<" "<<sum<<" "<<"TL";
		}
		
		else if(r_type == 2) {
		    sum = length * width * 30;
		    cout<<"Room "<<(i+1)<<" "<<sum<<" "<<"TL";
		}
		
		else {
		    sum = (2 * (length * height) + 2 * (width * height) + length * width) * 50;
		    cout<<"Room "<<(i+1)<<" "<<sum<<" "<<"TL";
		}
	}
}
