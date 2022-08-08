/**
 *  @file     /main.cpp
 *  @brief    This .cpp source code could generate keys to Question 9-11, aiming at finding the MAXIMUM value in a linear array
 *  Details.  Github:
 *  			>https://github.com/ChenGuoE/maximum-value-in-linear-array
 *  @author   Chen Guoyi (A0262311W)
 *  @email    Guoyi@comp.nus.edu.sg
 *  @version  1.0.1
 *  @date     9 Aug 2022, 0100 UTC-8
 *  @license  GNU General Public License (GPL)
 */

// head
#include <iostream>
using namespace std;

// main function
int main() 
{

	// Declare vars: k,m,i
    int k,m,i;  
    
    // Declare vars (for debug use only):
    // int NumIncrement_i=0, NumUpdate_m=0;
    
	// Input k
	cin >> k;
	
	// Declare and define dynamic array l[]
    int *l=new int[k];
    
	// Input values to Dynamic Array l[]   
    for(int f=0; f<k; f++)
    {
        cin >> l[f];
    }
    
	// set m to l[0]
    m = l[0];

	// set i to 1
    i = 1;
    
    // loop with condition: i <= k
    for(; i <= k; i++)
    {
    	if (i == k)
    	{
    		// when i == k, which means the program is finished
    		cout <<"Summary:"<<endl;
    		cout <<"The max value in array is "<< m << "." <<endl;
    		// cout << NumUpdate_m << " times value update of m." <<endl;
		// cout << NumIncrement_i << " times increment of i." <<endl;
    		// program finishes here.
    		return 0; 
		} 
		else
		{
			// when i != k, then:
			if (l[i] > m)
			{
				// when l[i] > m, then set m to l[i]
				m = l[i];
				
				// times of value update of m + 1
				NumUpdate_m = NumUpdate_m + 1; 
			}
			// when l[i] <= m, do nothing, go to loop again.
		}
		// times of increment of i + 1
		// NumIncrement_i = NumIncrement_i + 1;
	}

}


