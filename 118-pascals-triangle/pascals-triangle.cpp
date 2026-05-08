class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> anss;

        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);

            for (int j = 1; j < i; j++) {
                row[j] = anss[i - 1][j - 1] + anss[i - 1][j];
            }

            anss.push_back(row);
        }

        return anss;
    }
};
//sucessfully completed!!