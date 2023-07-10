package login;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.ArrayList;
import javax.swing.*;

public class AccountManagement {

    private static ArrayList<Account> listAccount = new ArrayList<Account>();
    private static Account accLogin;

    public static void a() {
        // lấy thông tin các tài khoản đã đăng ký
        listAccount = readAccountList("ListAccount.txt");

        boolean a = true;
        while (a) {
            String input = JOptionPane.showInputDialog(null, "Enter your choice \n1: Sign Up \n2: Login \n3: Change Password \n4: Forgot Password \n5: Exit");
            if (input == null) {
                a = false;
                break;
            }
            try {
                int choice = Integer.parseInt(input);
                switch (choice) {
                    case 1:
                        signUp();
                        break;
                    case 2:
                        boolean loggedIn = login();
                        if (loggedIn) {
                            System.out.println("Hoàn thành đăng nhập!");
                            a = false;
                        } else {
                            System.out.println("Login false!");
                        }
                        break;
                    case 3:
                        changePassword();
                        break;
                    case 4:
                        forgotPassword();
                        break;
                    case 5:
                        JOptionPane.showMessageDialog(null, "Exiting the program...");
                        a = false;
                        break;
                    default:
                        JOptionPane.showMessageDialog(null, "Invalid choice!");
                        break;
                }
            } catch (NumberFormatException e) {
                JOptionPane.showMessageDialog(null, "Not a number choice");
            }
        }
    }

    public static void signUp() {
        JTextField usernameField = new JTextField();
        JPasswordField passwordField = new JPasswordField();
        JPasswordField rePasswordField = new JPasswordField();
        JTextField codeUserField = new JTextField();

        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.add(new JLabel("Username:"));
        panel.add(usernameField);
        panel.add(new JLabel("Password:"));
        panel.add(passwordField);
        panel.add(new JLabel("Re-Password:"));
        panel.add(rePasswordField);
        panel.add(new JLabel("User code: "));
        panel.add(codeUserField);

        int result = JOptionPane.showConfirmDialog(null, panel, "Sign Up", JOptionPane.OK_CANCEL_OPTION);
        if (result == JOptionPane.OK_OPTION) {
            String username = usernameField.getText();
            boolean userExists = false;
            for (Account account : listAccount) {
                if (username.equals(account.getUserName())) {
                    userExists = true;
                    System.out.println("User already exists");
                    break;
                }
            }
            if (!userExists) {
                String password = new String(passwordField.getPassword());
                String rePassword = new String(rePasswordField.getPassword());
                String codeUser = codeUserField.getText();
                if (password.equals(rePassword)) {
                    if (codeUser.equals("01") || codeUser.equals("02") || codeUser.equals("03")) {
                        Account acc = new Account(username, password, codeUser);
                        listAccount.add(acc);
                        saveAccountList(listAccount);
                        JOptionPane.showMessageDialog(null, "Create account successful!");
                    } else {
                        System.out.println("Code User Invalid ");
                        JOptionPane.showMessageDialog(null, "Can't create account!");

                    }
                } else {
                    System.out.println("Incorrect password");
                    JOptionPane.showMessageDialog(null, "Can't create account!");
                }
            }
        }
    }

    public static ArrayList<Account> getListAccount() {
        return listAccount;
    }

    public static boolean login() {
        JTextField usernameField = new JTextField();
        JPasswordField passwordField = new JPasswordField();

        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.add(new JLabel("Username:"));
        panel.add(usernameField);
        panel.add(new JLabel("Password:"));
        panel.add(passwordField);

        int result = JOptionPane.showConfirmDialog(null, panel, "Login", JOptionPane.OK_CANCEL_OPTION);
        if (result == JOptionPane.OK_OPTION) {
            String username = usernameField.getText();
            String password = new String(passwordField.getPassword());

            boolean isFound = false;
            for (Account account : listAccount) {
                if (account.getUserName().equals(username) && account.getPassWord().equals(password)) {
                    String code = account.getCodeUser();
                    accLogin = new Account(username, password, code);
                    isFound = true;
                    break;
                }
            }
            if (isFound) {
                JOptionPane.showMessageDialog(null, "Login successful!");
                return true;
            } else {
                JOptionPane.showMessageDialog(null, "Invalid username or password!");
                return false;
            }
        } else {
            return false; // người dùng ấn cancle
        }
    }

    public static Account getAccountLogin() {
        return accLogin;
    }

    public static void saveAccountList(ArrayList<Account> listAccount) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("ListAccount.txt"))) {
            for (Account account : listAccount) {
                writer.write(account.getUserName());
                writer.write(",");
                writer.write(account.getPassWord());
                writer.write(",");
                writer.write(account.getCodeUser());
                writer.newLine();
            }
            writer.close();
            System.out.println("Save successful!");
        } catch (Exception e) {
            System.out.println("Can't save to file");
        }
    }

    public static ArrayList<Account> readAccountList(String fileName) {
        ArrayList<Account> listAccount = new ArrayList<>();

        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = reader.readLine()) != null) {
                String[] parts = line.split(",");
                String username = parts[0];
                String password = parts[1];
                String codeUser = parts[2];
                Account ac = new Account(username, password, codeUser);
                listAccount.add(ac);

            }
            System.out.println("Read file complete!");
            reader.close();
        } catch (Exception e) {
            //e.printStackTrace();
            System.out.println("Can't read file!");
        }
        return listAccount;
    }

    public static void changePassword() {
        JTextField usernameField = new JTextField();
        JPasswordField passwordField = new JPasswordField();
        JPasswordField newPasswordField = new JPasswordField();
        JPasswordField reNewPasswordField = new JPasswordField();

        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.add(new JLabel("Username:"));
        panel.add(usernameField);
        panel.add(new JLabel("Current Password:"));
        panel.add(passwordField);
        panel.add(new JLabel("New Password:"));
        panel.add(newPasswordField);
        panel.add(new JLabel("Re-New Password:"));
        panel.add(reNewPasswordField);

        int result = JOptionPane.showConfirmDialog(null, panel, "Change Password", JOptionPane.OK_CANCEL_OPTION);
        if (result == JOptionPane.OK_OPTION) {
            String username = usernameField.getText();
            String currentPassword = new String(passwordField.getPassword());
            String newPassword = new String(newPasswordField.getPassword());
            String reNewPassword = new String(reNewPasswordField.getPassword());

            boolean isFound = false;
            for (Account account : listAccount) {
                if (account.getUserName().equals(username) && account.getPassWord().equals(currentPassword) && newPassword.equals(reNewPassword)) {
                    isFound = true;
                    if (newPassword.equals(reNewPassword)) {
                        account.setPassWord(newPassword); // Cập nhật mật khẩu mới
                        saveAccountList(listAccount); // Lưu danh sách tài khoản
                        JOptionPane.showMessageDialog(null, "Password changed successfully!");
                        break;
                    }
                }
            }
            if (!isFound) {
                JOptionPane.showMessageDialog(null, "Invalid username or current password!");
            }
        }
    }

    public static void forgotPassword() {
        JTextField usernameField = new JTextField();
        JTextField codeUserField = new JTextField();

        JPanel panel = new JPanel();
        panel.add(new JLabel("Relax anh try to remember your password!!"));
        panel.add(new JLabel("\n"));
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.add(new JLabel("Username:"));
        panel.add(usernameField);
        panel.add(new JLabel("User code: "));
        panel.add(codeUserField);

        int result = JOptionPane.showConfirmDialog(null, panel, "Forgot Password", JOptionPane.OK_CANCEL_OPTION);
        if (result == JOptionPane.OK_OPTION) {
            String username = usernameField.getText();
            String codeUser = codeUserField.getText();

            boolean isFound = false;
            for (Account account : listAccount) {
                if (account.getUserName().equals(username) && account.getCodeUser().equals(codeUser)) {
                    isFound = true;
                    JOptionPane.showMessageDialog(null, "Your password: " + account.getPassWord());
                    break;
                }
            }
            if (!isFound) {
                JOptionPane.showMessageDialog(null, "Invalid username or user code!");
            }
        }

    }
}
