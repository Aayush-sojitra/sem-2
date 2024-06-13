import java.util.Scanner;
class Prac17{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size:");
		int n=sc.nextInt();
		int arr[]=new int[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter value of array a["+i+"]");
            arr[i]=sc.nextInt();
        }
        int count=0;
        for(int i=0;i<n;i++){
            for (int j=0;j<n ;j++ ) {
                if(arr[i]==arr[j] && i!=j){
                    count++;
                }
            }
        }
        if (count>1) {
                    System.out.println("Contains Dublicate");

        }
        else{
                System.out.println("not Dublicate");

        }
	}
}