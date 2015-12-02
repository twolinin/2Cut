#include<stdio.h>
#include<stdlib.h>
#include<time.h>
# define Size 2000


int map[Size][Size]={0};
int set[Size]={0};

int VertexNum=0;
int CutNum=0;

int main()
{
    int i,j;
    
    srand(time(NULL));
    
	scanf("%d",&VertexNum);
    
	for(i=0; i<VertexNum; i++)
        for(j=0; j<VertexNum; j++)
            scanf("%d",&map[i][j]);

	for(i=0;i<VertexNum;i++)
		if(rand()%2) set[i]=1;
	
	for(i=0;i<VertexNum;i++)
		if(set[i])
			for(j=0;j<VertexNum;j++)
				if( i!=j && !set[j] && map[i][j])
					CutNum++;
					
	printf("%d\n",CutNum);

 return 0;
}

