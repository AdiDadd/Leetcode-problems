/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
static const char letters[8][5]={"abc","def","ghi","jkl", "mno","pqrs","tuv","wxyz"};

void recursiveComb(char* string, int carriedIndex, char*digits, char**solution, int depth){
    // if (digits[indexNumber]==NULL) return string;
    if (depth>=strlen(digits)){
        strcpy(solution[carriedIndex],string);
        return;
    }
    int digitIndex = digits[depth] - '2';
    int letterCount = strlen(letters[digitIndex]);

    for (int i = 0; i < letterCount; i++) {
        char stringCopy[5]; 
        strcpy(stringCopy, string);
        strncat(stringCopy, &letters[digitIndex][i], 1);
        recursiveComb(stringCopy, carriedIndex * letterCount + i, digits, solution, depth + 1);
    }
}


char** letterCombinations(char* digits, int* returnSize) {
    
    *returnSize=1;
    if(strlen(digits)==0) *returnSize=0;
    
    for(int i =0;digits[i]!=NULL;i++){
        *returnSize*=strlen(letters[digits[i]-'2']);
    }
    
    char** solution=(char **)malloc(*returnSize * sizeof(char *));
    for (int i=0; i<*returnSize;i++){
        solution[i]=(char*)malloc(5*sizeof(char));
    }
    if (*returnSize>0)recursiveComb("",0,digits, solution, 0);
    return solution;
}