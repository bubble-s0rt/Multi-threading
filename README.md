# Start with multithreadings

This Java code demonstrates a simple multithreading experiment using the `Thread` class. The `experiment` class extends `Thread` and overrides its `run` method to print a message indicating that the thread is running. In the `Multithread` class, ten instances of the `experiment` class are created and started sequentially with a delay of 1000 milliseconds between each start.

## Usage

To run the experiment:

1. Compile the Java files.
2. Run the `Multithread` class.

## Code

```java
class experiment extends Thread {
    public void run() {
        try {
            System.out.println("Thread " + Thread.currentThread().getId() + " is running");
        } catch (Exception e) {
            System.out.println("Exception is caught");
        }
    }
}

public class Multithread {
    public static void main(String[] args) throws InterruptedException {
        for (int i = 0; i < 10; i++) {
            experiment object = new experiment();
            object.start();
            Thread.sleep(1000);
        }
    }
}
