#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("bubble_in.txt");
int main()
{
    int i;
    for(i=1;i<=100000;i++)
        fout<<i<<endl;
}


