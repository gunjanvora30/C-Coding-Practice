#include <stdio.h>

int count[10] = {0,0,0,0,0,0,0,0,0,0};

void Counter(int x){
    
    switch(x){
        case 0:
            count[0]++;
            break;
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        case 6:
            count[6]++;
            break;
        case 7:
            count[7]++;
            break;
        case 8:
            count[8]++;
            break;
        case 9:
            count[9]++;
            break;
        default:
            break;
    }
    
}

void DivideNumber(int x){
    int y = 0;
    do{
        y = y + (x%10);
        x = x/10;
        //printf("%d\t",y);
    }while((x%10) != 0);
    Counter(y);
}

int main()
{
    int n, y, max = 0, max_count = 0;
    
    scanf("%d",&n);
    
    for(int i=0; i<=n; i++) {
        DivideNumber(i);
    }
    
 
    
    for(int i=0; i<10; i++) {
        if(count[i] > count[max]){
            max = i;
        }
    }
    
    for(int i=0; i<10; i++) {
        if(count[i] == count[max]){
            max_count++;
        }
    }
    
    printf("%d",max_count);
    return 0;
}

