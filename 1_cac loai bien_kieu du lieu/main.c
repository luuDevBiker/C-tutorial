#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
		int									%d
		char								%c
		float								%f
		double								%lf
		short int							%hd
		unsigned int						%u
		long int							%li
		long long int						%lli
		unsigned long int					%lu
		unsigned long long int				%llu
		signed char							%c
		unsigned char						%c
		long double							%Lf
	*/
	// các kieu du lieu thuong duoc su dung 
	
	char kyTu; // abc --> a 
	int soNguyen;// 
	float soThapPhan;
	double soThapPhan2;
	

//	int a = INT_MAX + 1;
//	printf("%d \n",a); 
	
	printf("Nhap bat Ky : ");
	scanf("%c",&kyTu); 
	printf("Nhap so tuoi : ");
	scanf("%d",&soNguyen);
	printf("Nhap diem mon C cua ban : ");
	scanf("%f",&soThapPhan);
	printf("Nhap chieu cao cua ban : ");
	scanf("%lf",&soThapPhan2);
	
	printf("ky tu %c -- \nso kieu nguyen %d -- \n so thap phan kieu float %f -- \n so thap phan kieu double %e",
	kyTu,soNguyen,soThapPhan,soThapPhan2); 
	
	return 0;
}
