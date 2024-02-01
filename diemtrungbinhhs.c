#include<stdio.h>

main(){
	int count = 0;
	float total = 0;
	char choice;
	char subject[50];
	float score;
	do {
		printf("Nhap ten mon hoc :");
		scanf("%s", subject);
		printf("Nhap diem :");
		scanf("%f", &score);
		total += score;
		count ++;
		printf("ban co muon tiep tuc hay khong :");
		fflush(stdin); 
		scanf("%c", &choice);
	} while(choice == 'y' || choice == 'Y');


	if (count >0){
		double average = total / count;
		printf("diem trung binh cua ban la : %2.lf\n", average);
	}else {
		printf("khong co mon hoc nao dc nhap diem \n");
	}
}
