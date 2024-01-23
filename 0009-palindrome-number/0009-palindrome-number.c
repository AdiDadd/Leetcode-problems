bool isPalindrome(int x) {
    long x1,rev=0,rem;
    x1=x;
    while(x>0){
        rem = x%10;
        rev = rev*10 + rem;
        x = x/10;
    }
    return x1==rev;
}