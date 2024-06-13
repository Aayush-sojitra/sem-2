import java.util.Scanner;
class Prac18{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size:");
		int n=sc.nextInt();
		int arr[]=new int[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter value of array a["+i+"]");
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter number you want to change:");
        int change=sc.nextInt();
        System.out.println("Enter new number:");
        int newnum =sc.nextInt();
        boolean flag;
        for(int i=0;i<n;i++){
            if (arr[i]==change) {
                arr[i]=newnum;
                flag= true;
            }
            if(flag=false){
            System.out.println("number not found");

            }
	}
     for(int i=0;i<n;i++){
            System.out.println(arr[i]);
        }
}
}