/*
Tam giac Pascal
   1  1
   1  2  1
   1  3  3  1
   1  4  6  4  1
   ...............
*/
#include <iostream>
using namespace std;
const long MAX=100;
//Khai bao mang 2 chieu de tinh toan tam giac Pascal. 
//Hang 1 co1 2 phan tu, hang 2 co 3 phan tu,..==> so cot=so hang + 1
//Ngoai ra se khong su dung hang 0 va cot 0 - cho de tinh toan!!!
//Gan truc tiep gia tri ban  dau cua hang 1 cua tam guac: la co so de tinh toan tiep cac hang ke
long Pascal[MAX][MAX+1]={ {0},{0,1,1} };
int main()
{
	long n=0;
	cout<<"Ban muon in ra tam giac Pascal co bao nhieu hang:";
	cin>>n;
	for(long r=2;r<=n;r++)
	{
		Pascal[r][1]=1;   //Phan tu o cot = 1
		Pascal[r][r+1]=1;  //Phan tu o cot r+1 = 1
		//Phan tu tu cot 2 den cot r se bang tong cua 2 phan tu nam o hang r-1
		for (long c=2;c<=r;c++) Pascal[r][c]=Pascal[r-1][c-1]+Pascal[r-1][c];
	}
	for(long r=1;r<=n;r++)
	{
		for (long c=1;c<=r+1;c++) cout<<Pascal[r][c]<<"      ";
		cout<<endl;
	}
	system("pause");
	return 0;
}
