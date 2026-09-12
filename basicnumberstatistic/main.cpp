#include<iostream>
using namespace std;

void welcome();
void array();

int main(){
    string programend;
    cout << endl;
    welcome();
    while(true){
        cout << "Type y to run or anything to quit" << endl;
        cin >> programend;
        if(programend == "y"){
            array();
        }
        else{
            break;
        }
    }
}