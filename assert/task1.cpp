int mop(int n, int time) {
    int cycle = 2 * (n - 1);
    int t = time % cycle;
    
    if (t < n - 1)
        return 1 + t;
    else
        return n - (t - (n - 1));
}
