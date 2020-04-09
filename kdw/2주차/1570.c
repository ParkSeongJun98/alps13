int lower_bound(int k){
    int result = n+1;
    for(int i = 1; i<=n; i++){
        if(k <=d[i]){
            result = i;
            break;
        }
    }
    return result;
}
