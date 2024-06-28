#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int heights[n];
    int biscuits[n] = {0};
    for(int i=0;i<n;i++)
    {
        cin >> heights[i];

    }

    int max_height= 0;
    int max_index= 0;

    for (int i = 0; i < n; i++) {
        if (heights[i] > max_height) {
            max_height= heights[i];
            max_index = i;
            biscuits[i]++;
        }
        else
        {
            biscuits[max_index]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << biscuits[i] << " ";
    }
    cout << endl;
}
