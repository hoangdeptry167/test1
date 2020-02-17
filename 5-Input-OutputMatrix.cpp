
#include <iostream>
using namespace std;
const long MAXROW=10;
const long MAXCOL=10;
//-----------------------------------
void OutputMatrix(long matrix[MAXROW][MAXCOL], long row, long column)
{   cout<<"Ma tran co "<<row<<" hang, "<<column<<" cot.\n";
	for (long r=0;r<row;r++)
	    {
		for (long c=0;c<column;c++)
			cout<<matrix[r][c]<<"  ";
		cout<<endl;
		}
    return;			
}
//-----------------------------------
void InputMatrix(long matrix[MAXROW][MAXCOL], long row, long column)
{
	for (long r=0;r<row;r++)
		for (long c=0;c<column;c++)
		{
			cout<<"Nhap phan tu hang "<<r<<" cot "<<c<<" cua ma tran: ";
			cin>>matrix[r][c];
		}
    return;			
}
int main()
{
	long A[MAXROW][MAXCOL];
	long row=0, col=0;
	cout<<"Ma tran A co bao nhieu hang: ";
	cin>>row;
    cout<<"Ma tran A co bao nhieu cot: ";
	cin>>col;
	InputMatrix(A,row,col);
	OutputMatrix(A,row,col);
	system("pause");
	return 0;
}