const int N=1e6;
vector<int> primes(N, 1);
void sieve() {
    primes[1] = 0;
    primes[0] = 0;
    for (int i = 2; i * i < N; i++) {
        if (primes[i]) {
            for (int j = i * i; j < N; j += i) {
                primes[j] = 0;
            }
        }
    }
}
