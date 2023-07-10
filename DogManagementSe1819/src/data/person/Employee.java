package data.person;

public class Employee extends Person {

    private String employeeID;
    private double salary;
    private double dayNumber = 30;
    private double bonus = 0;

    public Employee(String employeeID, String name, int age, String phoneNumber, String address) {
        super(name, age, phoneNumber, address);
        this.employeeID = employeeID;
        
    }

    public String getEmployeeID() {
        return employeeID;
    }

    public void setEmployeeID(String employeeID) {
        this.employeeID = employeeID;
    }

    public double getSalary() {
        return (this.dayNumber*250000) + this.bonus;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public double getDayNumber() {
        return dayNumber;
    }

    public void setDayNumber(double dayNumber) {
        this.dayNumber = dayNumber;
    }

    public double getBonus() {
        return bonus;
    }

    public void setBonus(double bonus) {
        this.bonus += bonus;
    }

    public void display() {
        System.out.format("%-15s %-9s %-20s %-9s %-19s %-18s\n",
                this.getEmployeeID(), this.getDayNumber(), this.getName(), this.getAge(), this.getPhoneNumber(),
                this.getAddress());

    }
    //String employeeID, double dayNumber, String name, int age, String phoneNumber, String address

    @Override
    public String toString() {
        return this.employeeID+" , "+this.dayNumber+" , "+super.toString();
    }
    
}
