#include <iostream>
#include <sys/time.h>
using namespace std;

int main()
{

    struct timeval beg, end;
    int n,step=5,i,j,count;
	int a[1000],b[1000][1000],sum[1000];

	for(n=5;n<=1000;n+=step){
        //initialize
		for(i=0;i<n;i++){
			a[i]=i;
			for(j=0;j<n;j++)
				b[i][j]=i+j;}
        for(j=0;j<n;j++){
			sum[j]=0;}

        //count_time
        gettimeofday(&beg, NULL);
        count=0;
        while(count<1000){
            count++;
             for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                    sum[j]+=b[i][j]*a[i];}}
      gettimeofday(&end, NULL);
      cout << "Scale:"<<n<<" TimeConsume:" << (long long)1000000*end.tv_sec+(long long)end.tv_usec- (long long)1000000*beg.tv_sec-(long long)beg.tv_usec<<"us"<<endl;

        //change_steps
        if(n==50)
            step=10;
        if(n==100)
            step=100;
	}
	return 0;
}
