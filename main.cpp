#include <iostream>
#include <vector>

// Taken from codefights.com/interview/... . The name of this problem is ClimbingStairs.
//
// You are climbing a staircase that has n steps. You can take the steps either 1 or 2 at a time.
// Calculate how many distinct ways you can climb to the top of the staircase.
// 
// Example
//
// For n = 1, the output should be
// climbingStairs(n) = 1;
//
// For n = 2, the output should be
// climbingStairs(n) = 2.
//
// You can either climb 2 steps at once or climb 1 step two times.

int climbingStairs(int n) {
    std::vector<int> m(n+1, 0);
    m[0] = 0;
    m[1] = 1;
    if(n >= 2)
        m[2] = 2;
    for(int i = 3; i <= n; ++i)
    {
        m[i] = m[i-1] + m[i-2];
    }

    return m[n];
}

int main()
{
    int n = 4;
    std::cout << climbingStairs(n) << std::endl;

    return 0;
}
