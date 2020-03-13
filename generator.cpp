#include <iostream>
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
ofstream out;
out.open("liczby.txt");

int przedzialp = 2,przedzialk = 1000000;

for (int i=przedzialp;i<=przedzialk;i++)
{
    if (czypierwsza(i))
    {
            out<<i<<endl;
    }
}




return 0;
}
