import java.util.Scanner;
class power{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int num=sc.nextInt();
		System.out.println("Enter power:");
		int p=sc.nextInt();
		int ans=1;
		for (int i=1;i<=p ;i++ ) {
			ans=num*ans;
		}
		System.out.println("Answer:"+ans);
	}
}