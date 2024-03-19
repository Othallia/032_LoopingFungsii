#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    
    srand(time(0));

    bilangan = rand() % 10;

    cout << "Bilangan awal = " << bilangan << endl;
    do
    {
        cout << "Perulangan DO.. WHILE" << endl;
        bilangan = rand() % 10; /* code */
        cout <<"Bilangannya = " << bilangan << endl;

    } while (bilangan > 5); 
}