#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c ;
	while(1){
		system("cls");
		int month, year, days;
		printf("Please enter month, year: ");
		scanf("%d %d", &month, &year);
		days = 0;
	
/*	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 || month == 12){
		days = 31;
	}else if (month == 4 || month == 6 || month == 9 || month == 11){
		days = 30;
	}else{
		if( year % 400 == 0 || year % 4 == 0 && year % 100 !=0){
			days = 29;
		}else{
			days = 28;
		}
	}	
*/

		switch (month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				days = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days = 30;
				break;
			case 2:
				if(year % 400 == 0 || year % 4 == 0 & year % 100 !=0){
					days = 29;
				}else{
					days = 28;
				}
				break;
	
	}
	
		printf("Month %d - Year %d has %d Days.\n", month, year, days);
		printf("Continue (Y) or exit (N) : ");
		scanf(" %c", &c);
		if(c == 'n' || c == 'N'){
			break;
	}
}	
	return 0;
}
