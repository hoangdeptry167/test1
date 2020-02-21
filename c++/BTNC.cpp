//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <string>
//#include <cmath>
//using  namespace std;
//const int row = 13;
//const int col = 13;
//const int n = 13;
//int min = 0, max = 0;
//int maxmatch = 0;
//int menu = 0;
//int main()
//{
//	string tendoi1, tendoi2;
//	int doi1, doi2;
//	int thang = 0, hoa = 0, thua = 0;
//	int diem = 0;
//	int sobanthang = 0;
//	int sobanthua = 0;
//	// ten doi
//	string array[13] = { "Argentina" , "Bi", "Duc", "Phap", "Anh",
//"Mexico", "My", "Trung Quoc", "Han Quoc", "Viet Nam",
//"Lao", "Campuchia", "Singapore" };
//
//	srand(time(NULL));
//	// bang diem random
//	cout << "BANG DIEM CAC DOI BONG" << endl;
//	double bang[row][col];
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (i == j) {
//				bang[i][j] = 0;
//			}
//			else
//			{
//				bang[i][j] = rand() % 6;
//			}
//			cout << bang[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "TEN CAC DOI BONG" << endl;
//	for (int i = 0; i < row; i++)
//	{
//		cout << i + 1 << ". " << array[i] << "\t";
//	}
//	cout << endl << endl;
//	cout << "MENU" << endl;
//	do
//	{
//		cout << "1. Nhap 2 doi bong, in ket qua tran dau " << endl;
//		cout << "2. Nhap 1 doi bong, in ra ket qua voi cac doi bong con lai " << endl;
//		cout << "3. Nhap 1 doi bong, in ra so tran thang, thua, hoa, diem, so ban thang, ban thua" << endl;
//		cout << "4. Doi ghi nhieu ban thang nhat va de thung luoi nhieu nhat:" << endl;
//		cout << "5. Tran dau co so ban thang nhieu nhat:" << endl;
//		cout << "6. Tran dau co ti so thang thua dam nhat" << endl;
//		cout << "7. END." << endl;
//		cout << "nhap so chon: ";
//		cin >> menu;
//	} while (menu < 1 || menu >7);
//	// xuat ket qua doi1 - doi2
//	if (menu == 1)
//	{
//		do
//		{
//			do
//			{
//				cout << "nhap doi 1: ";
//				cin >> doi1;
//				tendoi1 = array[doi1 - 1];
//			} while (doi1 <= 0 || doi1 > 13);
//
//			do
//			{
//				cout << "nhap doi 2: ";
//				cin >> doi2;
//				tendoi2 = array[doi2 - 1];
//			} while (doi2 <= 0 || doi2 > 13);
//			//
//
//			if (doi1 != doi2)
//			{
//				cout << "Ket qua cua tran dau giua doi " << tendoi1 << "-" << tendoi2 << ": " << bang[doi1 - 1][doi2 - 1] << "-" << bang[doi2 - 1][doi1 - 1];
//			}
//			else
//			{
//				cout << "Vui long chon lai doi bong " << endl;
//			}
//
//		} while (doi1 == doi2);
//		cout << endl << endl << endl;
//	}
//	// nhap so hieu va in ra ket qua cac doi bong con lai
//	else if (menu == 2)
//	{
//		cout << "nhap doi bong in ket qua giai dau: ";
//		cin >> doi1;
//		for (int i = 0; i < n; i++)
//		{
//			tendoi1 = array[doi1 - 1];
//			tendoi2 = array[i];
//			if (i != doi1 - 1)
//			{
//				cout << "Ket qua cua tran dau giua doi " << tendoi1 << "-" << tendoi2 << ": " << bang[doi1 - 1][i] << "-" << bang[i][doi1 - 1] << endl;
//			}
//		}
//	}
//	//nhap doi bong in ra thang, thua, hoa, so ban thang, ban thua, diem.
//	else if (menu == 3)
//	{
//		cout << "nhap doi bong in ket qua giai dau: ";
//		cin >> doi1;
//		tendoi1 = array[doi1 - 1];
//		for (int i = 0; i < n; i++)
//		{
//			if (i != doi1 - 1)
//			{
//				if (bang[doi1 - 1][i] > bang[i][doi1 - 1])
//				{
//					thang = thang + 1;
//
//				}
//				else if (bang[doi1 - 1][i] < bang[i][doi1 - 1])
//				{
//					thua = thua + 1;
//				}
//				else
//				{
//					hoa = hoa + 1;
//				}
//				sobanthang = sobanthang + bang[doi1 - 1][i];
//				sobanthua = sobanthua + bang[i][doi1 - 1];
//			}
//		}
//		cout << "so tran thang cua doi " << tendoi1 << ":" << thang << endl;
//		cout << "so tran thua cua doi " << tendoi1 << ":" << thua << endl;
//		cout << "so tran hoa cua doi " << tendoi1 << ":" << hoa << endl;
//		cout << "diem cua doi " << tendoi1 << ":" << thang * 3 + hoa * 1 << endl;
//		cout << "so ban thang cua doi " << tendoi1 << ":" << sobanthang << endl;
//		cout << "so ban thua cua doi " << tendoi1 << ":" << sobanthua << endl << endl << endl;
//	}
//	//cho biet doi nao ghi nhieu ban thang nhat, thung luoi nhieu nhat
//	else if (menu == 4)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			int banthang = 0, banthua = 0;
//
//			if (i == 0)
//			{
//				for (int j = 0; j < col; j++)
//				{
//					if (i != j)
//					{
//						max = max + bang[i][j];
//						min = min + bang[j][i];
//					}
//				}
//			}
//			else
//			{
//				for (int j = 0; j < col; j++)
//				{
//					if (i != j)
//					{
//						banthang = banthang + bang[i][j];
//						banthua = banthua + bang[j][i];
//					}
//				}
//				if (banthang > max)
//				{
//
//					max = banthang;
//					tendoi1 = array[i];
//				}
//				if (banthua < min)
//				{
//					min = banthua;
//					tendoi2 = array[i];
//				}
//			}
//		}
//		cout << "doi bong " << tendoi1 << " co ban thang nhieu nhat la: " << max << endl;
//		cout << "doi bong " << tendoi2 << " co ban thua nhieu nhat la: " << min << endl;
//	}
//	//in ra tran co nhieu ban thang nhat
//	else if (menu == 5)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				if (i != j)
//				{
//					if ((bang[i][j] + bang[j][i]) > maxmatch)
//					{
//						maxmatch = bang[i][j] + bang[j][i];
//						tendoi1 = array[i];
//						tendoi2 = array[j];
//					}
//				}
//			}
//		}
//		cout << "tran co ban thang nhieu nhat: " << tendoi1 << "-" << tendoi2 << " voi so ban thang la: " << maxmatch << endl;
//	}
//	//in ra tran co cach biet lon nhat
//	else if (menu == 6)
//	{
//		int range = 0;
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				if (i != j)
//				{
//					if (abs(bang[i][j] - bang[j][i]) > range)
//					{
//						range = abs(bang[i][j] - bang[j][i]);
//						tendoi1 = array[i];
//						tendoi2 = array[j];
//					}
//				}
//			}
//		}
//		cout << "tran co cach biet nhieu nhat: " << tendoi1 << "-" << tendoi2 << " voi ti so cach biet la: " << range << endl;
//	}
//	else
//	{
//	cout << "ket thuc chuong trinh";
//	}
//}
