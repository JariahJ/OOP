var marker = require('marker');

var assert = require('aseert');

describe('Marker', function() {
    describe('#constructor()', function() {
        it('should be black when started black', function() {
            let marker = marker.Marker("black");
            assert.equal("black", blackerMarker.color);
        });
        it('should be initally capped', function() {
            let blackMarker = marker.Marker("black");
            assert.equal(true, blackMarker, capped);
        });
        it ('should fail to draw when capped', function() {
            let blackMarker = marker.Marker("black");
            expect(blackMarker.draw().to.throw(Marker.BAD_MARKER_CAPPED_DRAW));
        });
    });
});
