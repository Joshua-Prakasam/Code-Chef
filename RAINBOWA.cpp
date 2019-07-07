/*

*/
#include <iostream>
using namespace std;

int main()
{
    int runningTime;
    cin >> runningTime;
    while(runningTime--)
    {
        int noOfElements, highest, middle;
        int left, right;
        cin >> noOfElements;
        int flag = 1;
        int* arrayElements = new int[noOfElements];
        for(int ind = 0; ind < noOfElements; ind++)
        {
            cin >> arrayElements[ind];
        }
        middle = (noOfElements/2) + ((noOfElements%2) - 1);
        highest = arrayElements[middle];
        
        for(left = middle-1, right = middle+1; left > -1 && right < noOfElements; left--, right++)
        {
            if( left==middle-1 && arrayElements[left] == highest-1 && arrayElements[right] == highest-1 )
            {
                highest = arrayElements[left];
            }
            else if( (arrayElements[left] == highest-1 && arrayElements[right] == highest-1) || (arrayElements[left] == highest && arrayElements[right] == highest) )
            {
                highest = arrayElements[left];
            }
            else
            {
                flag = 0;
                break;
            }
        }
        cout << ( (flag && left == -1 && right == noOfElements) ? "yes":"no");
    }

    return 0;
}
