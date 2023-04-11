/*
 * This program calculates the first 50 entries
 * in the fibonacci sequence using memoization.
 * 
 * @author Christopher Hardy
 * 
*/


#include <iostream>
using namespace std;

int fib(int n){
    //static so memo is remembered every call
    static int memo[50]{ 0 };
    //base case
    if (n == 1 || n == 2)
        return 1;
    //cheack value has been computed
    if (memo[n] > 0)
        return memo[n];

    //recursive step
    return memo[n] = fib(n - 2) + fib(n - 1);
}

int main()
{
    for (int i = 1; i < 50; ++i)
    {
        cout << i << "- " << fib(i) << endl;
    }
}
