/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package login;

/**
 *
 * @author Hanh
 */
public class Account {
    private String userName;
    private String passWord;
    private String codeUser;

    public Account(String userName, String passWord, String codeUser) {
        this.userName = userName;
        this.passWord = passWord;
        this.codeUser = codeUser;
    }

    

    public String getUserName() {
        return userName;
    }

    public void setUserName(String userName) {
        this.userName = userName;
    }

    public String getPassWord() {
        return passWord;
    }

    public void setPassWord(String passWord) {
        this.passWord = passWord;
    }

    public String getCodeUser() {
        return codeUser;
    }

    public void setCodeUser(String codeUser) {
        this.codeUser = codeUser;
    }

    @Override
    public String toString() {
        return this.userName+" , "+this.passWord+" , "+this.codeUser;
    }
    
}
