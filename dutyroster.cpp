#include <iostream>
#include <string>
using namespace std;

int main() 
{ 
    string  name1,name2, name3, name4, chore1 , chore2, chore3, chore4;
    

    cout << " Enter four chores and  four names ";
    cin >> chore1 >> chore2 >> chore3 >> chore4;
    cout << " Enter four names ";
    cin  >> name1 >> name2 >> name3 >> name4;


    cout << " DAY 1: " << endl;
    cout << name1 << " is " << chore1 << endl;
    cout << name2 << " is " << chore2 << endl;
    cout << name3 << " is " << chore3 << endl;
    cout << name4 << " is " << chore4 << endl;

    cout << " DAY 2: " << endl;
    cout << name1 << " is " << chore2 << endl;
    cout << name2 << " is " << chore3 << endl;
    cout << name3 << " is " << chore4 << endl;
    cout << name4 << " is " << chore1 << endl;

    cout << " DAY 3: " << endl;
    cout << name1 << " is " << chore3 << endl;
    cout << name2 << " is " << chore4 << endl;
    cout << name3 << " is " << chore1 << endl;
    cout << name4 << " is " << chore2 << endl;

    cout << " DAY 4: " << endl;
    cout << name1 << " is " << chore4 << endl;
    cout << name2 << " is " << chore1 << endl;
    cout << name3 << " is " << chore2 << endl;
    cout << name4 << " is " << chore3 << endl;

return 0;
}