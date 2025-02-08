/*
Asignación 1: Binary Digit

Nombre: Javier A. Martinez Ballagas

Núm. Est: 801-24-2310

Colaboraciones: 
...
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    // Desplegar Proposito

    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl;

    // Declarar Variables

    string mName;

    double mTicketsAdults;
    double mTicketsChildren;

    double mGrossAdults;
    double mGrossChildren;

    double mGrossProfit;
    double mNetProfit;

    double mDistTax;

    // Recibir Datos de Usuario

    cout << "Enter the name of the movie: ";
    getline(cin, mName);
    cout << "Enter the amount of adult tickets sold: ";
    cin >> mTicketsAdults;
    cout << "Enter the amount of child tickets sold: ";
    cin >> mTicketsChildren;

    // Hacer calculos

    mGrossAdults = mTicketsAdults * 10;
    mGrossChildren = mTicketsChildren * 6;

    mGrossProfit = mGrossAdults + mGrossChildren;
    mNetProfit = mGrossProfit * 0.2;

    mDistTax = mGrossProfit - mNetProfit;

    // Desplegar Resultados

    cout << endl;

    cout << "Movie Name: " << setw(27) << mName << endl;
    cout << "Adult Tickets Sold: " << setw(15) << mTicketsAdults << endl;
    cout << "Child Tickets Sold: " << setw(15) << mTicketsChildren << endl;
    cout << "Gross Box Office Profit: " << setw(4) << "$" << setw(9) << setprecision(2) << fixed << mGrossProfit << endl;
    cout << "Net Box Office Profit: " << setw(6) << "$" << setw(9) << mNetProfit << endl;
    cout << "Amount Paid to Distributor: " << "$" << setw(9) << mDistTax << endl;


    // Devolver funcion a 0

    return 0;

}
