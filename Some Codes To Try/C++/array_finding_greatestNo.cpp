#include <iostream>
using namespace std;
int main()
{
  int i , n ;
  long double number[10];
  cout<<"Enter any no. between 1 to 10--";
  cin>>n;

  for(i=0 ; i<n; i++)
  {
    cout<<"enter the no."<<i<<"\t";
    cin>>number[i];
  }
  for(int  i=1 ; i<n ;i++)
  {
    if (number[0] <number[i])
    number[0]= number[i];
  }
  cout<<"The greatest no. among all is "<<number[0]<<"\n";
  return 0;
}
