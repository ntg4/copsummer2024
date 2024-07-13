#include <stdio.h>

void split_time(int total_sec, int *hr, int *min, int *sec){
    *hr = total_sec/3600;
    
    int leftover = total_sec%3600;

    *min = leftover/60;

    *sec = leftover%60;
}

int main(){
    int ts, h, mn, s;
    printf("put in the seconds: ");
    scanf("%d", &ts);

    split_time(ts, &h, &mn, &s);

    printf("total secs: %d, hours: %d, mins: %d, seconds: %d", ts, h, mn, s);
}