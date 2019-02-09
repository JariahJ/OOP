/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author jaria
 */
public class House {
    private Color color;
    private boolean finished;
 public House(Color color){
 this.color = color;
 this.finished = true;
 }
 
 public Color getColor(){
     return color;
 }
 
 public void setColor(Color color){
     this.color = color;
 }
 
 public boolean isFinished(){
     return finished;
 }
 
 public void setFinished(boolean finished){
     this.finished = finished;
 }
 
 public void moveIn() throws BadHouseState{
     if (isFinished()){
         System.out.println("moved into " + getColor() +"colored house.");
     }else{
         throw BAD_HOUSE_MOVE_IN;
     }
 }
 
 static publie BadHouseState BAD_HOUSE_MOVE_IN
         = new BadMarkerStaet("moving into an unfished house is bad");
}
