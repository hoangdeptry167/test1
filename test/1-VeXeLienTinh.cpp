/*
Tuyen Sg     Vinh Long      Can Tho      Rach Gia      Ca Mau
Ve Ngoi       75000          87000         93000       105000  
Ve Nam        95000         102000        123000       132000
Toc Hanh     125000         152000        179000       191000  
==> Dung mang 2 chieu de luu tru bang gia. Co 3 hang the hien Loai ve
va co 4 cot de the hien tuyen duong
*/
#include <iostream>
using namespace std;
//Gan truc tiep gia ve vao mang theo phuong an ma hoa du lieu
const long GIAVE[][4]={{75000,87000,93000,105000},{95000,102000,123000,132000},
                       {125000,152000,179000,191000}
                      };
int main()
{   long tuyen=0, loaive=0;
    cout<<"Ban di tuyen nao Sg-Vinh Long/Sg-Can Tho/Sg-Rach Gia/Sg-Ca Mau (0/1/2/3): ";
	cin>>tuyen;
	cout<<"Ban mua ve nao ve ngoi/ve nam/ve toc hanh (0/1/2): ";
	cin>>loaive;
	cout<<"Gia ve la "<< GIAVE[loaive][tuyen]<<endl;
	system("pause");
	return 0;
}