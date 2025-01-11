ll mod=1e9+7;
vector<long long> computeFactorials(int n) {
    vector<long long> factorials(n + 1, 1);
    for (int i = 2; i <= n; ++i) {
        factorials[i] =( factorials[i - 1] * i)%mod;
    }
    return factorials;
}
