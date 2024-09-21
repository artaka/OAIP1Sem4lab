#include <iostream>
using namespace std;

int main()
{
    float N, M, Sum;
    cout << "N=";
    cin >> N;
    cout << "M=";
    cin >> M;
    Sum = ((2*60*M +(N-1)*10)/2)*N;
    cout << "Sum=" << Sum/60;
}