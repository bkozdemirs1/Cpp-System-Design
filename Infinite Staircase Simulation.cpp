#include <iostream>
using namespace std;

int main() {
    
    int step;
    int maxstep;
    string c;
    
    step = 0;
    
    cout<<"Enter max step: ";
    cin>>maxstep;
    
    cout<<"Starting to climb the staircase...";
    
    while(step < maxstep) {
        
        cout<<"\nContinue climbing? (y/n): ";
        cin>>c;
        
        if(c == "y") {
            step++;
            cout<<"\nClimbed step"<<" "<<step;
        }
        
        else {
            cout<<"User stopped climbing";
            cout<<"\nTotal climbed step: "<<step;
            break;

        if(step == maxstep) {
            cout<<"Maximum steps reached!";
            cout<<"\nTotal climbed step: "<<step;
            break;
        }        
    }
}
