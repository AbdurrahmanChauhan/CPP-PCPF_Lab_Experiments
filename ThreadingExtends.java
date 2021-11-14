class ThreadingExtends extends Thread {
    public void run() {
        System.out.println("This  is first practical on Thread");
    }

    public static void main(String[] args) {
        ThreadingExtends t1 = new ThreadingExtends();
        t1.start();
        System.out.println("This is main function");
    }
}
