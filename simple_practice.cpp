#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[10],b[10];
    int c,d;
    cout << "how many number will in set: \n";
    cin >> c;
    cout << "how many number will in second set: \n";
    cin >> d;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    cout << "enter first array element:\n";
    for(int i = 0; i < c; i++)
    {
        cin >> a[i];
    }
    cout << "enter second array element:\n";
    for(int i = 0; i < d; i++)
    {
        cin >> b[i];
    }

    //union operation
    for(int i = 0; i < c; i++)
    {
        v.push_back(a[i]);
    }
    for(int i = 0; i<d; i++)
    {
        int count1= 0;
        for(int j = 0; j < c; j++)
        {
            if(b[i]==a[j])
            {
                count1 = 1;
            }

        }
        if(count1 == 0)
        {
            v.push_back(b[i]);
        }
    }

    //intersection operation
    for(int i = 0; i <c; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if(a[i]== b[j])
            {
                v1.push_back(b[j]);
                break;
            }
            else
            {
                continue;
            }
        }
    }

    // subtraction from union to intersection


    for(int i = 0; i<v.size(); i++)
    {
        int count1= 0;
        for(int j = 0; j < v1.size(); j++)
        {
            if(v[i]==v1[j])
            {
                count1 = 1;
            }

        }
        if(count1 == 0)
        {
            v2.push_back(v[i]);
        }
    }
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}
