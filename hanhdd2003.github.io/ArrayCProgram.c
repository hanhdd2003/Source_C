//Bài 1: Write a C program to read and print elements of array. (doc va in ra cac phan tu trong mang)
//Bài 2: Write a C program to print all negative elements in an array. (in ra các phan tu am trong 1 mang)
//Bài 3: Write a C program to find sum of all array elements. (tinh tong tat ca cac phan tu trong mang)
//Bài 4: Write a C program to find maximum and minimum element in an array. (tim cac phan tu co gtln, gtnn, trong 1 mang)
//Bài 5: Write a C program to find second largest element in an array. (tinh phan tu lon thu 2 cua mang)
//Bài 6: Write a C program to count total number of even and odd elements in an array. (dem so luong phan tu le va phan tu chan trong 1 mang)
//Bài 7: Write a C program to count total number of negative elements in an array. (dem so luong phan tu am)
//Bài 8: Write a C program to copy all elements from an array to another array. (sao chep cac phan tu tu 1 mang sang 1 mang khac)
//Bài 9: Write a C program to insert an element in an array. (chen 1 phan tu)
//Bài 10: Write a C program to delete an element from an array at specified position. (xoa 1 phan tu tu 1 mang tai 1 vi tri nhat dinh)
//Bài 11: Write a C program to count frequency of each element in an array. (dem do lap lai cua 1 phan tu)
//Bài 12: Write a C program to print all unique elements in the array. (in tat ca cac phan tu unique)
//Bài 13: Write a C program to count total number of duplicate elements in an array. (tong so cac phan tu trung lap)
//Bài 14: Write a C program to delete all duplicate elements from an array.(xoa phan tu trung lap)
//Bài 15: Write a C program to merge two array to third array. (gop 2 mang thanh mang thu 3)
//Bài 16: Write a C program to find reverse of an array. (tim dao nguoc cua 1 mang)
//Bài 17: Write a C program to put even and odd elements of array in two separate array. (tach chan le thanh 2 mang rieng)
//Bài 18: Write a C program to search an element in an array. (tim mot phan tu cua mang)
//Bài 19: Write a C program to sort array elements in ascending or descending order.(sap xep cac phan tu tang dan hoac giam dan)
//Bài 20: Write a C program to sort even and odd elements of array separately. (sap xep cac phan tu chan, le rieng biet)
//Bài 21: Write a C program to left rotate an array. (quay 1 mang sang trai)
//Bài 22: Write a C program to right rotate an array. (quay 1 mang sang phai)


//*****************************************************************************************************************

//************************************************ BÀI 1 **********************************************************

/*#include <stdio.h>
#include <stdlib.h>

int main() {
	//INPUT
	int n;
	scanf ("%d",&n);
	int arr[n];
	int i;
	for (i = 0; i < n; i++) {
		scanf ("%d", arr[i]);
	}
	//OUTPUT
	for (i = 0; i < n; i++) {
		printf ("%d\n", arr[i]);
	}
	return 0;
}*/


//************************************************ BAI 2 *********************************************************

/*#include <stdio.h>

int main()
{
	//INPUT
	int i, n;
	scanf ("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //OUTPUT
    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}*/


//************************************************ BÀI 3 **********************************************************

/*#include <stdio.h>
#include <stdlib.h>

int main() {
	//INPUT
	int n;
	scanf ("%d",&n);
	int arr[n];
	int i;
	int sum = 0;
	for (i = 0; i < n; i++) {
		scanf ("%d", arr[i]);
	}
	for (i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	//OUTPUT
	printf ("%d\n", sum);
	return 0;
}*/

//************************************************ BÀI 4 **********************************************************

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//INPUT
	int n;
	scanf ("%d", &n);
	int arr[n];
	int i;
	for (i = 0; i < n; i++) {
		scanf ("%d", &arr[i]);
	}
	int min, max;
	min = arr[0];
	max = arr[0];
	for (i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		else if (arr[i] < min) {
			min = arr[i];
		}
	}
	
	//OUTPUT
		printf ("%d %d", max, min);
	return 0;
}*/


//************************************************ BÀI 5 **********************************************************

/*#include <stdio.h>

int main()
{
	//INPUT:
	int n, i;
	scanf ("%d", &n);
    int arr[n];
    int max1, max2;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max1 = max2;
    for(i=0; i<n; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    //OUTPUT:
    printf("%d", max2);

    return 0;
}*/



//************************************************ BÀI 6 **********************************************************

/*#include <stdio.h>

int main()
{
	//INPUT:
	int n;
	scanf ("%d", &n);
    int arr[n];
    int i, even, odd;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    even = 0;
    odd  = 0;

    for(i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    //OUTPUT:
    printf("%d\n", even);
    printf("%d", odd);

    return 0;
}*/


//************************************************ BÀI 7 **********************************************************

/*#include <stdio.h>

int main()

{
	//INPUT:
    int n;
	scanf ("%d", &n);
    int arr[n];
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }
    
	//OUTPUT:
    printf("%d", count);

    return 0;
}*/


//************************************************ BÀI 8 **********************************************************

/*#include <stdio.h>

int main()
{
    //INPUT:
    int n;
	scanf ("%d", &n);
    int arr1[n], arr2[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    for(i=0; i<n; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}*/


//************************************************ BÀI 9 **********************************************************

/*#include <stdio.h>

int main()
{
    //INPUT:
    int n, num, pos;
	scanf ("%d", &n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num); //nhap vao so can chen
    scanf("%d", &pos); //nhap vao vi tri can chen

 
    if(pos > n + 1 || pos <= 0)
    {
        return 0;
    }
    else
    {
    
        for(i = n; i >= pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[pos-1] = num;
        n++; 

        for(i=0; i<n; i++)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}*/


//************************************************ BÀI 10 **********************************************************

/*#include <stdio.h>

int main()
{
    //INPUT:
    int n, pos;
	scanf ("%d", &n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &pos);

    if(pos < 0 || pos > n) //Invalid postion
    {
        return 0;
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;

       //OUTPUT:
        for(i=0; i<n; i++)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}*/



//************************************************ BÀI 11 **********************************************************

/*#include <stdio.h>

int main()
{
	//INPUT:
    int arr[100], freq[100];
    int n, i, j, count;

    
    //printf("Enter size of array: ");
    scanf("%d", &n);

    
    //printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

        
        freq[i] = -1;
    }


    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            
            if(arr[i]==arr[j])
            {
                count++;

                
                freq[j] = 0;
            }
        }

        
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    
    //printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}*/


//************************************************ BÀI 12 **********************************************************

/*#include <stdio.h>
int main()
{
	//INPUT:
    int n, i, j, count;
	scanf ("%d", &n);
    int arr[n], freq[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    
    
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
 
    //OUTPUT:
    for(i=0; i<n; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}*/


//************************************************ BÀI 13 **********************************************************

/*#include <stdio.h>
int main()
{
    //INPUT:
    int n, i, j, count = 0;
	scanf ("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    //OUTPUT:
    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}*/


//************************************************ BÀI 14 **********************************************************

/*#include <stdio.h>
int main()
{
    //INPUT:
    int n, i, j, k;
	scanf ("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

 //   printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}*/


//************************************************ BÀI 15 **********************************************************
//NHAP 2 MANG THANH 1 MANG THEO THU TU NHAP VAO
/*#include <stdio.h>

int main() {
   int array1[50], array2[50], mergeArray[100];
   int i, j, k, size1, size2;

   printf("Enter the size of the first array: ");
   scanf("%d", &size1);
   printf("Enter the elements of the first array: ");

   for (i = 0; i < size1; i++) {
      scanf("%d", &array1[i]);
      mergeArray[i] = array1[i];
   }

   printf("\nEnter the size of the second array: ");
   scanf("%d", &size2);
   printf("Enter the elements of the second array: ");

   for (j = 0; j < size2; j++) {
      scanf("%d", &array2[j]);
      mergeArray[i] = array2[j];
      i++;
   }

   printf("\nThe merged array is:");

   for (k = 0; k < i; k++)
      printf("%d ", mergeArray[k]);

   return 0;
}*/

// NHAP 2 MANG THANH 1 MANG THEO THU TU TANG DAN:

/*#include <stdio.h>

int main() {
   int array1[50], array2[50], mergeArray[100];
   int i, j, k, size1, size2, size3;

   printf("Enter the size of the first array: ");
   scanf("%d", &size1);
   printf("Enter the elements of the first array: ");

   for (i = 0; i < size1; i++) {
      scanf("%d", &array1[i]);
   }

   printf("\nEnter the size of the second array: ");
   scanf("%d", &size2);
   printf("Enter the elements of the second array: ");

   for (j = 0; j < size2; j++) {
      scanf("%d", &array2[j]);
   }

   // Merge the two arrays into mergeArray in ascending order
   i = 0;
   j = 0;
   k = 0;
    while (i < size1 && j < size2) {
    	if (array1[i] <= array2[j]) {
        	mergeArray[k] = array1[i];
        	i++;
    }   else {
        	mergeArray[k] = array2[j];
        	j++;
    }
    	k++;
	}

   // Add the remaining elements of array1 to mergeArray
   while (i < size1) {
      mergeArray[k] = array1[i];
      i++;
      k++;
   }

   // Add the remaining elements of array2 to mergeArray
   while (j < size2) {
      mergeArray[k] = array2[j];
      j++;
      k++;
   }

   size3 = k;  // Set the size of mergeArray to the number of merged elements
   printf("\nThe merged array in ascending order is:");

   for (k = 0; k < size3; k++)
      printf("%d ", mergeArray[k]);

   return 0;
}*/


//************************************************ BÀI 16 **********************************************************

/*#include <stdio.h>
int main()
{
    //INPUT:
    int n, i;
	scanf ("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //OUTPUT:
    //printf("\nArray in reverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}*/


//************************************************ BÀI 17 **********************************************************

/*#include <stdio.h>

#define MAX_SIZE 1000  // Maximum size of the array

void printArray(int arr[], int len); //ham in array



int main()
{
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];
    
    int evenCount, oddCount;
    int i, size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    evenCount = 0;
    oddCount = 0;

    for(i=0; i<size; i++)
    {
        // If arr[i] is odd
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    printf("\nElements of even array: \n");
    printArray(even, evenCount);

    printf("\nElements of odd array: \n");
    printArray(odd, oddCount);

    return 0;
}


void printArray(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}*/


//************************************************ BÀI 18 **********************************************************

/*#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);

    found = 0; 
    
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}*/


//************************************************ BÀI 19 **********************************************************

/*#include <stdio.h>
#define MAX_SIZE 100    // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size;
    int i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}*/


//************************************************ BÀI 20 **********************************************************

/*#include <stdio.h>
#include <limits.h> //Used for INT_MAX
  
#define MAX_SIZE 1000 //Maximum size of the array
void arrange(int arr[], int len, int pivot);
void sort(int arr[], int start, int end);
void print(int arr[], int len);
  
  
  
int main()
{
    int arr[MAX_SIZE], i, n;
    int pivot, evenCount, oddCount;
  
    pivot = 0;
    evenCount = oddCount = 0;
  
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] & 1)
            oddCount++;
        else
            evenCount++;
    } 
     
    pivot = (evenCount > oddCount) ? evenCount : oddCount;
  
    print(arr, n);
  
    // Arranges all even and odd elements sequentially
    arrange(arr, n, pivot);
     
    // Print elements after arranging even and odd elements
    printf("\nElements after arranging even and odd elements separately\n");
    print(arr, n);
  
    //Sorts even part of the array
    sort(arr, pivot, n);
  
    //Sorts odd part of the array
    sort(arr, 0, pivot);
  
    //Prints the final sorted array
    printf("\nFinal array after sorting even and odd elements separately\n");
    print(arr, n);
  
    return 0;
}
  
  
void arrange(int arr[], int len, int pivot)
{
    int i, j, temp;
  
    for(i=0; i<pivot; i++)
    {
        if(arr[i] & 1)
        {
            for(j=pivot; j<len; j++)
            {
                //Look for an even element then swap with odd element
                if(!(arr[j] & 1))
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    break;
                }
            }
        }
    }
}
  
  
void sort(int arr[], int start, int end)
{
    int i, j, temp;
    int len = start + end;
  
    for(i=start; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
  
  
void print(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}*/


//************************************************ BÀI 21 **********************************************************

/*#include <stdio.h>
#define SIZE 10 

void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int i, N;
    int arr[SIZE];

    printf("Enter 10 elements array: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times to left rotate: ");
    scanf("%d", &N);

    // Actual rotation
    N = N % SIZE;
    
    printf("Array before rotationn");
    printArray(arr);

    // Rotate array n times
    for(i=1; i<=N; i++)
    {
        rotateByOne(arr);
    }

    // Print array after rotation
    printf("\n\nArray after rotation\n");
    printArray(arr);

    return 0;
}


void rotateByOne(int arr[])
{
    int i, first;

    // Store first element of array
    first = arr[0];

    for(i=0; i<SIZE-1; i++)
    {
        // Move each array element to its left
        arr[i] = arr[i + 1];
    }

    // Copies the first element of array to last
    arr[SIZE-1] = first;
}


void printArray(int arr[])
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}*/


//************************************************ BÀI 22 **********************************************************

/*#include <stdio.h>
#define SIZE 10

void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int i, N;
    int arr[SIZE];

    printf("Enter 10 elements array: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times to right rotate: ");
    scanf("%d", &N);

    //Actual rotation
    N = N % SIZE;

    // Print array before rotation
    printf("Array before rotationn");
    printArray(arr);

    // Rotate array n times
    for(i=1; i<=N; i++)
    {
        rotateByOne(arr);
    }

    // Print array after rotation
    printf("\n\nArray after rotation\n");
    printArray(arr);

    return 0;
}


void rotateByOne(int arr[])
{
    int i, last;

    // Store last element of array
    last = arr[SIZE - 1];

    for(i=SIZE-1; i>0; i--)
    {
        // Move each array element to its right
        arr[i] = arr[i - 1];
    }

    // Copy last element of array to first
    arr[0] = last;
}

void printArray(int arr[])
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}*/
