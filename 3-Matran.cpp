/*
Nhap 1 ma tran vuong n hang n cot
Sau do in ra cac thong tin: tong cac phan tu trong ma tran, gia tri lon nhat/be nhat cua ma tran
*/
#include <iostream>
using namespace std;
const long MAX=100;
long Matrix[MAX+1][MAX+1];//khong su dung hang 0 va cot 0 cho de lam viec!!
int main()
{
	long n=0;
	cout<<"Nhap so hang cua ma tran vuong:";
	cin>>n;
	for(int r=1;r<=n;r++)
		for(int c=1;c<=n;c++)
		{
			cout<<"Nhap phan tu hang "<<r<<" cot "<<c<<" cua ma tran: ";
		    cin>>Matrix[r][c];
		}
    long tongso=0, solonnhat=-LONG_MAX, sonhonhat=LONG_MAX;
	for(int r=1;r<=n;r++)
		for(int c=1;c<=n;c++)
		{
			tongso+=Matrix[r][c];
			if (solonnhat<Matrix[r][c]) solonnhat=Matrix[r][c];
			if (sonhonhat>Matrix[r][c]) sonhonhat=Matrix[r][c];
		}
	cout<<"Tong so cac phan tu la "<<tongso<<endl;
	cout<<"Gia tri lon nhat trong ma tran la "<<solonnhat<<endl;
	cout<<"Gia tri nho nhat trong ma tran la "<<sonhonhat<<endl;
	system("pause");
	return 0;
}