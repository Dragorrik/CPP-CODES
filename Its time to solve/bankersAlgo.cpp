//C program for Banker's Algorithm
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// P0, P1, P2, P3, P4 are the names of Process

	int n, r, i, j, k;
	cout<<"Enter Process no and Resource no"<<endl;
	cin>>n>>r; // Indicates the Number of processes
 //Indicates the Number of resources
    int alloc[n][r],max[n][r];
    cout<<"Enter Allocation"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>alloc[i][j];
        }
    }
    cout<<"Enter Maximum Need"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>max[i][j];
        }
    }

    cout<<"Enter availability"<<endl;
	int avail[r];// These are Available Resources
    for(int i=0;i<r;i++)
    {
        cin>>avail[i];
    }
	int f[n];
	for (k = 0; k < n; k++) {
		f[k] = 0;
	}
	int remneed[n][r];
	for (i = 0; i < n; i++) {
		for (j = 0; j < r; j++)
			remneed[i][j] = max[i][j] - alloc[i][j];
	}
	int y = 0,m=0;
	for (k = 0; k < n; k++) {
		for (i = 0; i < n; i++) {
			if (f[i] == 0) {

				int flag = 0;
				for (j = 0; j < r; j++) {
					if (remneed[i][j] > avail[j]){
						flag = 1;
						break;
					}
				}

				if (flag == 0) {
					for (y = 0; y < r; y++)
						avail[y] += alloc[i][y];
					f[i] = 1;
					cout<<"P"<<i<<"->";
					m++;
				}
			}
		}
	}

if(m<n)
    cout<<"Unsafe Sequence";
else
    cout<<"Safe Sequence";

    cout<<endl;

    cout<<"Which process will get request?"<<endl;
    int reqno;
    cin>>reqno;
    cout<<"Enter request resource"<<endl;
    int reqres[r],l=0;
    for(int i=0;i<r;i++)
        cin>>reqres[i];

        while(1)
        {
            int i=reqno;
            for(int j=0;j<r;j++)
            {
                if(reqres[j]<=remneed[i][j] && reqres[j]<=avail[j])
                {
                     l++;
                }
            }
            break;
        }

        if(l==r)
        {
            cout<<"Requesting resource is possible"<<endl;
            while(1)
            {
                int i=reqno;
                for(int j=0;j<r;j++)
                {
                    alloc[i][j]=alloc[i][j]+reqres[j];
                    remneed[i][j]=remneed[i][j]-reqres[j];
                    avail[r]=avail[r]-reqres[r];
                }
                break;
            }

        }
        else
        {
            cout<<"Sry,requesting resource isn't possible..."<<endl;
        }

        cout<<"Allocation after requesting resource"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<r;j++)
            {
                cout<<alloc[i][j]<<" ";
            }
            cout<<endl;
        }



}

