#include <iostream>
using namespace std;
const long MAXROW=10;
const long MAXCOL=10;
//-----------------------------------
void IOMatrix(long matrix[MAXROW][MAXCOL], long row, long column, bool write)//true:in false:nhap
{   if (write) cout<<"Ma tran co "<<row<<" hang, "<<column<<" cot.\n";
	for (long r=0;r<row;r++)
	    {
		for (long c=0;c<column;c++)
			if (write) cout<<matrix[r][c]<<"  ";
			else
			    {
				cout<<"Nhap phan tu hang "<<r<<" cot "<<c<<" cua ma tran: ";
			    cin>>matrix[r][c];
			    }
		if (write) cout<<endl;
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
	IOMatrix(A,row,col, false);
	IOMatrix(A,row,col, true);
	system("pause");
	return 0;
}