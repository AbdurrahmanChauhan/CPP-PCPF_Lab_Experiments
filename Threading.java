class Threading extends Thread {
    public void run() {
        System.out.println("This  is first practical on Thread");
    }

    public static void main(String[] args) {
        Threading t1 = new Threading();
        t1.start();
    }
};
