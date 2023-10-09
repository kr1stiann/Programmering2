#include <iostream>
#include <vector>

using namespace std;

int main() {

    int nTasks;
    string choice;
    cout << "Do you want to add something to your list?\nY/N:";
    cin >> choice;
    
    
    if (choice != "Y") {
        return 0;
    }

    cout << "Alright, how many tasks do you have to do today?";
    cin >> nTasks;

    vector<string> tasks;

    for(int i=0;i<nTasks;i++) {
        
    }




    





}