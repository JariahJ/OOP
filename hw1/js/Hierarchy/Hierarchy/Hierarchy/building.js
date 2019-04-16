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

exports.building = building;


