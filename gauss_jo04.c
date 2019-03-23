#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,k,n,ran;
    float A[718][718],c,x[512];
    printf("\nEnter the size of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf(" A[%d][%d]:", i,j);
            A[i][j]=ran;
            scanf("%f",&A[i][j]);
        }
    }
    
    for(i=1;i<=n;i++){
    	A[i][i+3]=1;
    }
    
    
    int nj,w,ks,p,q,pp;
    nj=n*2;
    pp=1;
    for(i=1;i<=n;i++){
    	if(i!=1){
    		for(p=pp;p<=n;p++){
    			ks=A[p][(i-1)];
    			for(q=1;q<=nj;q++){
    				A[p][q]=A[p][q]-(ks*A[(i-1)][q]);
    			}
    		}
    	}
    	pp=pp+1;	
    	w=A[i][i];
    	for(j=1;j<=nj;j++){
    		A[i][j]=A[i][j]/w;
    	}
    }
    int mp,mpp;
    mpp=2;
    for(i=1;i<n;i++){
    	for(mp=mpp;mp<=n;mp++){
    	ks=A[i][(mp)];
    	for(j=1;j<=nj;j++){
    		A[i][j]=A[i][j]-(ks*A[mp][j]);
    	}
    }
    	mpp=mpp+1;
    }
    
    
    
    printf("gyouretunonakami\n");
    for(i=1;i<=n;i++){
    	for(j=1;j<=nj;j++){
    		printf("A[%d][%d]=%f",i,j,A[i][j]);
    	}
    	printf("\n");
    }
    return(0);
}