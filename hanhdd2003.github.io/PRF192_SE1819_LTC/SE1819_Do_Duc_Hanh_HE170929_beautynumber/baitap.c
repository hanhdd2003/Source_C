// Do Duc Hanh HE170929 SE1819

#include <stdio.h>
#include <stdlib.h>
int main() {
  long long n;
  int sum = 0;
  // Nhap so n
  printf("Nhap so n: ");
  scanf("%lld", &n);

  // T�nh tong c�c chu so cua so n
  while (n > 0) {
    sum = sum + n%10;
    n = n/10;
  }

  // Kiem tra xem tong c�c chu so c� chia het cho 10 hay kh�ng
  if (sum % 10 == 0) {
    printf("So da nhap la so dep\n");
  } else {
    printf("So da nhap la so khong dep\n");
  }
  system ("pause");
  return 0;
}
