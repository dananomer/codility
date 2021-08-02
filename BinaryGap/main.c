int solution(int N) {
    unsigned int reminder = N;
    int count = 0;
    int maxcount = 0;
    int seenOne = 0;
    while(reminder > 0)
    {
        if(!(reminder & 1))
            if(seenOne == 1)
                count++;
        else
        {
            seenOne = 1;
            if(count > maxcount)
                maxcount = count;
            count = 0;
        }
        reminder = reminder / 2;
    }
    return maxcount;
}

int main() {

    int s = solution(1041);
    printf("s is : %d\n",s);
    return 0;
}
