#include <iostream>
#include <algorithm>
#include <fstream>
#include <chrono>

using namespace std;
using namespace std::chrono;


ifstream fin("bubble_in.txt");
ofstream fout("bubble_out.txt");

int main()
{
    int v[100000],aux,ok=0,i,var;
    cout << chrono::high_resolution_clock::period::den << endl;

	auto start_time = chrono::high_resolution_clock::now();
	for(i=0;i<100000;i++)
        fin>>v[i];
    while(ok==0)
    {
        ok=1;
        for(i=0;i<99999;i++)
        {
            if(v[i]>v[i+1])
            {
                ok=0;
                var=v[i];
                v[i]=v[i+1];
                v[i+1]=var;
            }
        }
    }
    for(i=0;i<100000;i++)
        cout<<v[i]<<" ";
	auto end_time = chrono::high_resolution_clock::now();

	cout << chrono::duration_cast<chrono::seconds>(end_time - start_time).count() << ":";
	cout << chrono::duration_cast<chrono::microseconds>(end_time - start_time).count() << ":";
	return 0;
}

