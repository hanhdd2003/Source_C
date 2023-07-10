package data.history;

public class History {

    private int type;
    private String idCus;
    private String idDog;
    private String idEmp; // thêm số tiền giao dịch
    private double price;
    private String currentTime;

    public History() {
    }

    public History(int type, String idCus, String idDog, String idEmp, double price, String currentTime) {
        this.type = type;
        this.idCus = idCus;
        this.idDog = idDog;
        this.idEmp = idEmp;
        this.price = price;
        this.currentTime = currentTime;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getIdCus() {
        return idCus;
    }

    public void setIdCus(String idCus) {
        this.idCus = idCus;
    }

    public String getIdDog() {
        return idDog;
    }

    public void setIdDog(String idDog) {
        this.idDog = idDog;
    }

    public String getIdEmp() {
        return idEmp;
    }

    public void setIdEmp(String idEmp) {
        this.idEmp = idEmp;
    }

    public String getType() {
        if (this.type == 1) {
            return "SALE DOG";
        } else if (this.type == 2) {
            return "SEND DOG";
        } else {
            return "PICK UP";
        }
    }

    public void display() {
        System.out.printf("%-17s %-15s %-14s %-12s %-15s %-15s\n", this.getType(), price, idCus, idDog, idEmp, currentTime);
    }

    @Override
    public String toString() {
        return this.type +" , " + this.idCus + " , " + this.idDog + " , " + this.idEmp + " , " + this.price +  " , " + this.currentTime;
    }

}
