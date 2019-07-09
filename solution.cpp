#include<iostream>
#include<stdlib.h>
using namespace std;
class Solution{

	public:void robotMovement(int upper_x, int upper_y, int r_x, int r_y, char direction, char seq[], int len)
	{
	int i;
	for(i=0;i<len;i++)
	{
		if(direction == 'N')
		{
			if(seq[i] == 'L')
			{
				direction = 'W';
			}
			else if(seq[i] == 'R')
			{
				direction = 'E';
			}
			else{	
				r_y++;
				if(r_y>upper_y-1)
					r_y = 0;
			}
		}
		else if(direction == 'S')
		{
			if(seq[i] == 'L')
			{
				direction = 'E';
			}
			else if(seq[i] == 'R')
			{
				direction = 'W';
			}
			else{
				r_y--;
					if(r_y<0)
					r_y = upper_y-1;
			}
		}
		else if(direction == 'E')
		{
			if(seq[i] == 'L')
			{
				direction = 'N';
			}
			else if(seq[i] == 'R')
			{
				direction = 'S';
			}
			else{
				r_x++;
				if(r_x>upper_x-1)
					r_x = 0;
			}
		}
		else if(direction == 'W')
		{
			if(seq[i] == 'L')
			{
				direction = 'S';
			}
			else if(seq[i] == 'R')
			{
				direction = 'N';
			}
			else{
				r_x--;
				if(r_x<0)
					r_x = upper_x-1;
			}
		}
	}
	cout<<r_x <<r_y <<direction;
	}
};
int main()
{
	int upper_x, upper_y, r_x, r_y;
	char direction;
	char seq[10];
	
	cin>>upper_x;
	cin>>upper_y;
	cin>>r_x;
	cin>>r_y;
	cin>>direction;
	cin>>seq;
	int i=0;
	while(seq[i]!='\0')
	{
		i++;
	}
	
	Solution sol;
	sol.robotMovement(upper_x, upper_y, r_x, r_y, direction, seq, i);
	return 0;
}
