#include<iostream>
using namespace std;

void welcome(string name){
    cout << "|===============|" << endl;
    cout << "|NUMBER ANALYZER|" << endl;
    cout << "|===============|" << endl;
    cout << endl;
    cout << "Welcome " << name << endl;
}

void array(int size){
    double *p = new double[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i=0;i<size;i++){
        cin >> p[i];
    }
    cout << "Array you created: " << endl;
    for(int i=0;i<size;i++){
        cout << p[i] << " , ";
    }
    cout << endl;
    double largest = p[0];
    for(int i=0;i<size;i++){
        if(p[i] > largest){
        largest = p[i];
        }
    }
    cout << "Largest number: " << largest << endl;

    double smallest = p[0];
    for(int i=0;i<size;i++){
        if(p[i] < smallest){
            smallest = p[i];
        }
    }
    cout << "Smallest number: " << smallest << endl;

    double sum;
    for(int i=0;i<size;i++){
        sum += p[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum/size;
    cout << endl;
    delete[] p;
    p = nullptr;
}

    
int main(){
    string name;
    int size;
    string end;
    cout << "What is your name: ";
    cin >> name;
    cout << endl;
    welcome(name);
    end = "y";
    while(end == "y"){
    cout << "How many number do you want to analyze: ";
    cin >> size;
    array(size);
    cout << "Type y to continue or q to quit: ";
    cin >> end;
    cout << endl;
    }
}
