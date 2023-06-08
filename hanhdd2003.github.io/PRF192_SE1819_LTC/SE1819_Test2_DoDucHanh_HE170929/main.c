#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char nguyenam[] = "aeiouAEIOU";
    int freq[5] = {0};
    char answer;
	int a1 = 0,e1 = 0,i1 = 0,o1 = 0,u1 = 0;
    do {
        printf("Moi ban nhap vao moi cau: ");
        fgets(sentence, 1000, stdin);
        int i;
        for(i = 0; i < strlen(sentence); i++) {
            if (strchr(nguyenam, sentence[i]) != NULL) {
            	
                switch (sentence[i]) {
                    case 'a':
                    case 'A':
                        freq[0]++;
                        break;
                    case 'e':
                    case 'E':
                        freq[1]++;
                        break;
                    case 'i':
                    case 'I':
                        freq[2]++;
                        break;
                    case 'o':
                    case 'O':
                        freq[3]++;
                        break;
                    case 'u':
                    case 'U':
                        freq[4]++;
                        break;
                }
            }
        }

        printf("Thong ke: a(%d), e(%d), i(%d), o(%d), u(%d)",freq[0],freq[1],freq[2],freq[3],freq[4]);
		//luu du lieu 
		a1+=freq[0];
		e1+=freq[1];
		i1+=freq[2];
		o1+=freq[3];
		u1+=freq[4];
       
        memset(freq, 0, sizeof(freq));
        printf("\nBan co muon tiep tuc nua khong (Y/N)? ");
        scanf(" %c", &answer);
        getchar(); 
	if(answer == 'N' || answer == 'n'){
		printf("\nThong ke tong hop: a(%d), e(%d), i(%d), o(%d), u(%d)",a1,e1,i1,o1,u1);
		break;
	}
    } while (answer == 'Y' || answer == 'y');

    return 0;
}
