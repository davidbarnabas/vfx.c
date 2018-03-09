#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main ()
{
    vector<int> A = { 1,5, 3, 4, 2, 9, 7 };

    int K = 2;

    sort(A.begin(), A.end());
    

    int count = 0;
    auto i = A.begin();
    
    auto j = next(i, 1);
    

    while(j != A.end())
    {
        int n = *i + K;

        auto r = equal_range (j, A.end(), n);

        j = r.first;

        while (r.first != r.second) {
            cout << "(" << *i << ", " << *r.first << ")" << endl;
            count++;
            r.first++;
        }

        ++i;
    }
    cout << "total pairs = " << count << endl;
    return 0;
}
