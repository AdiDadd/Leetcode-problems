char* countAndSay(int n)
{
    if(n == 1)
    {
        return "1";
    }
    char* s = countAndSay(n - 1);
    int size = strlen(s);
    char* ans = (char*) malloc(4463 * sizeof(char));
    int idx = 0;
    char curr = *s;
    int cnt = 1;
    for(int i = 1; i < size; i++)
    {
        char c = *(s + i);
        if(c == curr)
        {
            cnt++;
        }
        else
        {
            *(ans + idx++) = ('0' + cnt);
            *(ans + idx++) = curr;
            curr = c;
            cnt = 1;
        }
    }
    *(ans + idx++) = ('0' + cnt);
    *(ans + idx++) = curr;
    *(ans + idx) = '\0';
    return ans;
}