﻿'use strict';

class house extends building{
    moveIn() {
        if (this._finished = true) {
            console.log("Move in successful");
        }
        else {
            console.log("Can't move in to an unfinished house!");
        }
    }
    


}

exports.house = house;
for (i = 0; i < 10; i++) {
   console.log(a.moveIn());
}
