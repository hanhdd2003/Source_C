#include <stdio.h>
#include <stdlib.h>

/*Bài 2: kiem tra mot so thuc có dep. 
So thuc dep là so có tong chu so chia het 
cho 9 hoac 10 (ví du 9, 10, 18.1, 18.0, 27.0, 
27.1, 123.9546 là so dep ;;;; 27.375 là so ko dep)
*/
//tim cac tu bat dau bang nguyen am cua 1 chuoi*******
int main(){
	char str[100];
	int i,sum = 0;
	//scanf khi gap dau cach thi ket thuc chuoi
	printf("Enter a string: ");
	fgets(str, 100, stdin); //stdin la luong du lieu dau vao chuan
	printf("you've enter: %s\n", str);
	//------------------------
	if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
    //------------------------
	for(i = 0; str[i] != '\0'; i++){
		if(isdigit(str[i])){
			sum += str[i]-'0';
		}
	}
	printf("Sum of digit characters: %d\n", sum);


	if(sum%10==0 || sum%9==0){
		printf("%s is beautiful number", str);
	}else{
		printf("%s is not beautiful number", str);
	}
	return 0;
}







