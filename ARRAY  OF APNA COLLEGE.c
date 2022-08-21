#include<stdio.h>
int main(){
	int marks1=98;
	int marks2=99;
	int marks3=97;
	
	int marks[]={98,99,97};
	return 0;
}

#include<stdio.h>
int main(){
	int marks[3];
	printf("enter phy : ");
	scanf("%d",&marks[0]);
	
	printf("enter che : ");
	scanf("%d",&marks[1]);
	
	printf("enter math : ");
	scanf("%d",&marks[2]);
	
	printf("phy=%d, che=%d, math=%d", marks[0], marks[1], marks[2]);
	return 0;
}

//WAP to enter priceof 3 items and print their fnal cost with cost
#include<stdio.h>
int main(){
	float price[3];
	printf("enter 3 prices : ");
	scanf("%f",&price[0]);
	scanf("%f",&price[1]);
	scanf("%f",&price[2]);
	
    printf("total price 1 : %f",price[0]+(0.18*price[0]));
	printf("total price 2: %f",price[1]+(0.18*price[1]));
	printf("total price 3: %f",price[2]+(0.18*price[2]));
	
	return 0;
}

//WAP to enter priceof 3 items and print their fnal cost with cost
#include<stdio.h>
int main(){
	float price[3]={100.0, 200.0, 300.0};
	
    printf("total price 1 : %f",price[0]+(0.18*price[0]));
	printf("total price 2 : %f",price[1]+(0.18*price[1]));
	printf("total price 3 : %f",price[2]+(0.18*price[2]));
	
	return 0;
}

#include<stdio.h>
int main(){
	int age=19;
	int *ptr=&age;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	return 0;
}

//int
#include<stdio.h>
int main(){
	int age=19;
	int *ptr=&age;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	ptr--;
	printf("%d\n",ptr);
	return 0;
}

//float
#include<stdio.h>
int main(){
	float price=100.00;
	float *ptr=&price;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	ptr--;
	printf("%d\n",ptr);
	return 0;
}

//char
#include<stdio.h>
int main(){
	char star='*';
	float *ptr=&star;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	ptr--;
	printf("%d\n",ptr);
	return 0;
}


#include<stdio.h>
int main(){
	int age=22;
	int _age=23;
	int *ptr=&age;
	int *_ptr=&_age;
	
	printf("difference=%u\n",ptr-_ptr);
	_ptr=&age;
	printf("comparison=%u\n",ptr == _ptr);
    
    return 0;
}


#include<stdio.h>
int main(){
	int age=22;
	int _age=23;
	int *ptr=&age;
	int *_ptr=&_age;
	
	printf("%u, %u difference=%u\n",ptr, _ptr, ptr-_ptr);
	_ptr=&age;
	printf("comparison=%u\n",ptr == _ptr);
    
    return 0;
}


#include<stdio.h>
int main(){
	int age=22;
	char _age='*';
	int *ptr=&age;
	int *_ptr=&_age;
	
	printf("%u, %u difference=%u\n",ptr, _ptr, ptr-_ptr);
	_ptr=&age;
	
    
    return 0;
}


//array as function argument






//2D array
#include<stdio.h>
int main(){
	//2*3
	int marks[2][3];
	marks[0][0]=90;
	marks[0][1]=80;
	marks[0][2]=70;
	
	marks[1][0]=60;
	marks[1][1]=50;
	marks[1][2]=40;
	
	printf("%d\n",marks[0][0]);
	printf("%d\n",marks[0][1]);
	printf("%d\n",marks[0][2]);
	
	printf("%d\n",marks[1][0]);
	printf("%d\n",marks[1][1]);
	printf("%d\n",marks[1][2]);
	return 0;
}

//Write a function to count odd number in an array
#include<stdio.h>
int countodd(int arr[], int n);
int main(){
	int arr[]={1,2,3,4,5,6};
	printf("%d",countodd(arr,6));
	return 0;
}
int i;
int countodd(int arr[], int n){
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){//odd
			count++
		}
	}
	return count;
}

//For the given array,what will the following give
//*(arr+2)
//*(arr+5)
#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	printf("%d\n",*(arr+2));
	printf("%d\n",*(arr+5));
	
	return 0;
}


// to store the first n fibonacci number
#include<stdio.h>
int main(){
	int n;
	printf("enter n (n>2): ");
	scanf("%d",&n);
	
	int fib[n];
	fib[0]=0;
	fib[1]=1;
	
	for(int i=2; i<n; i++){
		fib[i]=fib[i-1]+fib[i-2];
		printf("%d\t",fib[i]);
	}
	printf("\n");
	return 0;
	
}


//create a 2D array,storing the tables of 2 and 3
#include<stdio.h>
void storeTable(int arr[],int n, int m, int number);
int main(){
	int tables[2][10];
	storeTables(tables,0, 10, 2);
	storeTables(tables,1, 10, 3);
	
	int i;
	for(i=0; i<m; i++){
		printf("%d\t",tables[0][i]);
	}
	
	for(i=0; i<m; i++){
		printf("%d\t",tables[1][i]);
	}
	return 0;
}
void storeTable(int arr[][10],int n, int m, int number){
	for(i=0; i<m; i++){
		arr[n][i]=number*(i+1);
	}
}

//WAP to read an array of 10 integer and count total number of even and odd element
#include<stdio.h>
void main(){
	int a[10],i;
	printf("enter a array element");
	int even=0,odd=0;
	for(i=0;i<=10;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
		printf("%d\n",even);
		printf("%d\n",odd);
	}
	
}

//wap to print 2D array matrix & calculate sum
#include<stdio.h>
int main(){
	int a[2][3],i,j,sum=0;
	printf("enter element of matrix:");
	for(i=0;i<2;i++){
		for(j=0;j<=3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is:\n");
  
    for(i=0;i<2;i++){
		for(j=0;j<=3;j++){
			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
		printf("\nsum%d",sum);
	}
}


