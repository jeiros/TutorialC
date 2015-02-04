#include <iostream>
 
int main()
{
    using namespace std;
 
    // nCount holds the current number to print
    int nCount = 1; // start at 1
 
    // Loop continually until we pass number 100
    while (nCount <= 100)
    {
        // For 1 to 9 add a 0 before it to make each number to be two digits
        if (nCount < 10)
        {
            cout << "0" << nCount << " ";
        }
        else
        {    
        cout << nCount << " "; // print the current number
 
        // if nCount is divisible by 20, print a new line
        }
        if (nCount % 20 == 0)
            cout << endl;
 
        nCount = nCount + 1; // go to next number
    } // end of while
} // end of main()