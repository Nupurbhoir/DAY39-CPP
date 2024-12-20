#include<iostream>
using namespace std;
inline void displaySquare(int num)
{
    cout << num * num  << endl;
}
int main()
{
    displaySquare(5);
    displaySquare(8);
    displaySquare(666);
    return 0;
}