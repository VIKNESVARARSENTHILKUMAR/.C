import java.io.*;
import java.util.*;
class partition{
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int N=sc.nextInt();
	int a=sc.nextInt();
	int b=sc.nextInt();
	int n1=N/2;
	int u=0,sum=0,i,t=0,sum1=0;
	int c[]=new int[100];
	int d[]=new int[100];
	int v=0;
    while(sum<n1)
    {
        sum=0;
        
        c[u]=a;
       
        u++;
        
        for(i=0;i<u;i++)
        {
            sum+=c[i];
          
            
        }
        
        if((sum+sum)==N)
        {
           
            System.out.print("YES");
            v++;
            break;
        }
        
        if(sum!=n1)
        {
        c[u]=b;
        
        u++;
        sum=0;
        }
        for(i=0;i<u;i++)
        {
            sum+=c[i];
            
            
        }
          if((sum+sum)==N)
        {
            System.out.print("YES");
            v++;
            break;
        }
       if(sum+a==n1)
       {
           sum+=a;
         
         
       
         if((sum+sum)==N)
         
        {
            System.out.print("YES");
            
            v++;
            break;
        }
       }
       else if(sum+b==n1)
       
       
       {
            sum+=b;
           
       
         if((sum+sum)==N)
        {
            System.out.print("YES");
            v++;
            break;
        }
       }
      
        
       
    }
    if(v==0)
    {
         System.out.print("NO");
    }
     
}
}
