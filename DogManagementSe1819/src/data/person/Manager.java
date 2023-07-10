package data.person;

import data.Sevice.Service;

public class Manager extends Person {

    private String managerID;

    public Manager(String managerID, String name, int age, String phoneNumber, String address) {
        super(name, age, phoneNumber, address);
        this.managerID = managerID;

    }

    public String getManagerID() {
        return managerID;
    }

    public void setManagerID(String managerID) {
        this.managerID = managerID;
    }

    public void display() {
        System.out.format("%5s %10s %5s %10s %10s \n",
                this.getManagerID(), this.getName(), this.getAge(), this.getPhoneNumber(),
                this.getAddress());

    }

    @Override
    public String toString() {
        return this.managerID+" , "+super.toString();
    }
    public void checkDog(){
        Service sv = new Service();
        sv.displayDogSale();
        sv.displayDogSend();
    }
    public void checkEmployee(){
        Service sv = new Service();
        sv.displayEmp();
    }
    public void checkCustomer(){
        Service sv = new Service();
        sv.displayCus();
    }

}
