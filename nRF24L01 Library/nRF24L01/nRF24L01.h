/**
 * @file nRF24L01P.h
 */

#ifndef __nRF24L01_H__
#define __nRF24L01_H__

/**
 * Includes
 */
#include "PinNames.h"
#include "mbed.h"

class nRF24L01{

    public:
    /**
     * Constructor
     *
     * @param mosi
     * @param miso
     * @param clk
     * @param csn
     * @param ce
     * @param irq
     */
    nRF24L01(PinName mosi, PinName miso, PinName clk, PinName csn, PinName ce, PinName irq = NC);

    private:

    SPI         _spi;
    DigitalOut  _ce, _csn;
    InterruptIn _irq;

};

#endif
