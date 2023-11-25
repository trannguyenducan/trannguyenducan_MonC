// This program has three functions: main, first and second.
#include <iostream>
using namespace std;
//*************************************
// Definition of function first       *
// This function display a message    *
//*************************************
void first()
{
    cout << "I am mow inside the function first.\n";
}
//*************************************
// Definition of function first       *
// This function display a message    *
//*************************************
void second()
{
    cout << "I am now inside the function second .\n";
}
//*************************************
// Function main                      *
//*************************************
int main()
{
    cout << "I am starting in function main.\n";
    first();    // Call function first
    second();   // Call function second
    cout << "Back in functon main again.\n";
    return 0;
}