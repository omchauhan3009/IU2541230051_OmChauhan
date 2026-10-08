#include <iostream>
using namespace std;

int main()
{
    int votes[5] = {0};
    int n, vote, invalid = 0;

    cout << "Enter total number of voters: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter vote of voter " << i << ": ";
        cin >> vote;

        if (vote >= 1 && vote <= 5)
        {
            votes[vote - 1]++;
        }
        else
        {
            invalid++;
        }
    }

    cout << "\n--- Election Results ---\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Candidate " << i + 1
             << " received " << votes[i] << " votes"
             << endl;
    }

    cout << "Total invalid (spoilt) votes: "
         << invalid << endl;

    return 0;
}
