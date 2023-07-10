package data.dog;

public class Dog {

    private String dogID;
    private int age;
    private String gender;
    private String dogBreed;
    private String color;
    private String healthyStatus;
    private String vaccineStatus;
    private double price = (double) 2.1f;

    public Dog() {
    }

    public Dog(String dogID, int age, String gender, String dogBreed, String color, String healthyStatus, String vaccineStatus, double price) {
        this.dogID = dogID;
        this.age = age;
        this.gender = gender;
        this.dogBreed = dogBreed;
        this.color = color;
        this.healthyStatus = healthyStatus;
        this.vaccineStatus = vaccineStatus;
        this.price = price;
    }

    public String getDogID() {
        return dogID;
    }

    public int getAge() {
        return age;
    }

    public String getGender() {
        return gender;
    }

    public String getDogBreed() {
        return dogBreed;
    }

    public String getColor() {
        return color;
    }

    public String getHealthyStatus() {
        return healthyStatus;
    }

    public String getVaccineStatus() {
        return vaccineStatus;
    }

    public double getPrice() {
        return price;
    }

    public void setDogID(String dogID) {
        this.dogID = dogID;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public void setDogBreed(String dogBreed) {
        this.dogBreed = dogBreed;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setHealthyStatus(String healthyStatus) {
        this.healthyStatus = healthyStatus;
    }

    public void setVaccineStatus(String vaccineStatus) {
        this.vaccineStatus = vaccineStatus;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void display() {

    }

    @Override
    public String toString() {
        return this.dogID + " , " +  this.age + " , " +  this.gender + " , " +  this.dogBreed
                + " , " +  this.color + " , " +  this.healthyStatus + " , " +  this.vaccineStatus + " , " +  this.price;
    }

}
