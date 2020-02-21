//#include <iostream>
//using namespace std;
//int main()
//{
//	int r, c;
//	double bang[3][4];
//	cout << "nhap gia tri row:  ";
//	cin >> r;
//	cout << "nhap gia tri columns: ";
//	cin >> c;
//	do
//	{
//		if (r > 3 || r < 0 || c > 4 || c < 0)
//		{
//			cout << "nhap lai row: ";
//			cin >> r;
//			cout << "nhap lai columns: ";
//			cin >> c;
//		
//		}
//	} while (r>3 || r<0 || c > 4 || c < 0);
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "nhap gia tri bang[" << i <<"]" << "[" << j << "]" << ":";
//			cin >> bang[i][j];
//		}
//	}
//	cout << "Mang dang luu tru la: " << endl;
//	for (int i = 0; i < r; i++)
//
//	{
//		for (int j = 0; j < c; j++)
//			cout << bang[i][j] << "\t";
//		cout << endl;
//	}
//	return 0;
//}