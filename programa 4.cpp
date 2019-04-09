#include <iostream>

using namespace std;


int Factorial_recursiva(int n);
int main()
{
 int n, factorial;
 cin >> n;
 factorial = Factorial_recursiva(n);
 cout << factorial;
 return 0;
}

int Factorial_recursiva(int n)
{
 if(n < 0)
  return 0;
 else if(n > 1)
  return n * FuncionFactorial(n-1);
 else
  return 1;
}