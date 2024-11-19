#include<stdio.h>
int main(){
	//khai bao hang so pi 
	const float PI = 3.14 ;
	//khai bao va gan gia tri cho ban kinh  
	 int r=3 ;
	 //khai bao bien chi vi va dien tich  
	 float s , p ;
	 // cong thuc chu vi va dien tich  
	 s= 2*PI*r*r  ;
	 p= 2*PI*r ;
	 //xuat ket qua  
	 printf("Chu vi hinh tron la %.2f\n",p); 
	  printf("Dien tich hinh tron la %.2f",s);
	  return 0 ; 
} 
