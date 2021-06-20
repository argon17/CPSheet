// 4 -> 100(after 1 all zeroes); 4-1 -> 11(all ones)
bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    return !(n&(n-1));
}