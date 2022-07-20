//Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :
//1) Only one disk can be moved at a time.
//2) A disk can be moved only if it is on the top of a rod.
//3) No disk can be placed on the top of a smaller disk.
//
//Print the steps required to move n disks from source rod to destination rod.
//Source Rod is named as 'a', auxiliary rod as 'b' and destination rod as 'c'.

#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char from_rod,char to_rod, char aux_rod)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout<< " " << from_rod <<" " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
 
// Driver code
int main()
{
    int n;
	cin>>n; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}
 
