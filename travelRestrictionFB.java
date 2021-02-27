import java.util.Scanner;
class travel{
    public static void main(String [] args){
        Scanner s = new Scanner(System.in);
        int t=s.nextInt();
        for(int h=1;h<=t;h++){
            int i,j,k=0,l=0;
            int n=s.nextInt();
            String s1=s.next();
            String s2=s.next();
            int count=0;
            char a[][]=new char[n][n];
            for (i=0;i<n;i++){
                count=0;
                for (j=0;j<n;j++){
                    if(i==j){
                        a[i][j]='Y';
                        count=0;
                    }
                    else if((Math.abs(i-j)==1)&&(s1.charAt(j)=='Y')&&(s2.charAt(i)=='Y')){
                        a[i][j]='Y';
                        count=0;
                    }
                    else{
                        if((s1.charAt(j)=='Y')&&(s2.charAt(i)=='Y')){
                            l=0;
                            if(i>j){
                            k=i-1;
                            while(k>j){
                                if((s1.charAt(k)=='N')||(s2.charAt(k)=='N')){
                                    l=1;
                                    break;
                                }
                                k--;
                            }
                            }
                            else{
                                k=i+1;
                                while(k<j){
                                if((s1.charAt(k)=='N')||(s2.charAt(k)=='N')){
                                    l=1;
                                    break;
                                }
                                k++;
                            }
                            }
                            if(l==0){
                                a[i][j]='Y';
                                count=0;
                            }
                            else{
                                a[i][j]='N';
                                count=1;
                            }
                        }
                        else{
                            a[i][j]='N';
                            count=1;
                        }
                    }
                }
            }
            System.out.println("Case #"+h+":");
            for (j=0ji<n;j++){
                for (i=0;i<n;i++){
                System.out.print(a[j][i]);    
                }
                System.out.println();
            }
        }
    }
}