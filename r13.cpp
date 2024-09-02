// quick sort
#include <iostream>
using namespace std;
int partion(int arr[], int s, int e)
{
    int count = 0, pivot = arr[s];

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);

    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j]> pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void solve(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partion(arr, s, e);

    solve(arr, s, p - 1);
    solve(arr, p + 1, e);
}
int main()
{
    int arr[10] = {2, 3, 4, 5, 10, 1, 2, 3, 4, 0};
    int n = 10;
    solve(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}