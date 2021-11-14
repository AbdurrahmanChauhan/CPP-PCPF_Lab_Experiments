/*// //Multithreading by Extended Thread method by extending another class*/
// class TestThread extends Thread {//Thread class extended
//     public void run() {//run function defined
//         for (int i = 0; i < 35; i++) {
//             System.out.println("For " + i + " case " + " printing in thread");//in thread
//         }
//     }
// }

// public class TestOfThread {//Main Class
//     public static void main(String[] args) {//main function
//         TestThread Tt = new TestThread();//creating object of thread class
//         Tt.start();//calling thread class or starting thread class
//         for (int i = 0; i < 35; i++) {
//             System.out.println("For " + i + " case " + " printing in main");//printing in main
//         }
//     }
// }

/*/ //Multithreading by Extended Thread method by extending main class only*/
// public class TestOfThread extends Thread {// Main Class extended
//     public void run() {// run function defined
//         for (int i = 0; i < 35; i++) {
//             System.out.println("For " + i + " case " + " printing in thread");// in thread
//         }
//     }

//     public static void main(String[] args) {// main function
//         TestOfThread Tot = new TestOfThread();// creating object of thread class i.e. main class
//         Tot.start();// calling thread class or starting thread class
//         for (int i = 0; i < 35; i++) {
//             System.out.println("For " + i + " case " + " printing in main");// printing in main
//         }
//     }
// }

/*// //Multithreading by implementing Runnable Thread method by implementing it to another class*/
// class TestThread implements Runnable {// Thread class extended
//     public void run() {// run function defined
//         for (int i = 0; i < 35; i++) {
//             System.out.println("For " + i + " case " + " printing in thread");// in thread
//         }
//     }
// }

// public class TestOfThread {// Main Class
//     public static void main(String[] args) {// main function
//         TestThread Tt = new TestThread();// creating object of thread class
//         Thread T = new Thread(Tt);// extending thread class
//         T.start();// calling thread class or starting thread class
//         for (int i = 0; i < 35; i++) {
//             System.out.println("For " + i + " case " + " printing in main");// printing in main
//         }
//     }
// }

/*// //Multithreading by implementing Runnable Thread method by implementing it in main class only*/
// public class TestOfThread implements Runnable {// Main Class
//     public void run() {// run function defined
//         for (int i = 0; i < 35; i++) {
//             System.out.println("For " + i + " case " + " printing in thread");// in thread
//         }
//     }

//     public static void main(String[] args) {// main function
//         TestOfThread Tt = new TestOfThread();// creating object of thread class i.e. main class
//         Thread T = new Thread(Tt);// extending thread class
//         T.start();// calling thread class or starting thread class
//         for (int i = 0; i < 35; i++) {
//             System.out.println("For " + i + " case " + " printing in main");// printing in main
//         }
//     }
// }

/*// //Multithreading by implementing Runnable Thread method by implementing it to 2 another class*/
class TestThread implements Runnable {// Thread class extended
    public void run() {// run function defined
        for (int i = 0; i < 350; i++) {
            System.out.println("For " + i + " case " + " printing in thread 1");// in thread
        }
    }
}

class TestThread2 implements Runnable {// Thread class extended
    public void run() {// run function defined
        for (int i = 0; i < 350; i++) {
            System.out.println("For " + i + " case " + " printing in thread 2");// in thread
        }
    }
}

public class TestOfThread {// Main Class
    public static void main(String[] args) {// main function
        TestThread Tt = new TestThread();// creating object of thread class
        Thread T = new Thread(Tt);// extending thread class
        T.start();// calling thread class or starting thread class
        TestThread2 Tt2 = new TestThread2();// creating object of thread class
        Thread T2 = new Thread(Tt2);// extending thread class
        T2.start();// calling thread class or starting thread class
        for (int i = 0; i < 350; i++) {
            System.out.println("For " + i + " case " + " printing in main");// printing in main
        }
    }
}
