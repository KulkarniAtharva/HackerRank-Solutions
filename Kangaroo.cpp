import java.util.*;
public class k
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int x1 = sc.nextInt();
        int v1 = sc.nextInt();
        int x2 = sc.nextInt();
        int v2 = sc.nextInt();

        if(v1<=v2)
            System.out.println("NO");
        else
        {
            boolean kanmeet = (x2-x1)%(v2-v1)==0;
            System.out.println(kanmeet?"YES":"NO");
        }
    }
}
