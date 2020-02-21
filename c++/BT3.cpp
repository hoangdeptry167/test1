//#include <iostream>
//#include<string>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	double tong = 0;
//	double array[10][15];
//	int r, c;
//	srand(time(null));
//	do
//	{
//		cout << "nhap r: ";
//		cin >> r;
//		cout << "nhap c: ";
//		cin >> c;
//	} 
//	while (r<=0 || r>10 || c <= 0 || c>15);
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			
//			array[i][j] = rand() % 10  ;
//			cout << array[i][j] << "\t";
//			tong = tong + array[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout <<"tong cua mang la: " << tong;
//	cout << endl;
//	/////////////////
//	int min=0;
//	int max=0;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (array[i][j]<min)
//			{
//				min = array[i][j];
//			}
//			if (array[i][j]> max)	
//			{
//				max = array[i][j];
//			}
//		}
//	}
//	cout << "gia tri lon nhat cua mang la:  " << max << endl;
//	cout << "gia tri nho nhat cua mang la:  " << min << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (array[i][j] == min)
//			{
//				cout << "vi tri gia tri nho nhat la array[" << i << "]" << "[" << j << "]: " << min << endl;
//			}
//			if (array[i][j] == max)
//			{
//				cout << "vi tri gia tri lon nhat la array[" << i << "]" << "[" << j << "]: " << max << endl;
//			}
//			
//
//		}
//	}
//	return 0;
//
//}