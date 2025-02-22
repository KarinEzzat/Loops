 #include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of the square: ";
    cin>>x;
    if(x<=0){
        cout << "Size must be a positive integer.\n";
        return 1; // Exit the program with an error code
    }
    for(int i=1;i<=x;i++)//rows
        {
    for(int j=1;j<=x;j++)//columns
    {
    if(i==1||i==x){
    cout<<"* ";}
    else if(j==1||j==x){
    cout<<"* ";}
    else {
    cout<<"  ";
    }}
 cout<<endl;
  }}