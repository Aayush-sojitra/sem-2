import java.util.Scanner;
public class Prac33{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
       int a=sc.nextInt();
        int b=sc.nextInt();
        
        int arr1[] = swapNum(a,b);
        System.out.println("A="+arr1[0]);
        System.err.println("B="+arr1[1]);

    }
    static int[] swapNum(int a,int b){
        int[] arr= new int[2];
 
        int temp=0;
        temp=a;
        a=b;
        b=temp;
        arr[0]=a;
        arr[1]=b;
        return arr;

    }
}