1]
import java.util.*;
class Sid{
    public static void main(String [] args){
        Scanner s = new Scanner(System.in);
        int n,i;
        long x,g=0,p=0;
        n=s.nextInt();
        x=s.nextLong();
        long a[]=new long[n];
        for (i=0;i<n;i++){
            a[i]=s.nextLong();
        }
        for (i=0;i<n-1;i++){
            if(a[i]+a[i+1]>x){
                p=a[i]+a[i+1]-x;
                g+=p;
                a[i+1]-=p;
            }   
        }
        System.out.println(g);
    }
}
import java.util.HashMap;
import java.util.Scanner;
class Lottery{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int x=s.nextInt();
        int i;
        String []n=new String[x];
        for (i=0;i<x;i++){
            n[i]=s.next();
        }
        HashMap<String,Integer> hm=new HashMap<String,Integer>();
        for(i=0;i<n.length;i++){
            hm.put(n[i],i);
        }
        System.out.println(hm.size());
    }
}