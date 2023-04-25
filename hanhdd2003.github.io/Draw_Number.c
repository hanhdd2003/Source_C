Bai 1:
	
11111
11111
11111
11111
11111

/**
 * C program to print square number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Iterate through columns */
        for(j=1; j<=cols; j++)
        {
            printf("1");
        }

        printf("\n");
    }

    return 0;
}

Bai 2:
	
11111
00000
11111
00000
11111

/**
 * C program to print number pattern of 1, 0 at even/odd rows
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            printf("%d", (i%2));
        }

        printf("\n");
    }

    return 0;
}

Bai 3:
	
10101
10101
10101
10101
10101

/**
 * C program to print number pattern with 1/0 at even/odd position
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            printf("%d", !(j%2));
        }

        printf("\n");
    }

    return 0;
}

Bai 4:
	
11111
10001
10001
10001
11111

/**
 * C program to print box number pattern of 1's and 0's
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            /* 
             * Print 1 if its first or last row
             * Print 1 if its first or last column
             */
            if(i==1 || i==rows || j==1 || j==cols)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}

Bai 5:
	
11111
11111
11011
11111
11111

/**
 * C program to print box number pattern of 1's with 0 as center
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int centerRow, centerCol;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    /* Find center row and column */
    centerRow = (rows + 1) / 2;
    centerCol = (cols + 1) / 2;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(centerCol == j && centerRow == i)
            {
                printf("0");
            }
            else if(cols%2 == 0 && centerCol+1 == j)
            {
                if(centerRow == i || (rows%2 == 0 && centerRow+1 == i))
                    printf("0");
                else
                    printf("1");
            }
            else if(rows%2 == 0 && centerRow+1 == i)
            {
                if(centerCol == j || (cols%2 == 0 && centerCol+1 == j))
                    printf("0");
                else
                    printf("1");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}

Bai 6:
	
10101
01010
10101
01010
10101

/**
 * C program to print box number pattern with cross center
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j, k;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    k = 1;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(k == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

            // If k = 1  then k *= -1 => -1
            // If k = -1 then k *= -1 =>  1
            k *= -1;
        }

        if(cols % 2 == 0)
        {
            k *= -1;
        }

        printf("\n");
    }

    return 0;
}

Bai 7:
	
11011
11011
00000
11011
11011

/**
 * C program to print box number pattern with plus in center
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int centerRow, centerCol;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    centerRow = (rows+1) / 2;
    centerCol = (cols+1) / 2;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print 0 for central rows or columns
            if(centerCol == j || centerRow == i)
            {
                printf("0");
            }
            else if((cols%2 == 0 && centerCol+1 == j) || (rows%2 == 0 && centerRow+1 == i))
            {
                // Print an extra 0 for even rows or columns
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}

Bai 8:
	
10001
01010
00100
01010
10001

/**
 * C program to print box number pattern with cross center
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(i == j || (j == (cols+1) - i))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}

Bai 9:
	
01110
10001
10001
10001
01110

/**
 * C program to print circle box number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows, cols;

    /* Input rows and columns from user */
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print corner element
            if((i==1 || i==rows) && (j==1 || j==cols))
            {
                printf("0");
            }
            else if(i==1 || i==rows || j==1 || j==cols)
            {
                // Print edge
                printf("1");
            }
            else
            {
                // Print center
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}

Bai 10:
	
11111
22222
33333
44444
55555

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print the current row number
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

Bai 11:
	
12345
12345
12345
12345
12345

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print the current column number
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 12:
	
12345
23456
34567
45678
56789

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user
     */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j < i+cols; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 13:
	
1  2  3  4  5
6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j, k;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    k = 1;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++, k++)
        {
            printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}

Bai 14:
	
55555
54444
54333
54322
54321

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user
     */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=cols; j>cols-i; j--)
        {
            printf("%d", j);
        }

        for(j=1; j<=cols-i; j++)
        {
            printf("%d", (rows - i + 1));
        }

        printf("\n");
    }

    return 0;
}

Bai 15:
	
12345
23455
34555
45555
55555

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=cols; j++)
        {
            printf("%d", j);
        }

        for(j=i; j>1; j--)
        {
            printf("%d", cols);
        }

        printf("\n");
    }

    return 0;
}

Bai 16:
	
12345
23451
34521
45321
54321

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=cols; j++)
        {
            printf("%d", j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 17:
	
12345
21234
32123
43212
54321

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Print first part
        for(j=i; j>1; j--)
        {
            printf("%d", j);
        }

        // Print second part
        for(j=1; j<= (N-i +1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 18:
	
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    // First upper half of the pattern
    for(i=N; i>=1; i--)
    {
        // First inner part of upper half
        for(j=N; j>i; j--)
        {
            printf("%d", j);
        }

        // Second inner part of upper half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i);
        }

        // Third inner part of upper half
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Second lower half of the pattern
    for(i=1; i<N; i++)
    {
        // First inner part of lower half
        for(j=N; j>i; j--)
        {
            printf("%d", j);
        }

        // Second inner part of lower half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i+1);
        }

        // Third inner part of lower half
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 19:
	
1    2    3    4    5    6    7    8    9    10
36   37   38   39   40   41   42   43   44   11
35   64   65   66   67   68   69   70   45   12
34   63   84   85   86   87   88   71   46   13
33   62   83   96   97   98   89   72   47   14
32   61   82   95   100  99   90   73   48   15
31   60   81   94   93   92   91   74   49   16
30   59   80   79   78   77   76   75   50   17
29   58   57   56   55   54   53   52   51   18
28   27   26   25   24   23   22   21   20   19

/**
 * C program to print perfect square number pattern
 */

#include <stdio.h>

#define SIZE 10 // Size is always even

int main()
{
    int i, j, N;
    int board[SIZE][SIZE];
    int left, top;

    left = 0;
    top  = SIZE - 1;
    N    = 1;

    for(i=1; i<=SIZE/2; i++, left++, top--)
    {
        // Fill from left to right
        for(j=left; j<=top; j++, N++)
        {
            board[left][j] = N;
        }

        // Fill from top to down
        for(j=left+1; j<=top; j++, N++)
        {
            board[j][top] = N;
        }

        // Fill from right to left
        for(j=top-1; j>=left; j--, N++)
        {
            board[top][j] = N;
        }

        // Fill from down to top
        for(j=top-1; j>=left+1; j--, N++)
        {
            board[j][left] = N;
        }
    }

    // Print the pattern
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%-5d", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}

Bai 20:
	
1
22
333
4444
55555

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

Bai 21:
	
55555
4444
333
22
1

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;

}

Bai 22:
	
55555
 4444
  333
   22
    1
    
/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        // Logic to print spaces
        for(j=N; j>i; j--)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

Bai 23:
	
11111
2222
333
44
5

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=i; j<=N; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

Bai 24: 

11111
 2222
  333
   44
    5
    
/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=i; j<=N; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

Bai 25:
	
5
44
333
2222
11111

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", (N - i + 1));
        }

        printf("\n");
    }

    return 0;
}

Bai 26:
	
    5
   44
  333
 2222
11111
	
/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", (N - i + 1));
        }

        printf("\n");
    }

    return 0;
}

Bai 27:
	
1
12
123
1234
12345

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 28:
	
    1
   12
  123
 1234
12345
	
/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 29:
	
12345
1234
123
12
1

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=N-i+1; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 30:
	
12345
 1234
  123
   12
    1
    
/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=1; j<=N-i+1; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 31:
	
1
21
321
4321
54321

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 32:
	
    1
   21
  321
 4321
54321

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 33:
	
54321
4321
321
21
1

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        // Logic to print numbers
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 34:
	
54321
 4321
  321
   21
    1
    
/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        // Logic to print spaces
        for(j=i; j<=N-1; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 35:
	
5
54
543
5432
54321

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        // Logic to print numbers
        for(j=N; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 36:
	
    5
   54
  543
 5432
54321

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        // Logic to print spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=N; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 37:
	
54321
5432
543
54
5

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=N; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 38:
	
54321
 5432
  543
   54
    5
    
/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=N; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 39:

5
45
345
2345
12345

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        // Logic to print numbers
        for(j=i; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 40:

    5
   45
  345
 2345
12345

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        // Logic to print spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=i; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 41:
	
12345
2345
345
45
5

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=i; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}

Bai 42:
	
12345
 2345
  345
   45
    5

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=i; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 43:
	
1
23
345
4567
56789

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = i;

        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}

Bai 44:
	
    1
   23
  345
 4567
56789

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = i;

        // Logic to print spaces
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}

Bai 45:
	
56789
4567
345
23
1

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        k = i;

        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}

Bai 46:
	
56789
 4567
  345
   23
    1
/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        k = i;

        // Logic to print spaces
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}

Bai 47:
	
13579
3579
579
79
9

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = (i * 2) - 1;

        // Logic to print numbers
        for(j=i; j<=N; j++, k+=2)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}

Bai 48:
	
13579
 3579
  579
   79
    9

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = (i * 2) - 1;

        // Logic to print spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=i; j<=N; j++, k+=2)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}

Bai 49:
	
1
10
101
1010
10101

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            // For every odd column print 1
            if(j % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;

}

Bai 50:
	
    1
   10
  101
 1010
10101

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", (j & 1));
        }

        printf("\n");
    }

    return 0;
}

Bai 51:
	
1
00
111
0000
11111

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            // Print 1s for every odd rows
            if(i % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}

Bai 52:
	
    1 
   00
  111
 0000
11111

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", (i & 1));
        }

        printf("\n");
    }

    return 0;
}

Bai 53:

1
01
010
1010
10101

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // k represents the current integer
    k = 1;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            // Print 1 if current integer k is odd
            if(k % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

            k++;
        }

        printf("\n");
    }

    return 0;
}

Bai 54:
	
    1
   01
  010
 1010
10101

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // k represents the current integer
    k = 1;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", (k & 1));

            k++;
        }

        printf("\n");
    }

    return 0;
}

Bai 55:
	
1
11
101
1001
11111

/**
 * C program to print triangle 0, 1 number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==1 || i==N || j==1 || j==i)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}

Bai 56:

1
123
12345
1234567
123456789

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 57:
	
        1
      123
    12345
  1234567
123456789

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print spaces
        for(j=1; j<= ((N-i)*2); j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 58:
	
1
24
135
2468
13579

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Checking even or odd 
        if(i & 1)
            k = 1;
        else
            k = 2;

        // Logic to print numbers
        for(j=1; j<=i; j++, k+=2)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}

Bai 59:
	

131
13531
1357531
135797531

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Prints the first part of pattern
        for(j=1; j<=(i*2)-1; j+=2)
        {
            printf("%d", j);
        }

        // Prints the second part of pattern
        for(j=(i-1)*2-1; j>=1; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
Bai 60:
	

131
13531
1357531
135797531

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Prints space
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        // Prints first part of the pattern
        for(j=1; j<=(i*2)-1; j+=2)
        {
            printf("%d", j);
        }

        // Prints second part of the pattern
        for(j=(i-1)*2-1; j>=1; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 61:
	
2
242
24642
2468642
2468108642

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Prints first part of the pattern
        for(j=2; j<=i*2; j+=2)
        {
            printf("%d", j);
        }

        // Prints second part of the pattern
        for(j=(i-1)*2; j>=2; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 62:
	
         2
       242
     24642
   2468642
2468108642

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Prints space
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        // Prints first part of the pattern
        for(j=2; j<=i*2; j+=2)
        {
            printf("%d", j);
        }

        // Prints second part of the pattern
        for(j=(i-1)*2; j>=2; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}


Bai 63:
	
1
3 2
4 5 4 3
5 6 7 6 5 4
6 7 8 9 8 7 6 5

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, value, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        value = i + 1;
        // Prints the first part of pattern
        for(j=3; j<=i; j++)
        {
            printf("%d ", value);
            value++;
        }

        // Prints the second part of pattern
        for(j=(i*2)-1; j>=i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 64:

1
2 3
4 5 6 7
8 9 1 2 3 4 5 6
7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N, colCount, value;

    colCount = 1;
    value = 1;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=colCount; j++)
        {
            if(value == 10)
                value = 1; // Restart at 10

            printf("%d ", value);

            value++;
        }

        printf("\n");

        // Increase the total number of columns by 2
        colCount *= 2;
    }

    return 0;
}

Bai 65:
	
1        1
12      21
123    321
1234  4321
1234554321

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Prints first part of pattern
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        // Prints spaces between two parts
        for(j=i*2; j<N*2; j++)
        {
            printf(" ");
        }

        // Prints second part of the pattern
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 66:

1
2  6
3  7  10
4  8  11 13
5  9  12 14 15

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, diff, value, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        diff = N-1; // Initialize difference to total rows - 1
        value = i;  // Initialize value to the current row number
        for(j=1; j<=i; j++)
        {
            printf("%-3d", value);

            value += diff; // Computes the next value to be printed
            diff--;        // Decrements the difference
        }

        printf("\n");
    }

    return 0;
}

Bai 67:

1
2  4
7  11 16
22 29 37 46
56 67 79 92 106

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, diff, value, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    diff = 1;
    value = 1;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%-3d", value);

            value += diff; // Computes the next value to be printed
            diff++;        // Increments the difference
        }

        printf("\n");
    }

    return 0;
}

Bai 68:

1
3  2
4  5  6
10 9  8  7
11 12 13 14 15

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, count, value, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    count = 0;

    for(i=1; i<=N; i++)
    {
        // Starting value of column based on even or odd row.
        value = (i & 1) ? (count + 1) : (count + i);

        for(j=1; j<=i; j++)
        {
            printf("%-3d", value);

            // Increment the value for odd rows
            if(i & 1)
                value++;
            else
                value--;

            count++;
        }

        printf("\n");
    }

    return 0;
}

Bai 69:
	
Enter rows: 5
1
22
333
2222
11111

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i <= (N/2))
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", (N - i + 1));
            }
        }

        printf("\n");
    }

    return 0;
}

Bai 70:
	
12345
1234
123
12
1

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        printf("%d\n", num);
        num = num / 10;
    }

    return 0;
}

Bai 71:
	
24165
4165
165
65
5

/**
 * C program to print the given number pattern
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, firstDigit, digits, placeValue;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        printf("%d\n", num);

        digits = (int) log10(num);                // Get total number of digits
        placeValue = (int) ceil(pow(10, digits)); // Get the place value of first digit
        firstDigit = (int)(num / placeValue);     // Get the first digit

        num = num - (placeValue * firstDigit);    // Remove first digit from number
    }

    return 0;
}

Bai 72:
	
1
12
123
1234
12345
1234
123
12
1

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // Prints upper part of the pattern
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Print lower part of the pattern
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 73:

    1 
   12
  123
 1234
12345
 1234
  123
   12
    1
	
/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // Prints upper part of the pattern
    for(i=1; i<=N; i++)
    {
        // Prints trailing spaces
        for(j=N-1; j>=i; j--)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Prints lower part of the pattern
    for(i=N-1; i>=1; i--)
    {
        // Prints trailing spaces
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
	
Bai 74:

1
123
12345
1234567
123456789
1234567
12345
123
1	

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // Iterate through upper half triangle of the pattern
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=(i * 2 - 1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Iterate through lower half triangle of the pattern
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=(i * 2 - 1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
	
Bai 75:
	
        1
      123
    12345
  1234567
123456789
  1234567
    12345
      123
        1	

/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // Iterate through upper half triangle of the pattern
    for(i=1; i<=N; i++)
    {
        // Print trailing spaces
        for(j=(i * 2); j<(N * 2); j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i * 2 - 1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Iterate through lower half triangle of the pattern
    for(i=N-1; i>=1; i--)
    {
        // Print trailing spaces
        for(j=(i * 2); j<(N * 2); j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i * 2 - 1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Bai 76:
	
1
121
12321
1234321
123454321
1234321
12321
121
1

/**
 * C program to print half diamond number pattern series
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    // Print the first upper half
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Print the lower half of the pattern
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
	
Bai 77:
	
*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*

/**
 * C program to print the half diamond number pattern with star border
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    printf("*\n");
    // Print the first upper half
    for(i=1; i<=N; i++)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }

    // Print the lower half of the pattern
    for(i=N-1; i>=1; i--)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }
    printf("*");

    return 0;
}
	
Bai 78:
	
1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1
	
/**
 * C program to print X number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // First part of the pattern
    for(i=1; i<=N; i++)
    {
        // Print trailing spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        printf("%d", i);

        // Print central spacces
        for(j=1; j<=((N - i) * 2 - 1); j++)
        {
            printf(" ");
        }

        // Don't print for last row
        if(i != N)
            printf("%d", i);

        // Moves on to the next row
        printf("\n");
    }

    // Second part of the pattern
    for(i=N-1; i>=1; i--)
    {
        // Print trailing spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        printf("%d", i);

        // Print central spaces
        for(j=1; j<=((N - i ) * 2 - 1); j++)
        {
            printf(" ");
        }

        printf("%d", i);

        // Move on to the next line
        printf("\n");
    }

    return 0;
}


	

