/*
A sliding window protocol of simplex stop and go in which sender sends the packet and waits for the 
ACK (acknowledgement) of the packet. Once the ACK reaches the sender, it transmits the next packet 
in row. If the ACK is not received, it re-transmits the previous packet again.
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	cout<<"Stop And Wait "<<endl;
	cout<<"Enter the toatal number of frames to be transmit: ";
	int frm;
	cin>>frm;
	int i = 1;
	while(i<=frm)
	{
		cout<<"Frame "<<i<<" is transmitted."<<endl;
		int t = rand()%2;
		if(t == 0)
		{
	cout<<"Time out - Acknowledgement of frame " << i << " not Received !!! "<<endl;
			continue;
		}
		
		cout<<"Acknowledgement of frame "<<i<<" has received."<<endl;
		i++;
	}
	return 0;
}
/*
output



administor@ubuntu18-04:~/naman/TYsem6/CN$ ./a.out
Stop And Wait 
Enter the toatal number of frames to be transmit: 13
Frame 1 is transmitted.
Acknowledgement of frame 1 has received.
Frame 2 is transmitted.
Time out - Acknowledgement of frame 2 not Received !!! 
Frame 2 is transmitted.
Acknowledgement of frame 2 has received.
Frame 3 is transmitted.
Acknowledgement of frame 3 has received.
Frame 4 is transmitted.
Acknowledgement of frame 4 has received.
Frame 5 is transmitted.
Acknowledgement of frame 5 has received.
Frame 6 is transmitted.
Time out - Acknowledgement of frame 6 not Received !!! 
Frame 6 is transmitted.
Time out - Acknowledgement of frame 6 not Received !!! 
Frame 6 is transmitted.
Acknowledgement of frame 6 has received.
Frame 7 is transmitted.
Acknowledgement of frame 7 has received.
Frame 8 is transmitted.
Time out - Acknowledgement of frame 8 not Received !!! 
Frame 8 is transmitted.
Acknowledgement of frame 8 has received.
Frame 9 is transmitted.
Time out - Acknowledgement of frame 9 not Received !!! 
Frame 9 is transmitted.
Acknowledgement of frame 9 has received.
Frame 10 is transmitted.
Acknowledgement of frame 10 has received.
Frame 11 is transmitted.
Time out - Acknowledgement of frame 11 not Received !!! 
Frame 11 is transmitted.
Time out - Acknowledgement of frame 11 not Received !!! 
Frame 11 is transmitted.
Time out - Acknowledgement of frame 11 not Received !!! 
Frame 11 is transmitted.
Time out - Acknowledgement of frame 11 not Received !!! 
Frame 11 is transmitted.
Time out - Acknowledgement of frame 11 not Received !!! 
Frame 11 is transmitted.
Acknowledgement of frame 11 has received.
Frame 12 is transmitted.
Time out - Acknowledgement of frame 12 not Received !!! 
Frame 12 is transmitted.
Acknowledgement of frame 12 has received.
Frame 13 is transmitted.
Acknowledgement of frame 13 has received.
administor@ubuntu18-04:~/naman/TYsem6/CN$ 



*/
