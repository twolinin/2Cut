#include<stdio.h>
#include<stdlib.h>
# define Size 2000

int map[Size][Size]={0};
int set[Size]={0};
int set1_num,set2_num;
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
	{
		set1_num = set2_num = 0 ;
		
		for(j=0;j<VertexNum;j++)
			if( map[i][j] && set[j] ==1 ) set1_num++;
			else if( map[i][j] && set[j] ==2 ) set2_num++;
		
		if(set1_num>set2_num) set[i] = 2;
		else set[i] = 1;
		
	}
	
	for(i=0;i<VertexNum;i++)
		if(set[i]==1)
			for(j=0;j<VertexNum;j++)
				if( i!=j && set[j]==2 && map[i][j])
					CutNum++;
					
	printf("\%d\n",CutNum);

 return 0;
}

