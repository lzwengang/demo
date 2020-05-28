/*Programming 9*9 ultiplication*
  writting by k2
  copyright k2
  2020.5.10*/

# include <stdio.h>
  int main()
  {
	int i,j,resuit;
        int ret=1;
	for (i=1;i<10;i++)
	{
		for (j=1;j<=i;j++)
		{
			resuit=i*j;
			printf("%d*%d=%-3d",i,j,resuit);
		}
		printf("\n");
	}
	return ret;
  }
  
