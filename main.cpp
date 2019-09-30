#include <iostream>

using namespace std;

int main()
{
    int i, n, sum = 0, num;
     cout<< "How many numbers you want to add(more than one): ";
     cin>>n;

     cout<< "Enter "<<n<<" "<<"numbers: ";
     for(i = 0; i < n; i++){
         cin>>num;
         sum = sum + num;

     }
     cout<<"Sum of all numbers: "<<" "<<sum<<endl;
    return 0;
}
