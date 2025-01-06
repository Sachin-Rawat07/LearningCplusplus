#include<iostream>
#include<vector>
using namespace std;

int findMax(int k, int n, int m) {
        // code here
      if (k >= n) return n;

    // Step 2: Calculate the number of students left after assigning one per bench
    int remainingStudents = n - k;

    // Step 3: Calculate the number of shared benches required
    int sharedBenches = (remainingStudents + m - 1) / m; // Ceiling of remainingStudents / m

    // Step 4: Calculate how many benches remain for students to sit alone
    int aloneBenches = k - sharedBenches;

    // Step 5: Return the number of students who can still sit alone
    return max(0, aloneBenches);
            }
            
    
    
int main(){
    int k=10,n=2,m=1;
    cout<<findMax(k,n,m);
return 0;
}