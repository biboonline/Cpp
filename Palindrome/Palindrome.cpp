#include <iostream>

using namespace std;
int main()
{
    int x, digit, reversed = 0, num = 0;
    cout << "enter a number" <<endl;
    cin >> num;
    x = num;
    while(x != 0)
    {
        digit = x % 10;
        reversed = (10 * reversed) + digit; 
        x /= 10;
    }

    if(num == reversed)
    {
        cout<< "palindrome" <<endl;
    }

    cout << "reversed " << reversed;
    return 0;
}