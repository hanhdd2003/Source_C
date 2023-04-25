1. Write a C program to find cube of any number using function. (tim so lap phuong bang ham)
2. Write a C program to find diameter, circumference and area of circle using functions. (tim duong kinh, chu vi, dien tich hinh tron bang ham)
3. Write a C program to find maximum and minimum between two numbers using functions. (tim min, max cua 2 so bang ham)
4. Write a C program to check whether a number is even or odd using functions. (tim so chan, le bang ham)
5. Write a C program to check whether a number is prime, Armstrong or perfect number using functions. (tim so nguyen to, armstrong, perfect bang ham)
6. Write a C program to find all prime numbers between given interval using functions. (tim so nguyen to trong khoang da cho bang ham)
7. Write a C program to print all strong numbers between given interval using functions. (in tat ca cac so strong)
8. Write a C program to print all Armstrong numbers between given interval using functions. (in tat ca cac so armstrong)
9. Write a C program to print all perfect numbers between given interval using functions.  (in cac so perfect trong khoang da cho)

//*********************************************************************************************************

 // BAI 1 Viet chuong trinh C de tim khoi lap phuong cua bat ky so nao bang ham 
// Nhap so bat ki: 5
//Khoi 5 là 125,00
// #include <stdio.h>
///* Function declaration */
//double cube(double num);
//int main()
//{
//    int num;
//    double c;
//    
//    /* Input number to find cube from user */
//    printf("Enter any number: ");
//    scanf("%d", &num);
//    
//    c = cube(num);
//
//    printf("Cube of %d is %.2f", num, c); 
//    
//    return 0;
//}
//
///**
// * Function to find cube of any number
// */
//double cube(double num)
//{
//    return (num * num * num);
//}

//BAI 2 Viet chuong trinh C de tim duong kinh chu vi va dien tich hinh tron bang cac ham 

//Enter radius of circle: 256
//Diameter of the circle = 512.00 units
//Circumference of the circle = 1608.50 units
//Area of the circle = 205887.42 sq. units

//#include <stdio.h>
//#include <math.h> // Used for constant PI referred as M_PI
///* Function declaration */
//double getDiameter(double radius);
//double getCircumference(double radius);
//double getArea(double radius);
//int main() 
//{
//    float radius, dia, circ, area;
//    
//    /* Input radius of circle from user */
//    printf("Enter radius of circle: ");
//    scanf("%f", &radius);
//    
//    dia  = getDiameter(radius);       // Call getDiameter function
//    circ = getCircumference(radius);  // Call getCircumference function
//    area = getArea(radius);           // Call getArea function
//    
//    printf("Diameter of the circle = %.2f units\n", dia);//duong kinh 
//    printf("Circumference of the circle = %.2f units\n", circ);//duong tron 
//    printf("Area of the circle = %.2f sq. units", area);//dien tich 
//    
//    return 0;
//}
///** circle vong tron 
// * Calculate diameter of circle whose radius is given
// */
//double getDiameter(double radius) 
//{
//    return (2 * radius);//ban kinh 
//}
///**
// * Calculate circumference of circle whose radius is given
// */
//double getCircumference(double radius) 
//{
//    return (2 * M_PI * radius); // M_PI = PI = 3.14 ... 
//}
///**
// * Find area of circle whose radius is given
// */
//double getArea(double radius)
//{
//    return (M_PI * radius * radius); // M_PI = PI = 3.14 ...
//}

//BAI 3 Viet chuong trinh C de tim gia tri lon nhat va gia tri nho nhat giua hai so bang ham 
//Enter any two numbers: 10
//23
//
//Maximum = 23
//Minimum = 10
//#include <stdio.h>
///* Function declarations */
//int max(int num1, int num2);
//int min(int num1, int num2);
//int main() 
//{
//    int num1, num2, maximum, minimum;
//    
//    /* Input two numbers from user */
//    printf("Enter any two numbers: ");
//    scanf("%d%d", &num1, &num2);
//    
//    maximum = max(num1, num2);  // Call maximum function
//    minimum = min(num1, num2);  // Call minimum function
//    
//    printf("\nMaximum = %d\n", maximum);
//    printf("Minimum = %d", minimum);
//    
//    return 0;
//}
///**
// * Find maximum between two numbers.
// */
//int max(int num1, int num2)
//{
//    return (num1 > num2 ) ? num1 : num2;
//}
///**
// * Find minimum between two numbers.
// */
//int min(int num1, int num2) 
//{
//    return (num1 > num2 ) ? num2 : num1;
//}

//BAI 4 Viet chuong trinh C kiem tra mot so la chan hay le bang ham 
//Enter any number: 66
//The number is even.
//Enter any number: 67
//The number is odd.
//#include <stdio.h>
///**
// * Function to check even or odd
// * Returns 1 is num is even otherwise 0
// */
//int isEven(int num)
//{
//    return !(num & 1);
//}
//int main()
//{
//    int num;
//    /* Input number from user */
//    printf("Enter any number: ");
//    scanf("%d", &num);
//    /* If isEven() function returns 0 then the number is even */
//    if(isEven(num))
//    {
//        printf("The number is even.");
//    }
//    else
//    {
//        printf("The number is odd.");
//    }
//    
//    return 0;
//}

//BAI5 Viet chuong trinh C de kiem tra xem mot so co phai la so nguyen to so Armstrong hay 
//so hoan hao hay khong bang cac ham 
//Enter any number: 78
//78 is not Prime number.
//78 is not Armstrong number.
//78 is not Perfect number.

//#include <stdio.h>
//#include <math.h>
///* Function declarations */
//int isPrime(int num);
//int isArmstrong(int num);
//int isPerfect(int num);
//int main()
//{
//    int num;
//    
//    printf("Enter any number: ");
//    scanf("%d", &num);
//    
//    // Call isPrime() functions
//    if(isPrime(num))
//    {
//        printf("%d is Prime number.\n", num);
//    }
//    else
//    {
//        printf("%d is not Prime number.\n", num);
//    }
//    
//    // Call isArmstrong() function
//    if(isArmstrong(num))
//    {
//        printf("%d is Armstrong number.\n", num);
//    }
//    else
//    {
//        printf("%d is not Armstrong number.\n", num);
//    }
//    
//    // Call isPerfect() function
//    if(isPerfect(num))
//    {
//        printf("%d is Perfect number.\n", num);
//    }
//    else
//    {
//        printf("%d is not Perfect number.\n", num);
//    }
//    
//    return 0;
//}
///**
// * Check whether a number is prime or not. 
// * Returns 1 if the number is prime otherwise 0.
// */
//int isPrime(int num) 
//{
//    int i;
//    
//    for(i=2; i<=num/2; i++)  
//    {  
//        /*  
//         * If the number is divisible by any number  
//         * other than 1 and self then it is not prime 
//         */  
//        if(num%i == 0)  
//        {
//            return 0;
//        }  
//    } 
//    
//    return 1; 
//}
///**
// * Check whether a number is Armstrong number or not. 
// * Returns 1 if the number is Armstrong number otherwise 0.
// */
//int isArmstrong(int num) 
//{
//    int lastDigit, sum, originalNum, digits;
//    sum = 0;
//    
//    originalNum = num;
//
//    /* Find total digits in num */
//    digits = (int) log10(num) + 1;
//
//    /*
//     * Calculate sum of power of digits
//     */
//    while(num > 0)
//    {
//        // Extract the last digit
//        lastDigit = num % 10;
//
//        // Compute sum of power of last digit
//        sum = sum + round(pow(lastDigit, digits));
//
//        // Remove the last digit
//        num = num / 10;
//    }
//    
//    return (originalNum == sum);
//}
///**
// * Check whether the number is perfect number or not. 
// * Returns 1 if the number is perfect otherwise 0.
// */
//int isPerfect(int num) 
//{
//    int i, sum, n;
//    sum = 0;
//    n = num;
//    
//    for(i=1; i<n; i++)  
//    {  
//        /* If i is a divisor of num */  
//        if(n%i == 0)  
//        {  
//            sum += i;  
//        }  
//    }
//
//    return (num == sum);
//}


//BAI 6 Viet chuong trinh C de tim tat ca cac so nguyen to giua cac khoang da cho bang cach su dung cac ham 
//#include <stdio.h>
///* Function declarations */
//int isPrime(int num);
//void printPrimes(int lowerLimit, int upperLimit);
//int main()
//{
//    int lowerLimit, upperLimit;
//    
//    printf("Enter the lower and upper limit to list primes: ");
//    scanf("%d%d", &lowerLimit, &upperLimit);
//    
//    // Call function to print all primes between the given range.
//    printPrimes(lowerLimit, upperLimit);
//    
//    return 0;
//}
///**
// * Print all prime numbers between lower limit and upper limit. 
// */
//void printPrimes(int lowerLimit, int upperLimit)
//{
//    printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);
//    
//    while(lowerLimit <= upperLimit)
//    {
//        // Print if current number is prime.
//        if(isPrime(lowerLimit))
//        {
//            printf("%d, ", lowerLimit);
//        }
//        
//        lowerLimit++;
//    }
//}
///** 
// * Check whether a number is prime or not. 
// * Returns 1 if the number is prime otherwise 0. 
// */  
//int isPrime(int num)   
//{  
//    int i;  
//      
//    for(i=2; i<=num/2; i++)    
//    {    
//        /*   
//         * If the number is divisible by any number   
//         * other than 1 and self then it is not prime  
//         */    
//        if(num % i == 0)    
//        {  
//            return 0;  
//        }    
//    }   
//    return 1;   
//}

//BAI 7 Viet chuong trinh C de in tat ca cac so manh giua cac khoang da cho bang cac ham 
//So manh Strong number la mot so tu nhien co 
//tinh chat dac biet tong giai thua cua cac chu so cua so do bang chinh so do 
//ex : Ví du: 145 là so manh vì 1! + 4! + 5! = 1 + 24 + 120 = 145.
//kq:
//Enter the lower limit to find strong number: 1
//Enter the upper limit to find strong number: 60
//All strong numbers between 1 to 60 are:
//1, 2,
//#include <stdio.h>
///* Function declaration */
//long long fact(int num);
//void printStrongNumbers(int start, int end);
//int main()
//{
//    int start, end;
//    
//    /* Input start and end range */
//    printf("Enter the lower limit to find strong number: ");
//    scanf("%d", &start);
//    printf("Enter the upper limit to find strong number: ");
//    scanf("%d", &end);
//    
//    printf("All strong numbers between %d to %d are: \n", start, end);
//    printStrongNumbers(start, end);
//    
//    return 0;
//}
///**
// * Print all strong numbers in a given range
// */
//void printStrongNumbers(int start, int end)
//{
//    long long sum;
//    int num;
//    
//    // Iterates from start to end
//    while(start != end)
//    {
//        sum = 0;
//        num = start;
//        
//        // Calculate sum of factorial of digits
//        while(num != 0)
//        {
//            sum += fact(num % 10);
//            num /= 10; 
//        }
//        
//        // If sum of factorial of digits equal to current number
//        if(start == sum)
//        {
//            printf("%d, ", start);// dau phay 
//        }
//        
//        start++;
//    }
//}
///**
// * Recursively find factorial of any number
// */
//long long fact(int num)
//{
//    if(num == 0)
//        return 1;
//    else
//        return (num * fact(num-1));
//}

// BAI 9 Viet chuong trinh C de in tat ca cac so Armstrong giua cac khoang da cho bang cac ham 
//Enter lower limit to print perfect numbers: 1
//Enter upper limit to print perfect numbers: 50
//All perfect numbers between 1 to 50 are:
//6, 28,
//#include <stdio.h>
///* Function declarations */
//int isPerfect(int num);
//void printPerfect(int start, int end);
//int main()
//{
//    int start, end;
//    /* Input lower and upper limit to print perfect numbers */
//    printf("Enter lower limit to print perfect numbers: ");
//    scanf("%d", &start);
//    printf("Enter upper limit to print perfect numbers: ");
//    scanf("%d", &end);
//    //printf("\nOUTPUT:\n");
//    printf("All perfect numbers between %d to %d are: \n", start, end);
//    printPerfect(start, end);
//    return 0;
//}
///**
// * Check whether the given number is perfect or not.
// * Returns 1 if the number is perfect otherwise 0.
// */
//int isPerfect(int num)
//{
//    int i, sum;
//    /* Finds sum of all proper divisors */
//    sum = 0;
//    for(i=1; i<num; i++)
//    {
//        if(num % i == 0)
//        {
//            sum += i;
//        }
//    }
//    /* 
//     * If sum of proper positive divisors equals to given number 
//     * then the number is perfect number
//     */
//    if(sum == num)
//        return 1;
//    else
//        return 0;
//}
///**
// * Print all perfect numbers between given range start and end.
// */
//void printPerfect(int start, int end)
//{
//    /* Iterates from start to end */
//    while(start <= end)
//    {
//        if(isPerfect(start))
//        {
//            printf("%d, ", start);
//        }
//        
//        start++;
//    }   
//}








