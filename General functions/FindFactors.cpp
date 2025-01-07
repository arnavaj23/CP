vector<int> findFactors(int n) {
    std::vector<int> factors;
    
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i); or
            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }
    
    return factors;
}
