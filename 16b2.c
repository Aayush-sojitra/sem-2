 //Count number of positive, negative and zero elements from 3 X 3 matrix.
 #include<stdio.h>
void main(){
	int a[3][3],i,j,pos=0,neg=0,zero=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter an element in a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>0)
				pos++;
			else if(a[i][j]<0)
				neg++;
			else if(a[i][j]==0)
				zero++;
		}
	}
	printf("positive no. is :%d\n",pos);
	printf("negative no. is :%d\n",neg);
	printf("zero no. is :%d",zero);		
}
