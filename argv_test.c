/*Commend line parameter experiment.
 Writting by k2
 copyright k2
 2020.5.10
example: argv_test xx xxx ...... */

# include <stdio.h>
# include <string.h>
# include <strings.h>

int main(int argc,char *argv[])
{
	int ret=0;
	if (argc > 0){
		printf("参数个数argc=%d\n",argc);
	}
	else{
		return ret;
	}
	for (int i=0;i<argc;i++){
		printf("this is %d argv的内容为：%s\n",i,argv[i]);
	}
	return ret;
}
