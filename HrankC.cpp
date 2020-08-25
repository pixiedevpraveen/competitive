int n;
    static const char* strRep[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    printf( "%s", n>=1 && n<=9 ? strRep[n-1]: "Greater than 9" );

    int sum = 0;
    for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2) 
        sum += *(marks + i);
    


	    for(i=0;i<=count;i++)
	      for(j=i+1;j<=count;j++){
	         if(strcmp(str[i],str[j])>0){
	            strcpy(temp,str[i]);
	            strcpy(str[i],str[j]);
	            strcpy(str[j],temp);
	         }
	      }

	      int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

#define CHARS   26
int distinct_chars(const char *a)
{
    int dist = 0;
    int chars[26] = {0};

    while (*a != '\0') {
        int chr = (*a++) - 'a';
        if (chr < 26)
            chars[chr]++;
    }
    
    for (int i = 0; i < 26; i++)
        if (chars[i])
            dist++;

    return dist;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int res = distinct_chars(a) - distinct_chars(b);
    return (res) ? res : lexicographic_sort(a, b);
}

int sort_by_length(const char* a, const char* b) {
    int res = strlen(a) - strlen(b);
    return (res) ? res : lexicographic_sort(a, b);
}

void swap(char **s,int x,int y)
{
    char *temp;
    temp = s[x];
    s[x] = s[y];
    s[y] = temp;
}

void reverse(char **s,int x, int y)
{
    
    while(x<y)
    {
     swap(s,x,y);
        x++;
        y--;
    }
}

int next_permutation(int n, char **s)
{
    int i,inv=-1;
    for(i=0;i<n-1;i++)
    {
        if(strcmp(s[i],s[i+1]) < 0)
        {
            inv = i;
        }
    }
    if(inv == -1) return 0;
    for(i=n-1;i>inv;i--)
    {
        if(strcmp(s[inv],s[i]) < 0)
        {
            swap(s,inv,i);
            break;
        }
    }
    reverse(s,inv+1,n-1);
    return 1;
    }



    #define MIN(x, y) ((x) < (y)) ? (x) : (y)
#define MAX(x, y) ((x) > (y)) ? (x) : (y)

int max(int count,...) {

    va_list args;
    va_start(args, count);
    int max = 0, temp = 0;

    for (int i = 0; i < count; i++) {
        temp = va_arg(args, int);
        max = MAX(max, temp);
    }
    va_end(args);

    return max;
}



int sum (int count,...) 
{
        int sum = 0;
        va_list argpointer;
        va_start(argpointer, count);

        for(int i = 0; i < count; i+=1)
        {
                sum += va_arg(argpointer, int);
        }

        return sum;
}

int min(int count,...) 
{
        int temp = 0, min = 0;
        va_list argpointer;
        va_start(argpointer, count);

        for(int i = 0; i < count; i+=1)
        {
                temp = va_arg(argpointer, int);

                if(temp < min)
                {
                        min = temp;
                }
        }

        return min;
}

int max(int count,...) 
{
        int temp = 0, max = 0;
        va_list argpointer;
        va_start(argpointer, count);

        for(int i = 0; i < count; i+=1)
        {
                temp = va_arg(argpointer, int);

                if(temp > max)
                {
                        max = temp;
                }
        }

        return max;
}


int main() {

    char s;
    int arr[] ={0,0,0,0,0,0,0,0,0,0};
    while(scanf("%c", &s) == 1)
        if(s >= '0' && s <= '9')
            arr[s-'0']+=1;
                        
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);  
    return 0;
}


