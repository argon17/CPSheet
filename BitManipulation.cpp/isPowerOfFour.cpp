bool isPowerOfFour(int n) {
    // 0xAAAAAAAA is 10101010‭10101010101010101010101010101010‬ in binary.
    return n>0 && (n&(n-1))==0 && (n&0xAAAAAAAA)==0;
}