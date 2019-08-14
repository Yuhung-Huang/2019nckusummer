#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int cases,i;
	scanf("%d",&cases);
	for(i=0;i<cases;i++){
		int coins,times;
		scanf("%d %d",&coins,&times);
		int *coinarr = malloc((coins+1)*sizeof(int));
		int *ansarr = malloc((coins+1)*sizeof(int));
		int j;
		
		int q;
		for(q=1;q<=coins;q++){
			ansarr[q]=0;
		}
		for(j=1;j<=times;j++){
			int k,first;
			scanf("%d",&first);
			for(k=1;k<=2*first;k++){
				scanf("%d",&coinarr[k]);
			}
			char state;
			getchar();
			scanf("%c",&state);
			for(k=1;k<=2*first;k++){
				
				if(state=='='){
					ansarr[coinarr[k]]=1;
					
				}
				if(state=='>'||state=='<'){
					
					if(ansarr[coinarr[k]]!=1){
						ansarr[coinarr[k]]=-1;
					}
				}

								
			}
		
		}
		
		int w,count=0,one=0,zero=0,minus=0;
		for(w=1;w<=coins;w++){
			if(ansarr[w]==1){
				one++;
			}
			if(ansarr[w]==0){
				zero++;
			}
			if(ansarr[w]==-1){
				minus++;
			}
		}
		

		if(zero>1||minus>1){printf("0\n");
			if(i<cases-1){printf("\n");}
		}
		if(one==coins-1){
			int v;
			for(v=1;v<=coins;v++){
				if(ansarr[v]==0||ansarr[v]==-1){printf("%d\n",v);}
			}
			 if(i<cases-1){printf("\n");}

		
		}
		
		free(ansarr);
		free(coinarr);
	}
	return 0;
}
