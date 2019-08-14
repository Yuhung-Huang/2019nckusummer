#include <stdio.h>
#include <stdlib.h>
int main(){
	int cases;
	scanf("%d",&cases);
	int i;
	for(i=0;i<cases;i++){
		int wallnum,up=0,down=0;
		scanf("%d",&wallnum);
		int wall[100],j;
		for(j=0;j<100;j++){
			wall[j]=0;
		}
		for(j=0;j<wallnum;j++){
			scanf("%d",&wall[j]);
		}
		for(j=0;j<wallnum-1;j++){
			if(wall[j]<wall[j+1]){
				up++;
			}
			if(wall[j]>wall[j+1]){
				down++;
			}
		}

		printf("Case %d: %d %d\n",i+1,up,down);
	}
	return 0;
}
