"use strict";
var MyObject = require('../MyObject');
var chai = require('chai');
var assert = require('assert');

var expect = chai.expect;
describe('House', function() {
    describe('#constructor()', function() {
        it('should be black when started black', function() {
            let brownHouse = new MyObject.House("brown");
            assert.equal("brown", brownHouse.color);
        });
        it('should be initally finished(house built)', function() {
            let blackHouse = new MyObject.House("black");
            assert.equal(true, blackHouse.finished);
        });
        it ('should fail to move in when unfinished', function() {
            let blackHouse = new MyObject.House("black");
	     blackHouse.finished = false;
            expect(()=>blackHouse.moveIn()).to.throw(MyObject.BAD_MOVE_IN_NOT_FINISHED);
        });
    });
});
