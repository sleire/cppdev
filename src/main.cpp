# include <iostream>
# include <cmath>
using namespace std;

int main()
{
    // prompt for input, n
    int n = 0;
    cout<<"Enter number for calculation: \n";
    cin>>n;
    
    // calculate N^2, N^3 and N^4 of integers up to n
    cout<<"N \t"<<"N^2 \t"<<"N^3 \t"<<"N^4 \n"; // headers
    for (int i=0;i<=n;++i)
        cout<<i<<"\t"<<pow(i,2)<<"\t"<<pow(i,3)<<"\t"<<pow(i,4)<<"\n";

    return 0;
}
