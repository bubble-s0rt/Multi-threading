class experiment extends Thread {
	public void run()
	{
		try {
			System.out.println(
				"Thread " + Thread.currentThread().threadId()+ " is running and");
		}
		catch (Exception e) {
			System.out.println("Exception is caught");
		}
	}
}git add 


public class Multithread {
	public static void main(String[] args) throws InterruptedException
	{
		 
		for (int i = 0; i < 10; i++) 
		{
			experiment object = new experiment();
			object.start();
			Thread.sleep(1000);
		}
	}
}
