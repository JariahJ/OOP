"use strict";

class BadMarkerState {
    constructor(problem){
        this.problem=problem;
    }
}

class Marker{
    constructor(color){
        console.log("constructed marker");
        this._color = color;
        this._capped = true;
    }

    draw() {
        if (! this.capped){
        console.log("drawing in " + this._color);
        }
        else {
            throw new BadMarkerState("drawing with a capped marker is bad");
        }
    }

    get color() {
        return this._color;
    }

    get capped(){
        return this._capped;
    }

    set capped(value){
        if (typeof value == "boolean"){
            this._capped = value;
        }
            else{
                throw new BadMarkerState("capped must be true or false");
            }
        }

    }

class MarkerTest{
    blackMarker() {return new Marker("black");}
    redMarker() {return new Marker("red");}

    testDrawCappedBad(){
        var ok = false;
        try {
            var black = this.blackMarker();
            black.draw();
        } catch(err){
            ok = true;
        }
        if (!ok) {throw "bad";}

    }

    testDrawUncappedOk(){
        var red = this.redMarker();
        red.capped = false;
        red.draw();
    }

    testBlackMarkerIsBlack(){
        var black = this.blackMarker();
        if (black.color != "black"){
            throw "bad";
        }
    }

    testAll(){
        this.testBlackMarkerIsBlack();
        this.testDrawCappedBad();
        this.testDrawUncappedOk();
    }
}




var markerTest = new MarkerTest();
markerTest.testAll();
