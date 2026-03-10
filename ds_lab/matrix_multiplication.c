#include <stdio.h>
int matMultiple(int ar[][100],int br[][100],int cr[][100],int m, int n,int o,int p){
	int increment = 0,sop=0,i,j,k;
	if(n!=o){
		return 0;
	}
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			sop=0;
			for(k=0;k<p;k++){
				sop+=(ar[i][k]*br[k][j]);
			}
			cr[i][j]=sop;
		} 
	}
	return 1;
}
int main(){
	int ar[100][100],br[100][100],cr[100][100],m,n,o,p,i,j;
	printf("Enter the row amd column of 1st matrices : ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of the 1st matrix\n :" );
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Enter the row and column of the 2nd matrix\n :");
	scanf("%d%d",&o,&p);
	printf("Enter the elements of the 2nd matrix\n :");
        for(i=0;i<o;i++){
                for(j=0;j<p;j++){
                        scanf("%d",&br[i][j]);
                }
        }
	printf("Entered Matrices are \n");
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        printf("%d\t",ar[i][j]);
                }
		printf("\n");
        }
	printf("\n");
	for(i=0;i<o;i++){
                for(j=0;j<p;j++){
                        printf("%d\t",br[i][j]);
                }
		printf("\n");
        }
        printf("\n-------------------------------------------------------------------\n");
	if(matMultiple(ar,br,cr,m,n,o,p)){
		for(i=0;i<m;i++){
			for(j=0;j<p;j++){
				printf("%d\t",cr[i][j]);
			}
			printf("\n");
		}
	}else{
		printf("Multiplication not possible for different column and row numbers:\n");
	}
	return 0;
}
