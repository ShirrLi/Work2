#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
    LARGE_INTEGER t1, t2, tc;
    int i,n,a[300000],sum=0,count;

	for(n=2;n<=300000;n=n*2){
        //initialize
        for(i=0;i<n;i++)
        a[i]=i;
         //count_time
        QueryPerformanceFrequency(&tc);
        QueryPerformanceCounter(&t1);
        count=0;
        while(count<1000){
            count++;
            for(i=0;i<n;i++)
                sum+=a[i];}
        QueryPerformanceCounter(&t2);
        cout <<((t2.QuadPart - t1.QuadPart)*1000.0 / tc.QuadPart)<<",";
	}
	return 0;
}

