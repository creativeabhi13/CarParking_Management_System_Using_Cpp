/*
CAR PARKING MANAGEMENT SYSTEM USING C++
MAIN OBJECTIVE
ADD VEHICLE TO THE PARKING
DELETE VEHICLE TO THE PARKING
UPDATE VEHICLE


*/
#include <iostream>
using namespace std;
// Declaration of User Define Function Signature //
int menu();
void bus();
void cycle();
void riksha();
void showdetail();
void Delete();
int nor = 0, nob = 0, noc = 0, amount = 0, count = 0;

int main()
{
    int b;
    do
    {
        switch (menu())
        {
        case 1:
            bus();
            break;
        case 2:
            cycle();
            break;
        case 3:
            riksha();
            break;

        case 4:
            showdetail();
            break;
        case 5:
            Delete();
            break;
        default:
            cout << "DEAR SIR YOU HAVE SELECTED WRONG CHOICE PLEASE ENTER AGAIN" << endl;
        }

        cout << "TO ADD MORE VEHICLE DETAILS PLEASE PRESS 0 ELSE ANY NUMBER FOR EXIT" << endl;
        cout << "ENTER YOUR CHOICE=" << endl;
        cin >> b;
    } while (b == 0);
    cout
        << "THANK YOU PLEASE VISIT AGAIN" << endl;
}
int menu()
{
    int ch;
    cout << "*************************" << endl;
    cout << "PRESS 1 FOR BUS & CHARGES IS 100 INR" << endl;
    cout << "PRESS 2 FOR CYCLE & CHARGES IS 70 INR" << endl;
    cout << "PRESS 3 FOR RIKSHAW & CHARGES IS 50 INR" << endl;
    cout << "PRESS 4 TO SHOW THE DETAIL " << endl;
    cout << "PRESS 5 TO DELETE PARTICULAR RECORD" << endl;
    cout << "PRESS 6 FOR EXIT" << endl;
    cout << "*************************" << endl;
    cout << "PLEASE ENTER YOUR CHOICE=" << endl;
    cin >> ch;
    return ch;
}
void bus()
{
    nob++;
    amount = amount + 100;
    count++;
}
void riksha()
{
    nor++;
    amount = amount + 50;
    count++;
}
void cycle()
{
    noc++;
    amount = amount + 70;
    count++;
}

void showdetail()
{
    cout << "*************************************" << endl;
    cout << "TOTAL NUMBER OF BUSES STANDING IN PARKING=" << nob
         << endl;
    cout << "TOTAL NUMBER OF CYCLES STANDING IN PARKING=" << noc
         << endl;
    cout << "TOTAL NUMBER OF RIKSHAW STANDING IN PARKING=" << nor
         << endl;

    cout << "TOTAL NUMBER OF VEHICLE STANDING IN PARKING AREA=" << count
         << endl;
    cout << "TOTAL COLLECTION OF PARKING AMOUNT=" << amount
         << endl;
    cout << "**************************************" << endl;
}
void Delete()
{
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
    count = 0;
}