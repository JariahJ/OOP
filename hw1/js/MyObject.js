"use strict";

class BadHouseState {
    constructor(problem) {
        this.problem = problem;
    }
}

class House {
    constructor(color) {
        console.log("constructed house");
        this._color = color;
        this._finished = true;
    }

    moveIn() {
        if (this.finished) {
            console.log("Proof it's finished:" + this.finished);
        }
        else {
            throw House.BAD_MOVE_IN_NOT_FINISHED;
        }
    }

    get color() {
        return this._color;
    }

    get finished() {
        return this._finished;
    }

    set finished(value) {
        if (typeof value == "boolean") {
            this._finished = value;
        }
        else {
            throw House.BAD_HOUSE_FINISHED_INVALID;
        }
    }

}

House.BAD_MOVE_IN_NOT_FINISHED = new BadHouseState("moving in an unfinished house is bad");
House.BAD_HOUSE_FINISHED_INVALID = new BadHouseState("finished must be true or false");



exports.House = House;
exports.BadHouseState = BadHouseState;