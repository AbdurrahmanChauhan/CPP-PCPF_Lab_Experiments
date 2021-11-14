class Test extends Thread {
    public void run() {
        System.out.println("Child Thread");
    }
}

class Test2 extends Thread {
    public void run() {
        System.out.println("Child2 Thread");
    }
}

class demo_thread {
    public static void main(String[] args) {
        Test t1 = new Test();
        Test2 t2 = new Test2();
        t1.start();
        t2.start();
        // System.out.println("This is main function");
    }
}

