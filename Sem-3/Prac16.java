import java.util.Scanner;
class Prac16{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size:");
		int n=sc.nextInt();
		int arr[]=new int[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter value of array a["+i+"]");
            arr[i]=sc.nextInt();
        }
        int big=arr[0];
        int small=arr[0];
        for(int i=0;i<n;i++){
           if (arr[i]>arr[0]) {
           	big=arr[i];
           }
           else if(arr[i]<arr[0]){
           	small=arr[i];
           }
        }
        System.out.println("big="+big);
        System.out.println("small="+small);

	}
}