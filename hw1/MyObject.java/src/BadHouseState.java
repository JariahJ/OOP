/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author jaria
 */
public class BadHouseState extends Exception {
    private String problem;
    BadHouseState(String problem){
        this.problem = problem;
    }
    
    public String getProblem(){
        return problem;
    }
    
    public void setProblem(String problem){
        this.problem = problem;
    }
    
}
