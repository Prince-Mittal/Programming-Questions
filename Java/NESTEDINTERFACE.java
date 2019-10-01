interface BB
{
	void display();

	interface BB1
	{
		void getdata();
	}
}

class A implements BB.BB1,BB 
{

	public void getdata()
	{
		System.out.println("Getdata BB1");
	}
	public void display()
	{
		System.out.println("BB");
	}
} 
public class NESTEDINTERFACE
{
	 public static void main(String[] args) 
	{
		
	BB b2=new A();
	BB.BB1 b1=new A();
	b2.display();
	b1.getdata();
}
}