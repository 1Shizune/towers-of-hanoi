//Persio Sanchez
#include <iostream>
#include <vector>
using namespace std;
int EvenRings(int rings)
{
   	vector<int> t[3];
	int n =rings;
	int to =2;
   	int from = 0, candidate = 1, move = 0;
	
	for(int i = n + 1; i >= 1; --i) //Initialize the disks into their towers, all the disks are placed in the first tower t[0]
    t[0].push_back(i);
    t[1].push_back(n+1);
    t[2].push_back(n+1);
   
   while (t[1].size() < n+1) //loop that will continue untill all the rings are moved from the first tower to the second one
   { 
      cout << "Move #" << ++move << ": Transfer ring " << candidate << " from tower " << char(from+'A') << " to tower " << char(to+'A') << "\n";
            
      t[to].push_back(candidate); //Move a ring from the from to the to position
      t[from].pop_back(); //Remove the moved ring from the tower it was originally located
            
      	if (t[(to+1)%3].back() < t[(to+2)%3].back()) //Look for the tower with the smallest ring on top of it, that wasnt moved last turn, to set the next from tower to it
      	{		    
		     from = (to+1)%3;
      	}
			else
      		{
			  	from = (to+2)%3;
			}        		
    	
      candidate = t[from].back(); 
         
      if (candidate > t[(from+2)%3].back()) //Determines which tower is closer to move the ring to
         to = (from+1)%3;
      else
         to = (from+2)%3;
   }
   
}

int OddRings(int rings)
{
   		vector<int> t[3];
		int n = rings;
		int to =1;	
		int from = 0, candidate = 1, move = 0;
	   
	   for(int i = n + 1; i >= 1; --i)
    	t[0].push_back(i);
   		t[1].push_back(n+1);
   		t[2].push_back(n+1);
   
   while (t[1].size() < n+1) { 
      cout << "Move #" << ++move << ": Transfer ring " << candidate << " from tower " << char(from+'A') << " to tower " << char(to+'A') << "\n";
      
      t[to].push_back(candidate);
      t[from].pop_back();
      
      	if (t[(to+1)%3].back() < t[(to+2)%3].back())
      	{		    
		     from = (to+1)%3;
      	}
			else
      		{
			  	from = (to+2)%3;
			}        		
      
	  candidate = t[from].back();
         
      if (candidate > t[(from+1)%3].back())
         to = (from+2)%3;
      else
         to = (from+1)%3;
   }
   
   }

int main() {
   int n;
   cout << "Please enter the number of rings to move: ";
   cin >> n;
   cout <<endl;
   if(n%2==0)
   {
		EvenRings(n);
   }
   		else
		{
			OddRings(n);
		}   
   
   return 0;
}
