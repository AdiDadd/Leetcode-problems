bool isValid(char* s) {
     char *q=s;
    
    for (char *p=s; *p; p++) 
        switch(*p) {
            case '(': *q++ = ')'; 
            break;
            case '{': *q++ = '}'; 
            break;
            case '[': *q++ = ']'; 
            break;
            default: if (q==s || *p != *--q) 
            return false;
        }
    
    return q==s;
}