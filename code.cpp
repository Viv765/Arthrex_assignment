// Here we have included all the liabrary which are required for using the data structures,stl etc
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Created a Adjacency list to keep track of who is classmates of whom
    map<char, vector<char>> classmates = {
        {'A', {'B', 'C', 'J'}},
        {'D', {'E', 'F', 'G'}},
        {'H', {'I', 'K', 'V'}},
        {'J', {'V'}},
        {'K', {'L', 'M', 'N', 'A'}},
        {'O', {'P', 'V', 'U'}},
        {'Q', {'S', 'T', 'D'}},
        {'U', {'H', 'J'}},
        {'V', {'W', 'X', 'Y', 'Z'}},
    };
    // map for checking who is parent of whom
    map<char, char> par;
    for (auto it : classmates)
    {
        char c = it.first;
        vector<char> v = it.second;
        for (auto ele : v)
        {
            par[ele] = c;
        }
    }
    char selected_candidate;
    cout << "Enter the character representing the person selected for the job: ";
    cin >> selected_candidate;

    set<char> vis;

    vector<char> queue;

    vector<char> contacted;
    if (classmates.find(selected_candidate) != classmates.end())
    {
        queue.push_back(selected_candidate);
        vis.insert(selected_candidate);
    }
    else
    {
        queue.push_back(par[selected_candidate]);
        vis.insert(par[selected_candidate]);
    }

    // Loop until the queue is empty or a person is hired
    while (!queue.empty())
    {
        char person = queue.front();
        queue.erase(queue.begin());

        contacted.push_back(person);
        for (char classmate : classmates[person])
        {
            if (vis.count(classmate) == 0)
            {
                queue.push_back(classmate);
                vis.insert(classmate);
            }
        }
    }
    for (int i = 0; i < contacted.size() - 1; i++)
    {
        cout << contacted[i] << ", ";
    }
    cout << contacted[contacted.size() - 1] << endl;

    return 0;
}
