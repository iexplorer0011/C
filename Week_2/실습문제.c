#include <stdio.h>

int main() {
  int amount;
  scanf("%d", &amount);

  int receive[100];

  for (int i = 0; i < amount; i++) {
    scanf("%d", &receive[i]);
  }

  int total_receive = 0; // 총 입고수량
  for (int i = 0; i < amount; i++) {
    total_receive += receive[i];
  }

  int sell[100];

  for (int i = 0; i < amount; i++) {
    scanf("%d", &sell[i]);
  }

  int total_sales = 0; // 총 판매수량
  for (int i = 0; i < amount; i++) {
    total_sales += sell[i];
  }

  int stock[100];

  for (int i = 0; i < amount; i++) {
    stock[i] = receive[i] - sell[i];
  }

  printf("재고 수량 : ");
  for (int i = 0; i < amount; i++) {
    printf("%d ", stock[i]);
  }

  printf("\n총 판매량 : %d (판매율 %.2lf%%)", total_sales,
         (double)total_sales / total_receive * 100);

  int max_sales = 0, min_sales = 0;
  for (int i = 0; i < amount; i++) {
    for (int j = i + 1; j < amount; j++) {
      if(sell[max_sales] < sell[j]) {
        max_sales = j;
      }
      if(sell[min_sales] > sell[j]) {
        min_sales = j;
      }
    }
  }
  
  printf("\n가장 많이 판매된 상품 : ID %d, 판매량 %d", max_sales + 1, sell[max_sales]);
  printf("\n가장 적게 판매된 상품 : ID %d, 판매량 %d", min_sales + 1, sell[min_sales]);

  for (int i = 0; i < amount; i++) {
    if (stock[i] < 3) {
      printf("\n상품 ID %d : 재고부족(%d)", i + 1, stock[i]);
    }
  }

  return 0;
}