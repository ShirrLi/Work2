
#include <iostream>
#include <math.h>
#include <sys/time.h>

using namespace std;

int main()
{
   struct timeval beg, end;
    int i,n,a[300000],sum=0,count;

	for(n=2;n<=300000;n=n*2){
        //initialize
        for(i=0;i<n;i++)
        a[i]=i;
         //count_time
        gettimeofday(&beg, NULL);
        count=0;
        while(count<1000){
            count++;
            for(i=0;i<n;i++)
                sum+=a[i];}
       gettimeofday(&end, NULL);
      cout << "Scale:"<<n<<" TimeConsume:" << (long long)1000000*end.tv_sec+(long long)end.tv_usec- (long long)1000000*beg.tv_sec-(long long)beg.tv_usec<<"us"<<endl;
	}
	return 0;
}
