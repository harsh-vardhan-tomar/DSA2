import java.util.Scanner;
class ReverseString{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        while(true){
            System.out.print("Enter String: ");
            String str=sc.nextLine();
            if(str.isEmpty()){
                System.out.print("String cannot be Empty");
            }
            else{
                String rev="";
                for(int i=str.length()-1;i>=0;i--){
                    rev=rev+str.charAt(i);
                }
                System.out.println("Reversed String: "+rev);
            }
            System.out.print("Want to input another string ? : (y/n)");
            String choice=sc.nextLine();

            if(choice.equals("n") || choice.equals("no")){
                break;
            }
        }
        sc.close();
        System.out.println("Program Ended");
    }
}