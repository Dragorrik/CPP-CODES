#include<bits/stdc++.h>
using namespace std;

int main()
{

	cout<<"No: "<<endl;
	int n;
	cin>>n;
	int processes[n];
	cout<<"Enter Process ID: "<<endl;
	for(int i=0;i<n;i++)
    {
        cin>>processes[i];
    }

	int bt[n];
	cout<<"Enter Burst time: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>bt[i];
    }

    cout<<"Enter time quantum"<<endl;
	int quantum;
	cin>>quantum;
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

	int rem_bt[n];
	for (int i = 0 ; i < n ; i++)
		rem_bt[i] = bt[i];
	int t = 0;

	while (1)
	{
		bool done = true;

		for (int i = 0 ; i < n; i++)
		{

			if (rem_bt[i] > 0)
			{
				done = false;
				if (rem_bt[i] > quantum)
				{

					t += quantum;

					rem_bt[i] -= quantum;
				}

				else
				{

					t = t + rem_bt[i];

					wt[i] = t - bt[i];

					rem_bt[i] = 0;
				}
			}
		}

		if (done == true)
		break;
	}

	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];

	cout << "Processes "<< " Burst time "
		<< " Waiting time " << " Turn around time\n";

	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << i+1 << "\t\t" << bt[i] <<"\t "
			<< wt[i] <<"\t\t " << tat[i] <<endl;
	}
	cout << "Average waiting time = "
		<< (float)total_wt / (float)n;
	cout << "\nAverage turn around time = "
		<< (float)total_tat / (float)n;

}
