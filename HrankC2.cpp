int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }


    
static const char *strings[] = {"one","two","three","four","five",
                                "six","seven","eight","nine"};
int main()
{
    int n = 0;
    if (scanf("%d",&n) < 1)
        return 1;
    
    if (n >= 1 && n <= 9)
        printf("%s",strings[n-1]);
    else
     