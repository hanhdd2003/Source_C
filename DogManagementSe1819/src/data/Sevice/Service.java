package data.Sevice;

import data.dog.*;
import data.history.History;
import data.person.Customer;
import data.person.Employee;
import data.person.Feedback;
import java.io.*;
import java.util.ArrayList;
import tool.MyTool;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Service {

    private MyTool tool = new MyTool();
    private ArrayList<DogForSale> dogSale = new ArrayList<>();
    private ArrayList<DogForSend> dogSend = new ArrayList<>();
    private ArrayList<Customer> cus = new ArrayList<>();
    private ArrayList<Employee> emp = new ArrayList<>();
    private ArrayList<History> his = new ArrayList<>();
    private ArrayList<Feedback> feedback = new ArrayList<>();

    public Service() {
    }

//--------------------------------------------load dữ liệu------------------------------
    public void loadData() {
        try {
            this.readDogSale();
            this.readDogSend();
            this.readCustomer();
            this.readEmployee();
            this.readHistory();
            this.readFeedback();
        } catch (Exception e) {
            System.err.println("co loi roi hi hi");
        }
    }

//-------------------------------------Sale dog--------------------------------
    public void saleDog() {
        try {
            boolean a = true;
            while (a) {
                this.displayCus();
                System.out.print("Input customer Id: ");
                String idCus = tool.iString();

                //kiem tra id hop le
                if (searchCus(idCus, cus) == null) {
                    System.err.println("Customer ID not exit !!");
                    System.out.println("Add new customer: ");
                    Customer cusTemp = this.inputCustomer();
                    cus.add(cusTemp);
                }

                this.displayDogSale();

                System.out.print("Input ID dog you want to buy: ");
                String idDog = tool.iString();

                //kiem tra id hop le
                if (searchDogSale(idDog, dogSale) == null) {
                    System.err.println("Dog ID not exit !!");
                } else {
                    this.displayEmp();
                    System.out.print("Input employee Id: ");
                    String idEmp = tool.iString();

                    if (this.seachEmp(idEmp, emp) == null) {
                        System.err.println("Employee ID not exit !!");
                    } else {
                        System.out.println("You have to pay: " + searchDogSale(idDog, dogSale).getPrice());

                        //update data
                        LocalDateTime now = LocalDateTime.now();
                        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy");
                        String formattedDateTime = now.format(formatter);
                        History his1 = new History(1, idCus, idDog, idEmp, searchDogSale(idDog, dogSale).getPrice(), formattedDateTime);
                        his.add(his1);
                        //tang bonus cho nhan vien
                        if (this.seachEmp(idEmp, emp) != null && this.searchDogSale(idDog, dogSale) != null) {
                            double bonus = searchDogSale(idDog, dogSale).getPrice() * 0.1;
                            this.seachEmp(idEmp, emp).setBonus(bonus);
                            //System.out.println("Bonus: "+this.seachEmp(idEmp, emp).getBonus());
                        }
                        dogSale.remove(searchDogSale(idDog, dogSale));

                        //luu lai du lieu
                        this.saveDogSale(dogSale);
                        this.saveCustomer(cus);
                        this.saveHistory(his);
                        this.saveEmployee(emp);

                        System.out.println("Buy successfuly !!");
                        a = false;
                    }
                }
            }
        } catch (Exception e) {
            System.err.println("co loi o phan SaleDog()");
        }

    }

    //-------------------------------------Send dog---------------------------------
    public void sendDog() {
        try {
            boolean a = true;
            while (a) {
                this.displayCus();
                System.out.print("Input customer Id: ");
                String idCus = tool.iString();
                //kiem tra id hop le
                if (this.searchCus(idCus, cus) == null) {
                    System.err.println("Customer ID not exit !!");
                    Customer cusTemp = this.inputCustomer();
                    cus.add(cusTemp);
                }
                // nhap cho
                System.out.print("Input ID Dog Send: ");
                String idSend = tool.iString();
                if (!this.checkIdDogSend(dogSend, idSend)) {
                    System.out.print("Input name dog: ");
                    String name = tool.iString();

                    System.out.print("Time send: ");
                    String timeSend = tool.iString();

                    System.out.print("Time pick up: ");
                    String timePickUp = tool.iString();

                    System.out.print("Input age: ");
                    int age = tool.iInt();

                    System.out.print("Input gender: ");
                    String gender = tool.iString();

                    System.out.print("Input dog breed: ");
                    String dogBreed = tool.iString();

                    System.out.print("Input color: ");
                    String color = tool.iString();

                    System.out.print("Input heath status: ");
                    String healthyStatus = tool.iString();

                    System.out.print("Input vaccine status: ");
                    String vaccineStatus = tool.iString();

                    System.out.print("Input Price: ");
                    double price = tool.iDouble();

                    DogForSend sendTemp = new DogForSend(idCus, timeSend, timePickUp, name, idSend, age, gender, dogBreed, color, healthyStatus, vaccineStatus, price);
                    dogSend.add(sendTemp);
                    this.displayEmp();
                    System.out.println("Input ID Employee: ");
                    String idEmp = tool.iString();
                    if (this.checkIdEmp(emp, idEmp)) {
                        LocalDateTime now = LocalDateTime.now();
                        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy");
                        String formattedDateTime = now.format(formatter);
                        History hisTemp = new History(2, idCus, idSend, idEmp, price, formattedDateTime);
                        his.add(hisTemp);
                        System.out.println("Send successfully !");
                        a = false;
                    } else {
                        System.err.println("Employee not exist !");
                    }
                } else {
                    System.err.println("Dog Send already exist !");
                }
            }
            this.saveCustomer(cus);
            this.saveDogSend(dogSend);
            this.saveHistory(his);
        } catch (Exception e) {
            System.err.println("co loi phan SendDog()");
        }

    }
    //-------------------------------------pick up dog ----------------------------

    public void pickUpDog() {
        try {
            boolean a = true;
            while (a) {
                this.displayDogSend();
                System.out.print("Input customer Id: ");
                String idCus = tool.iString();
                //kiem tra id hop le
                if (this.searchCus(idCus, cus) == null) {
                    System.err.print("Customer ID not exit !!");
                } else {
                    System.out.print("Input ID dog send: ");
                    String idSend = tool.iString();
                    if (this.checkIdDogSend(dogSend, idSend)) {
                        System.out.printf("%-6s %10s %10s %12s %10s %16s %17s %10s\n",
                                "DOG ID", "ORIGIN", "GENDER", "DOG BREED",
                                "COLOR", "HEALTH STATUS", "VACCINE STATUS", "PRICE");
                        this.searchDogSend(idSend, dogSend).display();
                        System.out.println("You have to pay: " + this.searchDogSend(idSend, dogSend).getPrice());
                        LocalDateTime now = LocalDateTime.now();
                        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy");
                        String formattedDateTime = now.format(formatter);

                        History temp = new History(3, idCus, idSend, this.seachHis(idCus).getIdEmp(), this.searchDogSend(idSend, dogSend).getPrice(), formattedDateTime);
                        his.add(temp);
                        dogSend.remove(this.searchDogSend(idSend, dogSend));

                        a = false;
                    }
                }
            }
            this.saveDogSend(dogSend);
            this.saveHistory(his);
        } catch (Exception e) {
            e.printStackTrace();
            System.err.println("co loi phan pickUpDog()");
        }
    }
    //-------------------------------------thêm các đối tượng-----------------------------------

    public void inputDogSale() {
        try {
            boolean a = true;
            while (a) {
                System.out.print("Input ID Dog Sale: ");
                String id = tool.iString();
                if (!this.checkIdDogSale(dogSale, id)) {
                    System.out.print("Input age: ");
                    int age = tool.iInt();

                    System.out.print("Input gender: ");
                    String gender = tool.iString();

                    System.out.print("Input dog breed: ");
                    String dogBreed = tool.iString();

                    System.out.print("Input color: ");
                    String color = tool.iString();

                    System.out.print("Input heath status: ");
                    String healthyStatus = tool.iString();

                    System.out.print("Input vaccine status: ");
                    String vaccineStatus = tool.iString();

                    System.out.print("Input Price: ");
                    double price = tool.iDouble();

                    System.out.print("Input origin: ");
                    String origin = tool.iString();

                    // tạo 1 con chó để bán tạm 
                    DogForSale temp = new DogForSale(origin, id, age, gender, dogBreed, color, healthyStatus, vaccineStatus, price);

                    //lưu con chó đã nhập vào list tạm đã chứa các con chó khác
                    dogSale.add(temp);
                    System.out.println("Add successfuly !!");

                    //lưu danh sách mới xuống file
                    this.saveDogSale(dogSale);
                    a = false;
                }
            }
        } catch (Exception e) {
            System.err.println("co loi phan inputDogSale()");
        }
    }

    public void inputEmployee() {
        try {
            boolean a = true;
            while (a) {
                System.out.print("Input employee ID: ");
                String employeeID = tool.iString();
                if (!this.checkIdEmp(emp, employeeID)) {
                    System.out.print("Input name: ");
                    String name = tool.iString();

                    System.out.print("Input age: ");
                    int age = tool.iInt();

                    System.out.print("Input phone number: ");
                    String phoneNumber = tool.iString();

                    System.out.print("Input address: ");
                    String address = tool.iString();

                    emp.add(new Employee(employeeID, name, age, phoneNumber, address));
                    System.out.println("Add employee successfuly!!");
                    this.saveEmployee(emp);
                    a = false;
                }
            }
        } catch (Exception e) {
            System.err.println("co loi phan inputEmp()");
        }
    }

    public Customer inputCustomer() {
        try {
            boolean a = true;
            while (a) {
                System.out.print("Input customer ID: ");
                String customerID = tool.iString();
                if (!this.checkIdCus(cus, customerID)) {
                    System.out.print("Input name: ");
                    String name = tool.iString();

                    System.out.print("Input age: ");
                    int age = tool.iInt();

                    System.out.print("Input phone number: ");
                    String phoneNumber = tool.iString();

                    System.out.print("Input address: ");
                    String address = tool.iString();

                    cus.add(new Customer(customerID, name, age, phoneNumber, address));
                    System.out.println("Add customer successfuly!!");
                    this.saveCustomer(cus);
                    a = false;
                    return new Customer(customerID, name, age, phoneNumber, address);
                }
            }
        } catch (Exception e) {
            System.err.println("co loi phan inputDogSale()");
        }
        return null;
    }

//--------------------------sửa thông tin các đối tượng-----------------------
    public void fixInfoEmp() {
        try {
            System.out.println("ID of Employee need to edit: ");
            String employee = tool.iString();
            if (this.checkIdEmp(emp, employee)) {
                boolean b = true;
                Employee employ = this.seachEmp(employee, emp);
                while (b) {
                    System.out.println("What employee information do you want to edit ?");
                    System.out.println("1. Employee ID.");
                    System.out.println("2. Employee Name.");
                    System.out.println("3. Employee Age.");
                    System.out.println("4. Employee Phonenumber.");
                    System.out.println("5. Employee Day Number.");
                    System.out.println("6. Employee Salery.");
                    System.out.println("7. Employee Bonus.");
                    System.out.println("8. Employee Address.");
                    System.out.println("0. Exit.");
                    int choice = tool.iInt();
                    switch (choice) {
                        case 1:
                            System.out.println("New ID: ");
                            String newID = tool.iString();
                            employ.setEmployeeID(newID);
                            System.out.println("Update ID successful!");
                            break;
                        case 2:
                            System.out.println("New Name: ");
                            String newName = tool.iString();
                            employ.setName(newName);
                            System.out.println("Update Name successful!");
                            break;
                        case 3:
                            System.out.println("New Age: ");
                            int newAge = tool.iInt();
                            employ.setAge(newAge);
                            System.out.println("Update Age successful!");
                            break;
                        case 4:
                            System.out.println("New PhoneNumber: ");
                            String newPhoneNumber = tool.iString();
                            employ.setPhoneNumber(newPhoneNumber);
                            System.out.println("Update Phonenumber successful!");
                            break;
                        case 5:
                            System.out.println("New Day Number: ");
                            double newDay = tool.iDouble();
                            employ.setDayNumber(newDay);
                            System.out.println("Update Day Number successful!");
                            break;
                        case 6:
                            System.out.println("New Salery: ");
                            double newSalery = tool.iDouble();
                            employ.setSalary(newSalery);
                            System.out.println("Update salery successful!");
                            break;
                        case 7:
                            System.out.println("New Bonus: ");
                            double newBonus = tool.iDouble();
                            employ.setBonus(newBonus);
                            System.out.println("Update Bonus successful!");
                            break;
                        case 8:
                            System.out.println("New Address: ");
                            String newAddress = tool.iString();
                            employ.setAddress(newAddress);
                            System.out.println("Update Address successful!");
                            break;
                        case 0:
                            b = false;
                            break;
                        default:
                            break;
                    }
                }
                this.saveEmployee(emp);
            } else {
                System.err.println("Can't find Employee !");
            }
        } catch (Exception e) {
            System.err.println("co loi phan fixInFoEmp()");
        }

    }

    public void fixInfoCus() {
        try {
            System.out.println("ID of Customer need to edit: ");
            String customer = tool.iString();
            if (this.checkIdCus(cus, customer)) {
                boolean b = true;
                Customer cus1 = this.searchCus(customer, cus);
                while (b) {
                    System.out.println("What customer information do you want to edit ?");
                    System.out.println("1. Customer ID.");
                    System.out.println("2. Customer Name.");
                    System.out.println("3. Customer Age.");
                    System.out.println("4. Customer Phonenumber.");
                    System.out.println("5. Customer Address.");
                    System.out.println("0. Exit.");
                    int choice = tool.iInt();

                    switch (choice) {
                        case 1:
                            System.out.println("New ID: ");
                            String newID = tool.iString();
                            cus1.setCustomerID(newID);
                            System.out.println("Update ID successful!");
                            break;
                        case 2:
                            System.out.println("New Name: ");
                            String newName = tool.iString();
                            cus1.setName(newName);
                            System.out.println("Update Name successful!");
                            break;
                        case 3:
                            System.out.println("New Age: ");
                            int newAge = tool.iInt();
                            cus1.setAge(newAge);
                            System.out.println("Update Age successful!");
                            break;
                        case 4:
                            System.out.println("New PhoneNumber: ");
                            String newPhoneNumber = tool.iString();
                            cus1.setPhoneNumber(newPhoneNumber);
                            System.out.println("Update Phonenumber successful!");
                            break;
                        case 5:
                            System.out.println("New Address: ");
                            String newAddress = tool.iString();
                            cus1.setAddress(newAddress);
                            System.out.println("Update Address successful!");
                            break;
                        case 0:
                            b = false;
                            break;
                        default:
                            break;
                    }
                }
                this.saveCustomer(cus);
            } else {
                System.err.println("Can't find Customer !");
            }
        } catch (Exception e) {
            System.err.println("co loi phan fixInfoCus()");
        }

    }

    public void fixInfoDogSale() {
        try {
            System.out.println("ID of Dog Sale need to edit: ");
            String saleID = tool.iString();
            if (this.checkIdDogSale(dogSale, saleID)) {
                boolean b = true;
                DogForSale saleDog = this.searchDogSale(saleID, dogSale);
                while (b) {
                    System.out.println("What Dog Sale information do you want to edit ?");
                    System.out.println("1. Dog Sale ID.");
                    System.out.println("2. Dog Sale Origin.");
                    System.out.println("3. Dog Sale Age.");
                    System.out.println("4. Dog Sale Gender.");
                    System.out.println("5. Dog Sale Breed.");
                    System.out.println("6. Dog Sale Color.");
                    System.out.println("7. Dog Sale Health.");
                    System.out.println("8. Dog Sale Vaccine.");
                    System.out.println("9. Dog Sale Price.");
                    System.out.println("0. Exit.");
                    int choice = tool.iInt();
                    switch (choice) {
                        case 1:
                            System.out.println("New ID: ");
                            String newID = tool.iString();
                            saleDog.setDogID(newID);
                            System.out.println("Update ID successful!");
                            break;
                        case 2:
                            System.out.println("New Origin: ");
                            String newOrigin = tool.iString();
                            saleDog.setOrigin(newOrigin);
                            System.out.println("Update Origin successful!");
                            break;
                        case 3:
                            System.out.println("New Age: ");
                            int newAge = tool.iInt();
                            saleDog.setAge(newAge);
                            System.out.println("Update Age successful!");
                            break;
                        case 4:
                            System.out.println("New Gender: ");
                            String newGender = tool.iString();
                            saleDog.setGender(newGender);
                            System.out.println("Update Gender successful!");
                            break;
                        case 5:
                            System.out.println("New Breed: ");
                            String newBreed = tool.iString();
                            saleDog.setDogBreed(newBreed);
                            System.out.println("Update Breed successful!");
                            break;
                        case 6:
                            System.out.println("New Color: ");
                            String newColor = tool.iString();
                            saleDog.setColor(newColor);
                            System.out.println("Update Color successful!");
                            break;

                        case 7:
                            System.out.println("New Health: ");
                            String newHealth = tool.iString();
                            saleDog.setHealthyStatus(newHealth);
                            System.out.println("Update Health successful!");
                            break;
                        case 8:
                            System.out.println("New Vaccine: ");
                            String newVaccine = tool.iString();
                            saleDog.setVaccineStatus(newVaccine);
                            System.out.println("Update Vaccine successful!");
                            break;
                        case 9:
                            System.out.println("New Price: ");
                            double newPrice = tool.iDouble();
                            saleDog.setPrice(newPrice);
                            System.out.println("Update Price successful!");
                            break;
                        case 0:
                            b = false;
                            break;
                        default:
                            break;
                    }
                }
                this.saveDogSale(dogSale);
            } else {
                System.err.println("Can't find Dog Sale !");
            }
        } catch (Exception e) {
            System.err.println("co loi phan fixInfoDogSale()");
        }
    }

    public void fixInfoDogSend() {
        try {
            System.out.println("ID of Dog Send need to edit: ");
            String sendID = tool.iString();
            if (this.checkIdDogSend(dogSend, sendID)) {
                boolean b = true;
                DogForSend sendDog = this.searchDogSend(sendID, dogSend);
                while (b) {
                    System.out.println("What Dog Send information do you want to edit ?");
                    System.out.println("1. Dog Send ID.");
                    System.out.println("2. Dog Send Name.");
                    System.out.println("3. Dog Send Age.");
                    System.out.println("4. Dog Send Gender.");
                    System.out.println("5. Dog Send Breed.");
                    System.out.println("6. Dog Send Color.");
                    System.out.println("7. Dog Send Health.");
                    System.out.println("8. Dog Send Vaccine.");
                    System.out.println("9. Dog Send Price.");
                    System.out.println("10. Dog Send Time Send.");
                    System.out.println("11. Dog Send Time PickUp.");
                    System.out.println("0. Exit.");
                    int choice = tool.iInt();
                    switch (choice) {
                        case 1:
                            System.out.println("New ID: ");
                            String newID = tool.iString();
                            sendDog.setDogID(newID);
                            System.out.println("Update ID successful!");
                            break;
                        case 2:
                            System.out.println("New Name: ");
                            String newName = tool.iString();
                            sendDog.setName(newName);
                            System.out.println("Update Name successful!");
                            break;
                        case 3:
                            System.out.println("New Age: ");
                            int newAge = tool.iInt();
                            sendDog.setAge(newAge);
                            System.out.println("Update Age successful!");
                            break;
                        case 4:
                            System.out.println("New Gender: ");
                            String newGender = tool.iString();
                            sendDog.setGender(newGender);
                            System.out.println("Update Gender successful!");
                            break;
                        case 5:
                            System.out.println("New Breed: ");
                            String newBreed = tool.iString();
                            sendDog.setDogBreed(newBreed);
                            System.out.println("Update Breed successful!");
                            break;
                        case 6:
                            System.out.println("New Color: ");
                            String newColor = tool.iString();
                            sendDog.setColor(newColor);
                            System.out.println("Update Color successful!");
                            break;

                        case 7:
                            System.out.println("New Health: ");
                            String newHealth = tool.iString();
                            sendDog.setHealthyStatus(newHealth);
                            System.out.println("Update Health successful!");
                            break;
                        case 8:
                            System.out.println("New Vaccine: ");
                            String newVaccine = tool.iString();
                            sendDog.setVaccineStatus(newVaccine);
                            System.out.println("Update Vaccine successful!");
                            break;
                        case 9:
                            System.out.println("New Price: ");
                            double newPrice = tool.iDouble();
                            sendDog.setPrice(newPrice);
                            System.out.println("Update Price successful!");
                            break;
                        case 10:
                            System.out.println("New Time Send: ");
                            String newTimeSend = tool.iString();
                            sendDog.setTimeSend(newTimeSend);
                            System.out.println("Update Time Send successful!");
                            break;
                        case 11:
                            System.out.println("New Time PickUp: ");
                            String newPickUp = tool.iString();
                            sendDog.setTimePickUp(newPickUp);
                            System.out.println("Update Time PickUp successful!");
                            break;
                        case 0:
                            b = false;
                            break;
                        default:
                            break;
                    }
                }
                this.saveDogSend(dogSend);
            } else {
                System.err.println("Can't find dog send !");
            }
        } catch (Exception e) {
            System.err.println("co loi phan fixInfoDogSend()");
        }
    }

//=============================================================================
    //-----------------------phần xóa chó, xóa khách, xóa nhân viên-------------------------
    public void removeDogSale() {
        try {
            System.out.println("Enter ID Dog Sale want to remove: ");
            String dogID = tool.iString();
            if (this.checkIdDogSale(dogSale, dogID)) {
                dogSale.remove(this.searchDogSale(dogID, dogSale));
                this.saveDogSale(dogSale);
            } else {
                System.err.println("Can't find Dog For Sale !");
            }
        } catch (Exception e) {
            System.err.println("co loi phan removeDogSale()");
        }
    }

    public void removeDogSend() {
        System.out.println("Enter ID Dog Send want to remove: ");
        String dogID = tool.iString();
        if (this.checkIdDogSend(dogSend, dogID)) {
            dogSend.remove(this.searchDogSend(dogID, dogSend));
            this.saveDogSend(dogSend);
        } else {
            System.err.println("Can't find Dog For Send !");
        }
    }

    public void removeCustomer() {
        System.out.println("Enter ID Customer want to remove: ");
        String customerID = tool.iString();
        if (this.checkIdCus(cus, customerID)) {
            cus.remove(searchCus(customerID, cus));
            this.saveCustomer(cus);
        } else {
            System.err.println("Can't find Customer !");
        }

    }

    public void removeEmployee() {
        System.out.println("Enter ID Employee want to remove: ");
        String employeeID = tool.iString();
        if (this.checkIdEmp(emp, employeeID)) {
            emp.remove(seachEmp(employeeID, emp));
            this.saveEmployee(emp);
        } else {
            System.err.println("Can't find Employee !");
        }
    }

// --------------------------------------phan display---------------------------------------
    public void displayDogSale() {
        
        System.out.println("List Dog Sale: ");
        System.out.println("--------------------------------------------------------------------------------------------------------------------------\n");
        System.out.printf("%-10s %-15s %-15s %-20s %-15s %-17s %-17s %-10s\n",
                "DOG ID", "ORIGIN", "GENDER", "DOG BREED",
                "COLOR", "HEALTH STATUS", "VACCINE STATUS", "PRICE");
        dogSale.forEach((dog) -> {
            dog.display();
        });
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");    
    }

    public void displayDogSend() {
        System.out.println("List Dog Send: ");
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
        System.out.printf("%-13s %-12s %-14s %-9s %-15s %-11s %-14s %-17s %-16s %-14s %-10s\t\n", "CUSTOMER ID",
                "DOG ID", "NAME", "GENDER", "DOG BREED",
                "COLOR", "HEALTH STATUS", "VACCINE STATUS",
                "TIME PICK UP", "TIME SEND", "PRICE");
        dogSend.forEach((dog) -> {
            dog.display();
        });
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
    }

    public void displayCus() {
        System.out.println("List Customer: ");
        System.out.println("--------------------------------------------------------------------------------------------------------------------------\n");
        System.out.printf("%-17s %-20s %-10s %-19s %-20s\n",
                "CUSTOMER ID", "NAME", "AGE", "PHONE NUMBER",
                "ADDRESS");
        cus.forEach((cus1) -> {
            cus1.display();
        });
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
    }

    public void displayEmp() {
        System.out.println("List Employee: ");
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
        System.out.printf("%-15s %-9s %-20s %-9s %-19s %-18s \n",
                "EMPLOYEE ID", "DAY", "NAME", "AGE", "PHONE NUMBER",
                "ADDRESS");
        emp.forEach((emp1) -> {
            emp1.display();
        });
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
    }

    public void displayHistory() {
        //("%10s %10s %12s %8s %12s %15s\n", idHis, price, idCus, idDog, idEmp, currentTime)
        System.out.println("List History: ");
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
        System.out.printf("%-17s %-15s %-14s %-12s %-15s %-15s \n",
                "HISTORY TYPE", "PRICE", "CUSTOMER ID", "DOG ID", "EMPLOYEE ID", "TIME");
        his.forEach((his1) -> {
            his1.display();
        });
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
    }

    //----------------------------------------phần ghi xuống file-------------------------------------------------
    public void saveDogSale(ArrayList<DogForSale> dogSale) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("dataDogSale.txt"))) {
            for (DogForSale dogForSale : dogSale) {
                writer.write(dogForSale + "");
                writer.newLine();
            }
            writer.close();
            System.out.println("Save to file Dog Sale complete!");
        } catch (Exception e) {
            System.err.println("Can't save file!");
        }
    }

    public void saveDogSend(ArrayList<DogForSend> dogSend) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("dataDogSend.txt"))) {
            for (DogForSend dogForSend : dogSend) {
                writer.write(dogForSend + "");
                writer.newLine();
            }
            writer.close();
            //System.out.println("Save to file complete!");
        } catch (Exception e) {
            System.err.println("Can't save file!");
        }
    }

    public void saveCustomer(ArrayList<Customer> cus) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("dataCustomer.txt"))) {
            for (Customer customer : cus) {
                writer.write(customer + "");
                writer.newLine();
            }
            writer.close();
            //System.out.println("Save to file complete!");
        } catch (Exception e) {
            System.err.println("Can't save file!");
        }
    }

    public void saveEmployee(ArrayList<Employee> emp) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("dataEmployee.txt"))) {
            for (Employee employee : emp) {
                writer.write(employee + "");
                writer.newLine();
            }
            writer.close();
            //System.out.println("Save to file complete!");
        } catch (Exception e) {
            System.err.println("Can't save file!");
        }
    }

    public void saveHistory(ArrayList<History> his) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("dataHistory.txt"))) {
            for (History history : his) {
                writer.write(history + "");
                writer.newLine();
            }
            writer.close();
            //System.out.println("Save to file complete!");
        } catch (Exception e) {
            System.err.println("Can't save file!");
        }
    }

    public void saveFeedBack(ArrayList<Feedback> feedback) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("dataFeedback.txt"))) {
            for (Feedback fb : feedback) {
                writer.write(fb + "");
                writer.newLine();
            }
            writer.close();
        } catch (Exception e) {
            System.err.println("Can't save file!");
        }
    }

//--------------------------------------- phần đọc file ------------------------------------------------
    public void readDogSale() {
        try (BufferedReader reader = new BufferedReader(new FileReader("dataDogSale.txt"))) {
            String line;
            while (((line = reader.readLine()) != null)) {
                try {
                    String[] parts = line.split(" , ");
                    String origin = parts[0];
                    String dogID = parts[1];
                    int age = Integer.parseInt(parts[2]);
                    String gender = parts[3];
                    String dogBreed = parts[4];
                    String color = parts[5];
                    String healthyStatus = parts[6];
                    String vaccineStatus = parts[7];
                    double price = Double.parseDouble(parts[8]);
                    DogForSale dg = new DogForSale(origin, dogID, age, gender, dogBreed, color, healthyStatus, vaccineStatus, price);
                    if (dogSale == null) {
                        dogSale = new ArrayList<>();
                    }
                    dogSale.add(dg);
                } catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
                }
            }
            //System.out.println("Read Dog Sale complete!");
        } catch (Exception e) {
            System.err.println("Can't read Dog Sale file!");
        }
    }

    public void readDogSend() {
        try (BufferedReader reader = new BufferedReader(new FileReader("dataDogSend.txt"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                try {
                    String[] parts = line.split(" , ");
                    String customerID = parts[0];
                    String timeSend = parts[1];
                    String timePickUp = parts[2];
                    String name = parts[3];
                    String dogID = parts[4];
                    int age = Integer.parseInt(parts[5]);
                    String gender = parts[6];
                    String dogBreed = parts[7];
                    String color = parts[8];
                    String healthy = parts[9];
                    String vaccine = parts[10];
                    double price = Double.parseDouble(parts[11]);
                    DogForSend send = new DogForSend(customerID, timeSend, timePickUp, name, dogID, age, gender, dogBreed, color, healthy, vaccine, price);
                    if (dogSend == null) {
                        dogSend = new ArrayList<>();
                    }
                    dogSend.add(send);
                } catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
                }
            }
            reader.close();
        } catch (Exception e) {
            System.err.println("Can't read Dog Send file!");
        }
    }

    public void readHistory() {
        try (BufferedReader reader = new BufferedReader(new FileReader("dataHistory.txt"))) {
            String line;
            while (((line = reader.readLine()) != null)) {
                try {
                    String[] parts = line.split(" , ");
                    int type = Integer.parseInt(parts[0]);
                    String idCus = parts[1];
                    String idDog = parts[2];
                    String idEmp = parts[3];
                    double price = Double.parseDouble(parts[4]);
                    String currentTime = parts[5];
                    History history = new History(type, idCus, idDog, idEmp, price, currentTime);
                    if (his == null) {
                        his = new ArrayList<>();
                    }
                    his.add(history);
                } catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
                }
            }
            //System.out.println("Read History complete!");
            reader.close();
        } catch (Exception e) {
            System.err.println("Can't read History file!");
        }
    }

    public void readCustomer() {
        try (BufferedReader reader = new BufferedReader(new FileReader("dataCustomer.txt"))) {
            String line;
            while (((line = reader.readLine()) != null)) {
                try {
                    String[] parts = line.split(" , ");
                    String customerID = parts[0];
                    String name = parts[1];
                    int age = Integer.parseInt(parts[2]);
                    String phoneNumber = parts[3];
                    String address = parts[4];
                    Customer dg = new Customer(customerID, name, age, phoneNumber, address);
                    if (cus == null) {
                        cus = new ArrayList<>();
                    }
                    cus.add(dg);
                } catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
                }
            }
            //System.out.println("Read file Customer complete!");
            reader.close();
        } catch (Exception e) {
            System.err.println("Can't read Customer file!");
        }
    }

    public void readEmployee() {
        try (BufferedReader reader = new BufferedReader(new FileReader("dataEmployee.txt"))) {
            String line;
            while (((line = reader.readLine()) != null)) {
                try {
                    String[] parts = line.split(" , ");
                    String employeeID = parts[0];
                    double dayNumber = Double.parseDouble(parts[1]);
                    String name = parts[2];
                    int age = Integer.parseInt(parts[3]);
                    String phoneNumber = parts[4];
                    String address = parts[5];

                    Employee dg = new Employee(employeeID, name, age, phoneNumber, address);
                    dg.setDayNumber(dayNumber);
                    if (emp == null) {
                        emp = new ArrayList<>();
                    }
                    emp.add(dg);
                } catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
                }
            }
            //System.out.println("Read file Employee complete!");
            reader.close();
        } catch (Exception e) {
            System.err.println("Can't read Employee file!");
        }
    }

    public void readFeedback() {
        try (BufferedReader reader = new BufferedReader(new FileReader("dataFeedback.txt"))) {
            String line;
            while (((line = reader.readLine()) != null)) {
                try {
                    String[] parts = line.split(" , ");
                    String id = parts[0];
                    String f = parts[1];
                    String r = parts[2];
                    Feedback dg = new Feedback(id, f, r);
                    if (feedback == null) {
                        feedback = new ArrayList<>();
                    }
                    feedback.add(dg);
                } catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
                }
            }
            //System.out.println("Read file Feedback complete!");
            reader.close();
        } catch (Exception e) {
            System.err.println("Can't read FeedBack file!");
        }
    }
// --------------------------------------- phần lấy dữ liệu danh sách---------------------------------

    public ArrayList<DogForSale> getDogForSale() {
        return dogSale;
    }

    public ArrayList<DogForSend> getDogForSend() {
        return dogSend;
    }

    public ArrayList<Customer> getCustomer() {
        return cus;
    }

    public ArrayList<Employee> getEmployee() {
        return emp;
    }

    public ArrayList<History> getHistory() {
        return his;
    }
//-------------------------------------phan search-------------------------------------------

    public DogForSale searchDogSale(String id, ArrayList<DogForSale> arrDog) {
        for (DogForSale dog : arrDog) {
            if (id.equalsIgnoreCase(dog.getDogID())) {
                return dog;
            }
        }
        return null;
    }

    public DogForSend searchDogSend(String id, ArrayList<DogForSend> arrDog) {
        for (DogForSend dog : arrDog) {
            if (id.equalsIgnoreCase(dog.getDogID())) {
                return dog;
            }
        }
        return null;
    }

    public Customer searchCus(String id, ArrayList<Customer> arrCus) {
        for (Customer cus1 : arrCus) {
            if (id.equalsIgnoreCase(cus1.getCustomerID())) {
                return cus1;
            }
        }
        return null;
    }

    public Employee seachEmp(String id, ArrayList<Employee> arrEmp) {
        for (Employee emp1 : arrEmp) {
            if (id.equalsIgnoreCase(emp1.getEmployeeID())) {
                return emp1;
            }
        }
        return null;
    }

    public History seachHis(String idCus) {
        for (History his1 : this.getHistory()) {
            if (idCus.equalsIgnoreCase(his1.getIdCus())) {
                return his1;
            }
        }
        return null;
    }

//---------------------------check id da ton tai hay chua-------------------
    public boolean checkIdEmp(ArrayList<Employee> arr, String id) {
        return arr.stream().anyMatch((emp1) -> (emp1.getEmployeeID().equalsIgnoreCase(id)));
    }

    public boolean checkIdCus(ArrayList<Customer> arr, String id) {
        return arr.stream().anyMatch((cus1) -> (cus1.getCustomerID().equalsIgnoreCase(id)));
    }

    public boolean checkIdDogSend(ArrayList<DogForSend> arr, String id) {
        return arr.stream().anyMatch((dog) -> (dog.getDogID().equalsIgnoreCase(id)));
    }

    public boolean checkIdDogSale(ArrayList<DogForSale> arr, String id) {
        return arr.stream().anyMatch((dog) -> (dog.getDogID().equalsIgnoreCase(id)));
    }
//-----------------------------------feedback----------------------------------------

    public void sendFeedBack() {
        try {
            System.out.println("Enter your ID: ");
            String id = tool.iString();
            if (this.checkIdCus(cus, id)) {
                System.out.println("Send your feedback: ");
                String feedBack = tool.iString();
                Feedback fb = new Feedback(id, feedBack);
                feedback.add(fb);
                this.saveFeedBack(feedback);
                System.out.println("Send feedback successful!");
            } else {
                System.err.println("ID Customer does not exist!");
            }
        } catch (Exception e) {
            System.err.println("co loi phan sendFeedBack()");
        }
    }

    public void displayAllFeedback() {
        System.out.println("-----------------------------------------------------------\n");
        System.out.printf("%-14s %-20s\n", "ID", "FeedBack");
        feedback.forEach((fb) -> {
            fb.displayFeedback();
        });
        System.out.println("\n-----------------------------------------------------------\n");
    }

    public void reply() {
        try {
            this.displayAllFeedback();
            System.out.println("Enter Customer ID to reply to: ");
            String cusID = tool.iString();
            boolean isCustomerExist = false;

            for (Feedback fb : feedback) {
                if (fb.getIdCustomer().equalsIgnoreCase(cusID)) {
                    System.out.println("Enter your reply: ");
                    String reply = tool.iString();
                    fb.setReply(reply);
                    isCustomerExist = true;
                    break;
                }
            }

            if (isCustomerExist) {
                this.saveFeedBack(feedback);
                System.out.println("Reply sent successfully!");
            } else {
                System.err.println("Customer does not exist!");
            }
        } catch (Exception e) {
            System.err.println("có lỗi phần reply!");
        }
    }

    public void displayReply() {
        try {
            System.out.print("Enter your ID: ");
            String idCuss = tool.iString();
            System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
            System.out.printf("%-18s %-25s %-20s\n", "ID Customer", "FeedBack", "Reply");

            feedback.stream()
                    .filter(fb -> fb.getIdCustomer().equalsIgnoreCase(idCuss))
                    .forEach(feedback1 -> feedback1.displayreply());
            System.out.println("\n--------------------------------------------------------------------------------------------------------------------------\n");
        } catch (Exception e) {
            System.err.println("Có lỗi phần hiển thị reply!");
        }
    }

//------------------------------------ trả lương --------------------------------
    public void paySalary() {
        for (Employee employee : emp) {
            System.out.printf("%5s %10s %10s \n", "ID", "NAME", "Salary");
            System.out.format("%5s %10s %10s\n", employee.getEmployeeID(), employee.getName(), employee.getSalary());

        }
    }
//-----------------------------------hiển thị tiền----------------------------------

    public void moneyFromHis() {
        try {
            double tongTien = 0;
            tongTien = this.getHistory().stream().map((temp) -> temp.getPrice()).reduce(tongTien, (accumulator, _item) -> accumulator + _item);
            System.out.println("All money: " + tongTien);
        } catch (Exception e) {
            System.err.println("co loi phan moneyFromHis()");
        }
    }
}
