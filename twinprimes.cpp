#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int czypierwsza(int a)
{
if(a<2)
return false;

for(int i=2;i*i<=a;i++)
if(a%i==0)
return false;
return true;
}

int main ()
{
    int licznik = 0;
ifstream in;
in.open("liczby.txt");


vector <int> x;

int n;

while(in>>n)
{
    x.push_back(n);
}

for (int i=0;i<x.size();i++)
{
    if(x[i]+2==x[i+1]||x[i]-2==x[i-1])
    {

        licznik++;
    }
}

cout << licznik;

return 0;
}
