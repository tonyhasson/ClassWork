#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

/*
//question 1:


void print_array(int* a, int n);
void sort_array(int* a, int n);
void input_array(int *a,int n);
void main()
{
	int n;
	printf("enter n: ");
	scanf_s("%d", &n);
	int* a = (int*)calloc(n, sizeof(int));
	input_array(a,n);
	sort_array(a,n);
	print_array(a, n);

}
void input_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nenter number to array: ");
		scanf_s("%d", &a[i]);
	}
}
void sort_array(int* a, int n)
{
	int* count_arr = (int*)calloc(10, sizeof(int));
	int i,j=0;
	if (count_arr == NULL)
	{
		printf("error!");
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		count_arr[a[i]]++;
	}
	for (i = 0; i < 10; i++)
	{
		while (count_arr[i] > 0)
		{
			a[j] = i;
			count_arr[i]--;
			j++;
		}
	}
	free(count_arr);
}
void print_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\na[%d]= %d ",i,a[i]);
		
	}
}
*/



/*

//question 2:

void print_array(int* a, int n);
void odd_pair(int* a, int n);
void input_array(int* a, int n);
void main()
{
	int n;
	printf("enter n: ");
	scanf_s("%d", &n);
	int* a = (int*)calloc(n, sizeof(int));
	input_array(a, n);
	odd_pair(a, n);
	print_array(a, n);

}
void input_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nenter number to array: ");
		scanf_s("%d", &a[i]);
	}
}
void odd_pair(int* a, int n)
{
	int left = 0, right = n - 1,temp;


	while (left<right)
	{
		if (a[left] % 2 == 1 && a[right] % 2 == 0)
		{
			temp = a[left];
			a[left] = a[right];
			a[right] = temp;
			left++;
			right--;
		}
		else if (a[left] % 2 == 0 && a[right] % 2 == 0)
		{
			left++;
		}
		else if (a[left] % 2 == 1 && a[right] % 2 == 1)
		{
			right--;
		}
		else
		{
			left++;
			right--;
		}
		
	}
	
}
void print_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\na[%d]= %d ", i, a[i]);

	}
}
*/



/*

//question 3:


void merge(int* a, int p, int q, int r);
void print_array(int* a, int n);
void sort_arr(int* a, int n,int k);
void input_array(int* a, int n);
void main()
{
	int n,k;
	printf("enter n: ");
	scanf_s("%d", &n);
	printf("enter k: ");
	scanf_s("%d", &k);
	int* a = (int*)calloc(n, sizeof(int));
	input_array(a, n);
	sort_arr(a, n,k);
	print_array(a, n);

}
void input_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nenter number to array: ");
		scanf_s("%d", &a[i]);
	}
}
void sort_arr(int* a, int n, int k)
{
	int low = 0,i=0,high=-1,mid=-1,end=0;
	while (end < 2)
	{
		
		while (i < 2)
		{
			if (high + k < n)
			{
				
				high += k;
			}
			else
			{
				
				
				high += n % k;

				end++;

			}
			i++;

		}
		mid += k;
		merge(a, low, mid, high);
		i = 1;
		if (end == 1)
		{
			end++;
		}
	}
}
void print_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\na[%d]= %d ", i, a[i]);

	}
}
void merge(int* a, int p, int q, int r)
{
	int i = p, j = q + 1, k = 0;
	int* temp = (int*)calloc(r - p + 1, sizeof(int));
	while ((i <= q) && (j <= r))
		if (a[i] < a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	while (j <= r) // if( i>q )
		temp[k++] = a[j++];
	while (i <= q) // j>r
		temp[k++] = a[i++];

	for (i = p, k = 0; i <= r; i++, k++) // copy temp[] to a[]
		a[i] = temp[k];
	free(temp);
}

*/



/*



//question 4:




int sum_min(int* a, int n, int k);
void input_array(int* a, int n);
void main()
{
	int n, k;
	printf("enter n: ");
	scanf_s("%d", &n);
	printf("enter k: ");
	scanf_s("%d", &k);
	int* a = (int*)calloc(n, sizeof(int));
	input_array(a, n);
	printf("the sum is: %d", sum_min(a, n, k));
	

}
void input_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nenter number to array: ");
		scanf_s("%d", &a[i]);
	}
}
int sum_min(int* a, int n, int k)
{
	int i, max=a[0], min=a[0],sum=0,j=0;
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	int* count = (int*)calloc(max - min + 1, sizeof(int));
	if (count == NULL)
	{
		printf("\nerror!");
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		count[a[i]-min]++;
	}
	i = 0;
	while (i < k)
	{
		while (count[j] > 0&&i<k)
		{
			sum += j+min;
			count[j]--;
			i++;
		}
		j++;
		
	}
	free(count);
	return(sum);
}


*/




/*

//question 5:


int partition(int* a, int left, int right);
void print_array(int* a, int n);
void sort_arr(int* a, int n);
void input_array(int* a, int n);
void main()
{
	int n, k;
	printf("enter n: ");
	scanf_s("%d", &n);
	int* a = (int*)calloc(n, sizeof(int));
	input_array(a, n);
	sort_arr(a, n);
	print_array(a, n);

}
void input_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nenter number to array: ");
		scanf_s("%d", &a[i]);
	}
}
void quick_sort(int* a, int first, int last)
{
	int pos;
	if (first < last)
	{
		pos = partition(a, first, last);
		quick_sort(a, first, pos - 1);
		quick_sort(a, pos + 1, last);
	}
}
void print_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\na[%d]= %d ", i, a[i]);

	}
}
int partition(int* a, int left, int right)
{
	int temp;
	int first = left;
	int pivot = a[first];
	int pos;
	while (left < right)
	{
		while (a[right] < pivot) right--;
		while ((left < right) && (a[left] >= pivot)) left++;//check this
		if (left < right)
		{
			temp = a[left];
			a[left] = a[right];
			a[right] = temp;
		}
			
	}
	pos = right;
	a[first] = a[pos];
	a[pos] = pivot;
	return pos;
}
void sort_arr(int* a, int n)
{
	quick_sort(a, 0, n-1);
}

*/
