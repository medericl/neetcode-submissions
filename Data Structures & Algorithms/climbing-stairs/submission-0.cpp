class Solution {
public:
    int _climbStairs(int n, int nn, unordered_map<int,int> &hash_map) {
        if (nn > n)
            return 0;
        if (nn == n)
            return 1;
        if (hash_map.contains(nn))
            return hash_map[nn];
        else
        {
            int res = _climbStairs(n, nn + 1, hash_map) + _climbStairs(n, nn + 2, hash_map);
            hash_map[nn] = res;
            return res;
        }
    }
    int climbStairs(int n) {
        unordered_map<int,int> hash_map;
        return _climbStairs(n, 0, hash_map);
    }
};
