#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    char let = ' ';
    cout << "Введите символ для закраски: ";
    cin >> let;
    cout << setw(3) << " ";
    cout << setw(3) << setfill(let) <<  let << setw(1) << setfill(' ') << " " << let << let << let << endl;
    cout << setw(2) << " " <<let << let<< let<< let << let <<let << let<< let << let << endl;
    cout << setw(3) << " " << let << let << let << let<< let << let << let<< endl;
    cout << setw(4) << " " << let<< let<< let << let<< let<< endl;
    cout << setw(5) << " " << let<< let<< let<< endl;
    cout << setw(6) << " " << let << endl;
	return 0;	
}