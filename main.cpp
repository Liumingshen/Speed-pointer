#include<iostream>

using namespace std;

int CutElem(int num[], int target, int n)
{
    int flowindex = 0;
    for(int fastindex = 0; fastindex < n; fastindex++)
    {
        if(num[fastindex] != target)
        {
            num[flowindex++] = num[fastindex];
        }
    }
    return flowindex;
}

int main()
{
    int a[5],b,m = 6;
    int index;
    cout << "The vector value is:" << endl;
    for(int i = 0; i < m; i++)
    {
        cin >> a[i] ;
    }
    cout << "The target value is:" << endl;
    cin >> b;
    index = CutElem(a,b,m);
    cout << "The new length is:"<<index <<endl;
}
