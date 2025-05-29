#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        queue<pair<TreeNode *, pair<int, int>>> q;
        map < int, map<int, multiset<int>>> mp;
        q.push({root, {{0}, {0}}});
        while (!q.empty())
        {
            pair<TreeNode *, pair<int, int>> temp = q.front();

            mp[temp.second.first][temp.second.second].insert(temp.first->val);
            if (temp.first->left != nullptr)
            {
                q.push({temp.first->left, {{temp.second.first - 1}, {temp.second.second + 1}}});
            }
            if (temp.first->right != nullptr)
            {
                q.push({temp.first->right, {{temp.second.first + 1}, {temp.second.second + 1}}});
            }
            q.pop();
        }

        vector<vector<int>> ans;
        for (auto i : mp)
        {
            vector<int>cp;
            for(auto j : i.second)
            {
                for(auto l : j.second)
                {
                    cp.push_back(l);
                }
            }
            ans.push_back(cp);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(7);
    root->right->left = new TreeNode(5);
    root->left->right = new TreeNode(6);

    vector<vector<int>> ans = s.verticalTraversal(root);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}