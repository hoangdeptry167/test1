//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	int locationrow;
//	int locationcol;
//	int menu;
//	double array[100][100];
//	int n, x;
//	int count = 0;
//	int r, c, row, col;
//	int totalRow = 0, totalCol = 0;
//	srand(time(NULL));
//	do
//	{
//		cout << "nhap r: ";
//		cin >> r;
//		cout << "nhap c: ";
//		cin >> c;
//	} while (r <= 0 || r > 5 || c <= 0 || c > 6);
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			array[i][j] = rand() % 10;
//			cout << array[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
	//	do
	//	{
	//		cout << "1. Tinh tong cua hang ban chon: " << endl;
	//		cout << "2. Tinh tong cua cot ban chon: " << endl;
	//		cout << "3. Tim kiem gia tri trong array:" << endl;
	//		cout << "4. END." << endl;
	//		cout << "nhap so chon: ";
	//
	//		cin >> menu;
	//	} while (menu < 1 || menu >3);
//
//
//	if (menu == 1)
//	{
//		cout << "nhap dong can tinh: ";
//		cin >> row;
//		cout << c;
//		for (int i = 0; i < c; i++)
//		{
//			totalRow = totalRow + array[row-1][i];
//			
//		}
//		cout << "Total Row = " << totalRow << endl;
//	}
//	else if (menu == 2)
//	{
//		cout << "nhap cot can tinh: ";
//		cin >> col;
//		for (int i = 0; i < r; i++)
//		{
//			totalCol = totalCol + array[i][col-1];
//		
//		}
//		cout << "Total Col = " << totalCol << endl;
//	}
//	else if(menu == 3)
//	{
//		cout << "nhap gia tri can tim: ";
//		cin >> x;
//		for (int i = 0; i < r; i++)
//		{
//			for (int  j = 0; j < c; j++)
//			{
//				if (array[i][j] == x)
//				{
//					count = count +1 ;
//					cout << "vi tri xuat hien x trong array[" << i+1 << "]" << "[" << j+1 << "] " << endl;
//
//				}
//				
//				
//			}
//		}
//		if (count != 0)
//			{
//				cout << "so lan x xuat hien trong array la: " << count;
//			}
//		else
//			{
//				cout << "x khong co trong array" << endl;
//			}
//		
//	}
//	else
//	{
//		cout << "ket thuc chuong trinh ";
//	}
//}