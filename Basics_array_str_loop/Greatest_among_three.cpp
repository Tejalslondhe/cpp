#include <iostream>

using namespace std;

int main() {

    float num1, num2, num3;

    cout << "Enter 1st number : ";
    cin >> num1;

    cout << endl << "Enter 2nd number : ";
    cin >> num2;

    cout << endl << "Enter 3rd number : ";
    cin >> num3;

    if(num1 >= num2) {

        if(num1 >= num3) {
            cout << num1 << " is largest number"<<endl;
        } else {
            cout << num3 << " is largest number"<< endl;
        }
        
    } else {

        if(num2 >= num3) {
            cout  << num2 << " is largest number"<< endl;
        } else {
            cout << num3 << " is largest number"<< endl;
        }

    }

    return 0;
}
