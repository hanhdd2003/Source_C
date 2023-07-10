package tool;

import java.util.Scanner;

public class MyTool {

    private int i;
    private double j;
    private String c;

    private Scanner sc = new Scanner(System.in);

    public int iInt() {
        while (true) {
            try {
                i = Integer.parseInt(sc.nextLine());
                return i;
            } catch (Exception e) {
                System.out.println("Try input againt !!");
            }

        }
    }

    public double iDouble() {
        while (true) {
            try {
                j = Double.parseDouble(sc.nextLine());
                return j;
            } catch (Exception e) {
                System.out.println("Try input againt !!");
            }

        }
    }

    public String iString() {
        while (true) {
            try {
                c = sc.nextLine();
                return c.toUpperCase();
            } catch (Exception e) {
                System.out.println("Try input againt !!");
            }

        }
    }

}
