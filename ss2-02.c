#include<stdio.h> 
int main() {
	//khai bao ten bien so, bien tong, tich,thuong 
	int firstNumber=10 , secondNumber=5 ; 
	int sum, minus ,divide,subtract ; 
	//thuc hien phep tinh tong  
	sum= firstNumber + secondNumber ;
	//thuc hien phep tinh tru 
	subtract= firstNumber - secondNumber ;
	//thuc hien phep tinh chia 
	divide = firstNumber / secondNumber ;
	// thuc hien phep tinh nhan
	minus = firstNumber * secondNumber ; 
	 
	//xuat ra man hinh ket qua  
	printf("Tong la %d\n",sum ) ;
	printf ("Hieu la %d\n",subtract ) ;
	printf("Tich la %d\n",minus ) ;
	printf("Thuong la %d",divide ) ;
	return 0 ; 
}
