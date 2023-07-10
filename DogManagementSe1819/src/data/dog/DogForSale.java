package data.dog;

import tool.MyTool;

public class DogForSale extends Dog {

    MyTool tool = new MyTool();
    private String origin;

    public DogForSale() {
    }

    public DogForSale(String origin, String dogID, int age, String gender, String dogBreed, String color, String healthyStatus, String vaccineStatus, double price) {
        super(dogID, age, gender, dogBreed, color, healthyStatus, vaccineStatus, price);
        this.origin = origin;
    }

    public String getOrigin() {
        return origin;
    }

    public void setOrigin(String origin) {
        this.origin = origin;
    }

    
    @Override
    public void display() {
        System.out.printf("%-10s %-15s %-15s %-20s %-15s %-17s %-17s %-10.1f \t\n",
                this.getDogID(), this.getOrigin(), this.getGender(),
                this.getDogBreed(), this.getColor(), this.getHealthyStatus(),
                this.getVaccineStatus(), this.getPrice());
    }
//String origin, String dogID, int age, String gender, String dogBreed, String color, String healthyStatus, String vaccineStatus, double price
    @Override
    public String toString() {
        return this.origin+ " , " + super.toString();
    }
    
}
