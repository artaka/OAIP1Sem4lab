#include <iostream>
using namespace std;

int main()
{
    int num, hun,tens,units,rev;
    cout << "Number=";
    cin >> num;
    units = (num%100)%10;
    tens = (num%100)-units;
    hun = num-tens-units;
    rev = units*100+tens+hun/100;
    cout << "Reversed number=" << rev;
}