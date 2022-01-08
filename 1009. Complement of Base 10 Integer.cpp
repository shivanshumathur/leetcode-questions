class Solution {
public:
    int bitwiseComplement(int n) {
        int copy_n = n;
        int mask = 0;
        if(n == 0)
            return 1;
        while(copy_n != 0)
        {
            mask = (mask << 1) | 1;
            copy_n = copy_n >> 1;
        }
        return (~n) & mask;
    }
};