#include <stdio.h>
int main(){
	int cases;
	int a[100];
	int i;
	for(i=0;i<100;i++)	{
		a[i]=0;
	}
	scanf("%d",&cases);
	i=0;
		for(i=0;i<cases;i++){
		int n;
		scanf("%d",&n);
		n=n*567;
		n=n/9;
		n=n+7492;
		n=n*235;
		n=n/47;
		n=n-498;
		int ans;
		ans = n%100;
				ans = ans/10;
				if(ans<0){
			ans = -ans;
		}
		a[i]=ans;
		
		
	}
		i=0;
	for(i=0;i<cases;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
