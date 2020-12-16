/*Given a street of N houses (a row of houses), each house having K amount of money kept inside; now there is a thief who is going to steal this money but he has a constraint/rule that he cannot steal/rob two adjacent houses. Find the maximum money he can rob.
------------------------------------------------------------
Example 1:

Input:
N = 5 , K = 10
Output:
30
Explanation:
The Robber can rob from the first, third
and fifth houses which will result in 30.
--------------------------------------------------------
Example 2:

Input:
N = 2 , K = 12
Output:
12
Explanation:
The Robber can only rob from the first
or second which will result in 12.
---------------------------------------------------------
Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N,K <= 103
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maximizeMoney(int N , int K) {
        int sum=0;
        for(int i=0;i<N;i++){
            if(i%2==0){sum+=K;}
        }
        return sum;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
}  
