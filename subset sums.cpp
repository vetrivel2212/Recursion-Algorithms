#include <bits/stdc++.h>
using namespace std;

void subsetSums(int ind, int sum, vector<int> &arr, int n, vector<int> &ans)
{
    if (ind == n)
    {
        ans.push_back(sum);
        return;
    }

    // Include the current element
    subsetSums(ind + 1, sum + arr[ind], arr, n, ans);

    // Exclude the current element
    subsetSums(ind + 1, sum, arr, n, ans);
}

int main() {
    vector<int> arr = {3, 1, 2};
    vector<int> ans;

    subsetSums(0, 0, arr, arr.size(), ans);

    sort(ans.begin(), ans.end());

    cout << "The sum of each subset is: ";
    for (auto sum : ans) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
