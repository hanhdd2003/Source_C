package dogmanagementse1819;

import data.Sevice.Service;
import login.Account;
import login.AccountManagement;
import menu.Menu;
import tool.MyTool;

public class DogManagementSe1819 {

    private static MyTool tool = new MyTool();

    public static void main(String[] args) {

//        Service sv = new Service();
//        sv.loadData();
////        sv.displayDogSale();
//        sv.displayReply();
//------------------------------xử lý phần đăng nhập--------------------------------
        boolean a = true;
        String choice;
        while (a) {
            AccountManagement.a();
            Account accLogin = AccountManagement.getAccountLogin();
            Menu mn = new Menu();
            if (accLogin != null) {
                switch (accLogin.getCodeUser()) {
                    case "01":
                        mn.menuManager();
                        break;
                    case "02":
                        mn.menuEmployee();
                        break;
                    case "03":
                        mn.menuCustomer();
                        break;
                    default:
                        break;
                }
            }
            System.out.println("Do you want to continue ? (y/n)");
            choice = tool.iString();
            if (choice.equalsIgnoreCase("n")) {
                a = false;
            }
        }
    }

}
