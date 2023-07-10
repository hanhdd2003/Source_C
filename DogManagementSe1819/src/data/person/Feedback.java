/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package data.person;

/**
 *
 * @author Hanh
 */
public class Feedback {
    private String idCustomer;
    private String feedBack;
    private String reply;

    public Feedback(String idCustomer, String feedBack) {
        this.idCustomer = idCustomer;
        this.feedBack = feedBack;
    }
    
    public Feedback(String idCustomer, String feedBack, String reply) {
        this.idCustomer = idCustomer;
        this.feedBack = feedBack;
        this.reply = reply;
    }

    public String getIdCustomer() {
        return idCustomer;
    }

    public void setIdCustomer(String idCustomer) {
        this.idCustomer = idCustomer;
    }

    public String getFeedBack() {
        return feedBack;
    }

    public void setFeedBack(String feedBack) {
        this.feedBack = feedBack;
    }

    public String getReply() {
        return reply;
    }

    public void setReply(String reply) {
        this.reply = reply;
    }
    
    public void displayFeedback(){
        System.out.println(String.format("%-14s %-20s ", idCustomer, feedBack));
    }
    public void displayreply(){
        System.out.println(String.format("%-18s %-25s %-20s ", idCustomer, feedBack, reply));
    }
    @Override
    public String toString() {
        return idCustomer+" , "+feedBack+" , "+reply;
    }
    
}
