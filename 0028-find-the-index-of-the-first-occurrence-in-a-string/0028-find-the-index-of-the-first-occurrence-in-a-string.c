int strStr(char* haystack, char* needle) {
    int size1=strlen(haystack), size2=strlen(needle), flag=0,i,j;
    for(i=0;i<size1-size2+1;i++)
    {
        if(haystack[i]==needle[0]){
            int firstIndex=i;
            flag=0;
            for(j=0;j<size2;j++){
                if(haystack[firstIndex+j]!=needle[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return firstIndex;
            }
        }
    }
    return -1;
}