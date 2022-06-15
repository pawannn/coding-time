//WAP to show all running Threads.

import java.io.*;

class threads extends Thread {
	public void run()
	{
		System.out.println("Overridden Run Method");
	}
}

public class Main {

	public static void main(String[] args)
	{
		threads t1 = new threads();
		threads t2 = new threads();
		t1.start(); 
		t2.start();
		ThreadGroup threadGroup = Thread.currentThread().getThreadGroup();
		int threadCount = threadGroup.activeCount();
		Thread threadList[] = new Thread[threadCount];
		threadGroup.enumerate(threadList);
		System.out.println("Active threads are:");
		for (int i = 0; i < threadCount; i++)
			System.out.println(threadList[i].getName());
	}
}
