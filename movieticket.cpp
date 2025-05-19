#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string moviename;
    double adultticketprice;
    double childticketprice;
    int number_of_adult_ticketssold;
    int number_of_child_ticketssold;
    int numberofticketssold;
    double grossamount;
    double percentagetodonated;
    double donationtocharity;
    double netsale;

    cout << "Enter movie name: ";
    getline(cin, moviename);
    cout << "Enter adult ticket price: ";
    cin >> adultticketprice; cout << endl;
    cout << "Enter child ticket price: ";
    cin >> childticketprice; cout << endl;
    cout << "Enter Number of adults tickets sold: ";
    cin >> number_of_adult_ticketssold; cout << endl;
    cout << "Enter Number of child tickets sold: ";
    cin >> number_of_child_ticketssold; cout << endl;
    cout << "Enter percentage of gross amount to be donated: ";
    cin >> percentagetodonated; cout << endl;
    grossamount = (adultticketprice * number_of_adult_ticketssold) + (childticketprice * number_of_child_ticketssold);
    donationtocharity = grossamount * ( percentagetodonated/100 );
    netsale = grossamount - donationtocharity;
    numberofticketssold = number_of_child_ticketssold + number_of_adult_ticketssold;

    cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << setfill('.') << left << setw(35) << "Movie Name: " << right << " " << moviename << endl;
    cout << setfill('.') << left << setw(35) << "Number of tickets sold: " << right << " " <<  numberofticketssold << endl;
    cout << setfill('.') << left << setw(35) << "Gross Amount: " << right << " " << "$ " << grossamount << endl;
    cout << setfill('.') << left << setw(35) << "Percentage of Gross Amount Donated: " << right << " "  << percentagetodonated << "%" << endl;
    cout << setfill('.') << left << setw(35) << "Amount Donated: " << right << " " << "$ " << donationtocharity << endl;
    cout << setfill('.') << left << setw(35) << "Net Sale: " << right << " " << "$ " << netsale << endl;





return 0;
}