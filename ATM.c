#include<stdio.h>

int main()
{
	int pin = 1234; //ma pin mac dinh
	int balance = 1000;  //so du ban dau
	int maxAttempts = 3; //so lan nhap sai toi da
	int option;
	int enteredPin;
	int withdrawAmount;
	
	printf("chao mung ban den ATM \n");
	int attempts = 0; //so lan da nhap sai
	while(attempts < maxAttempts)
	{
		printf("nhap ma pin cua ban con lai %d lan thu :", maxAttempts - attempts);
		fflush(stdin);
		scanf("%d" , &enteredPin);
		// kiem tra ma pin
		if (enteredPin == pin)
		{
			printf("dang nhap thanh cong \n");
			break;  //thoat khoi vong lap neu dang nhap thanh cong
		}else{
			printf("ma PIN khong hop le \n");
			attempts++;
		}
	}
	if(attempts == maxAttempts)
	{
		printf("ban da nhap sai qua so lan cho phep\n");
		return 1; //ket thuc chuong trinh
	}
	while(1)
	{
		printf("\nlua chon cua ban :\n");
		printf("1.kiem tra so du \n");
		printf("2.rut tien \n");
		printf("3.ket thuc \n");
		scanf("%d", &option);
		
		switch(option)
		{
			case 1:
				printf("so du cua ban :%d VND\n", balance);
				break;
			case 2:
				printf("nhap so tien muon rut :");
				scanf("%d", &withdrawAmount);
			if(withdrawAmount > balance)
			{
				printf("so du khong du de rut tien\n");
			}else{
				balance -= withdrawAmount;
				printf("ban da rut %d VND . so du con lai:%d VND\n", withdrawAmount, balance);
			}
			break;
			case 3:
				printf("cam on ban da su dung dich vu ATM hen gap lai\n");
				return 0; // ket thuc chuong trinh
			default:
				printf("lua chon khong hop le \n");
		} 
	}
	return 0;
}
