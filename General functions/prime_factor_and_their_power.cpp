void add_divs(int x, map<ll,ll>&divs){
    ll i = 2;
    while(i * i <= x){
        while (x % i == 0){
            divs[i]++;
            x /= i;
        }
        i++;
    }
    if(x > 1) divs[x]++;
}

// adds all prime factors anfd their powers in map divs
