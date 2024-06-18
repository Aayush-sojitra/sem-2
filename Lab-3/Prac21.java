import java.util.Scanner;
class Prac21{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size:");
		int n=sc.nextInt();
		int arr[]=new int[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter value of array a["+i+"]");
            arr[i]=sc.nextInt();
        }

        int arr1[]=new int[n+1];
        System.out.println("Enter index:");
		int ind=sc.nextInt();
        System.out.println("Enter new number:");
		int new_num=sc.nextInt();
       
        for (int i = 0; i <=ind; i++) {
           if(i==ind){
            arr1[i]=new_num;
           }
           else{
            arr1[i]=arr[i];
           }
        }
         for (int i = ind+1; i < n+1; i++) {
            arr1[i]=arr[i-1];
        }
        for(int i=0;i<n+1;i++){
             System.out.println("Array: "+arr1[i]);
        }
       
        
	}
}