#include<iostream>
#include "functions.h"
using namespace std;

void welcome(){
    cout << "|===============|" << endl;
    cout << "|NUMBER ANALYZER|" << endl;
    cout << "|===============|" << endl;
    cout << endl;
}

void array(){
    int size;
    cout << "How many number do you want to analyze: ";
    cin >> size;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    else{
        if(size <= 0){
            cout << "Invalid array size" << endl;
        }
        else{
            double *p = new double[size];
            cout << "Enter " << size << " numbers: " << endl;
            for (int i=0;i<size;i++){
                cout << "Enter " << i+1 << " number" << endl;
                cin >> p[i];
            }

            if(cin.fail()){
                cout << "Invalid input" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                delete[] p;
                p = nullptr;
            }

            else{
                cout << "Array you created: " << endl;
                for(int i=0;i<size;i++){
                cout << p[i] << " , ";
                }
                cout << endl;
                double largest = p[0];
                double smallest = p[0];
                double sum = 0;
                for(int i=0;i<size;i++){
                    if(p[i] > largest){
                        largest = p[i];
                    }
                    if(p[i] < smallest){
                        smallest = p[i];
                    }
                    sum += p[i];
                }
                cout << "Largest number: " << largest << endl;
                cout << "Smallest number: " << smallest << endl;
                cout << "Sum: " << sum << endl;
                cout << "Average: " << sum/size;
                cout << endl;
                delete[] p;
                p = nullptr;
            }
        }
    }
}
