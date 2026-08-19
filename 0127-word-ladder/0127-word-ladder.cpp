class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        int n = wordList.size();
        int end = -1;
        for (int i = 0; i < n; i++) {
            if (wordList[i] == endWord)
                end = i;
        }

        if (end == -1)
            return 0;

        vector<string> words;
        words.push_back(beginWord);

        for (string word : wordList) {
            if (word != beginWord)
                words.push_back(word);
        }

        int N = words.size();
        vector<vector<int>> adj(N, vector<int>(N, 0));

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {

                int diff = 0;

                for (int k = 0; k < words[i].size(); k++) {
                    if (words[i][k] != words[j][k])
                        diff++;
                }

                if (diff == 1) {
                    adj[i][j] = 1;
                    adj[j][i] = 1;
                }
            }
        }

        end = -1;
        for (int i = 0; i < N; i++) {
            if (words[i] == endWord) {
                end = i;
                break;
            }
        }
        queue<int> q;
        vector<int> dist(N, 0);

        q.push(0);
        dist[0] = 1;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            if (node == end)
                return dist[node];

            for (int i = 0; i < N; i++) {

                if (adj[node][i] == 1 && dist[i] == 0) {
                    dist[i] = dist[node] + 1;
                    q.push(i);
                }
            }
        }

        return 0;
    }
};