#include <stdio.h>
#include <math.h>

int main() {
    // Mo file input.txt de doc c�c he so a, b, c cua phuong tr�nh bac 2 tung d�ng
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Can not open file input.txt");
        return 1;
    }
    
    // Mo file output.txt de ghi ket qua
    FILE *output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Can not open file output.txt");
        return 1;
    }

    // �oc tung d�ng cua file input.txt v� giai phuong tr�nh bac 2
    float a, b, c, delta, x1, x2;
    int num_equations = 0;
    while (fscanf(input_file, "%f, %f, %f", &a, &b, &c) != EOF) {   //EOF: end of file, l�m viec voi file da den cuoi
        if(a==0){
			fprintf(output_file, "Phuong trinh khong phai la phuong trinh bac 2\n");
			continue;
		}
		// T�nh delta
        delta = b * b - 4 * a * c;

        // Kiem tra xem phuong tr�nh c� nghiem hay kh�ng
        if (delta < 0) {
            fprintf(output_file, "Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            fprintf(output_file, "Phuong trinh co nghiem kep x = %.2f.\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            fprintf(output_file, "Phuong trinh co hai nghiem x1 = %.2f, x2 = %.2f.\n",x1, x2);
        }

        num_equations++;
    }

    // ��ng file input.txt v� output.txt
    fclose(input_file);
    fclose(output_file);

    printf("Giai xong %d phuong trinh trong file iutput.txt.\n", num_equations);

    return 0;
}

