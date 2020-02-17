#include <iostream>
using namespace std;
const long MAXROW=10;
const long MAXCOL=10;
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
int main()
{
	long A[MAXROW][MAXCOL]={ {1,2,3,4}, {2,4,6,8}, {3,6,9,12} };
	OutputMatrix(A,3,4);
	system("pause");
	return 0;
}