'use strict';

class building {
    constructor(color) {
        this._color = color;
        this._finished = true;
    }

    get color() {
        return this._color;
    }

    get finished() {
        return this._finished;
    }

    moveIn() {

    }
}
class house extends building {
    constructor(color) {
        super(color);
    }
    moveIn() {
        if (this._finished = true) {
            console.log("Move into house successful");
        }
        else {
            console.log("Can't move into an unfinished house!");
        }
    }

}

class restaurant extends building{
    constructor(color) {
        super(color);
    }
    moveIn() {
        if (this._finished = true) {
            console.log("Successfully moved into restaurant!");
        }
        else {
            console.log("Can't move into an unfinished restaurant");
        }
    }
}

var a = new house("BLACK");
a.moveIn();
a.color;
var b = new restaurant("BROWN");
b.moveIn();
b.color;



exports.building = building;


