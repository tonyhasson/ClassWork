#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


/*


//question 1:

#define C 3
#define R 3

void print_array(int a[][C],int c,int r);
void input_array(int a[][C],int c,int r);
void main()
{
	int a[R][C];
	int c = C, r = R;
	input_array(a, c, r);
	print_array(a, c, r);
}
void input_array(int a[][C], int c, int r)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("enter into position: [%d][%d]", i, j);
			scanf_s("%d", &a[i][j]);
		}
		if (i < r - 1)
		{
			printf("\nnew row\n");
		}
	}
}
void print_array(int a[][C], int c, int r)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ",a[i][j]);

		}
		printf("\n");
	}
}


*/




/*

//question 2:

#define C 3
#define R 3


void calc_mat(int a[][C], double* avg, int* sum, int* mult);
void input_array(int a[][C], int c, int r);
void main()
{
	int a[R][C];
	int c = C, r = R,sum,mult;
	double avg;
	input_array(a, c, r);
	calc_mat(a, &avg, &sum, &mult);
	printf("avg: %.2f\nsum: %d\nmult: %d", avg, sum, mult);
	
}
void input_array(int a[][C], int c, int r)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("enter into position: [%d][%d]", i, j);
			scanf_s("%d", &a[i][j]);
		}
		if (i < r - 1)
		{
			printf("\nnew row\n");
		}
	}
}
void calc_mat(int a[][C], double* avg, int* sum, int* mult)
{
	int count = C*R, i, j;
	*sum = 0;
	*mult = 1;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			*sum += a[i][j];
			*mult *= a[i][j];
			
		}
	}
	*avg = (double)*sum / (double)count;
	

}
*/



/*


//question 3:



#define N 3



void input_array(int a[][N]);
void calc(int a[][N],int *,int *);
void main()
{
	int a[N][N],main_d,sec_d;
	input_array(a);
	calc(a, &main_d, &sec_d);
	printf("main diagnal: %d\nsecondery diagnal %d", main_d, sec_d);
}
void input_array(int a[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("enter into position: [%d][%d]", i, j);
			scanf_s("%d", &a[i][j]);
		}
		if (i < N - 1)
		{
			printf("\nnew row\n");
		}
	}
}
void calc(int a[][N], int* main_d, int* sec_d)
{
	int i, j;
	*main_d = 0;
	*sec_d = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (j == i)
			{
				*main_d += a[i][j];
			}
			if (i + j == N-1)
			{
				*sec_d += a[i][j];
			}
		}
	}

}

*/




/*



//question 4:


#define C 3
#define R 3


void input_array(int a[][C]);
void input_one_d_array(int * b);
int chk(int a[][C], int * b);
void main()
{
	int a[R][C];
	int b[R];
	input_array(a);
	input_one_d_array(b);
	printf("the answer is : %d", chk(a, b));
	
}
void input_array(int a[][C])
{
	int i, j;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("enter into position: [%d][%d]", i, j);
			scanf_s("%d", &a[i][j]);
		}
		if (i < R - 1)
		{
			printf("\nnew row\n");
		}
	}
}
void input_one_d_array(int * b)
{
	int i;
	for (i = 0; i < R; i++)
	{
		printf("enter a number to 1D array: ");
		scanf_s("%d", &b[i]);
	}
}
int chk(int a[][C], int * b)
{
	int i;
	for (i = 0; i < R; i++)
	{
		int tf=0,mid,low = 0, high = C - 1;
		while (low <= high)
		{
			
			mid = (high + low) / 2;
			
			if (b[i] < a[i][mid])
			{	
				high = mid - 1;
			}
			else if (b[i] > a[i][mid])
			{
				low = mid + 1;
			}
			else if(b[i]==a[i][mid])
			{
				tf = 1;
				low = high + 1;
				
			}
		}
		if (tf == 0)
		{
			return(0);
		}
		
	}
	return(1);
}


*/



/*





//question 5:

#define C 3
#define R 3


void input_array(int a[][C]);
void print_array(int a[][C]);
void swap_array(int a[][C]);
void main()
{
	int a[R][C];
	input_array(a);
	swap_array(a);
	print_array(a);
	
}
void input_array(int a[][C])
{
	int i, j;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("enter into position: [%d][%d]", i, j);
			scanf_s("%d", &a[i][j]);
		}
		if (i < R - 1)
		{
			printf("\nnew row\n");
		}
	}
}
void print_array(int a[][C])
{
	int i, j;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void swap_array(int a[][C])
{
	int i, j, temp_last , temp1,temp2;
	for (i = 0; i < R; i++)
	{
		temp_last = a[i][C - 1];
		temp1 = a[i][0];
		for (j = 0; j < C-1; j++)
		{
			temp2 = a[i][j + 1];
			a[i][j + 1] = temp1;
			temp1 = temp2;
			
		}
		a[i][0] = temp_last;
	}
}

*/
