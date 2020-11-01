#include <stdio.h>

int unique_elem(int * in, int sz){
    int unique[(sz-1)/3 + 1];
    int ans = unique[0];
    int c = 0;
    for (int i = 0; i < sz; ++i){
        int current = in[i];
        
        int flag = 0;
        for (int j = 0; j < (sz-1)/3+1; ++j){
           if (unique[j] == current){
               flag = 1;
               break;
           } 
        }
        
        unique[c] = current;
        ++c;
            
        if (!flag){
            ans = current;
        } 
    }
    return ans;
}

int main()
{
    int in[] = {10, 1, 10, 3, 10, 1, 3, 6, 3, 3};
    
    int ans = unique_elem(in, 10);
    printf("Unique Value: %d \n", ans);
    
    return 0;
}