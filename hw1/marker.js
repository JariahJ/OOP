"use strict";

class Marker{
    constructor(color){
        console.log("constructed marker");
        this._color = color;
    }

    draw() {
        console.log("drawing in " + this._color);
    }

    get color() {
        return this._color;
    }

}

var blackMarker = new Marker("black");
var redMarker = new Marker("red");

blackMarker.draw();

redMarker.draw();

console.log("I have a " + blackMarker.color + "marker.")

