/**
 * @file nRF24L01P.cpp
 *
 */

/**
 * Includes
 */
#include <nRF24L01.h>

/**
 * Method
 */

nRF24L01::nRF24L01(PinName mosi,
                   PinName miso,
                   PinName clk,
                   PinName csn,
                   PinName ce,
                   PinName irq) : _spi(mosi, miso, clk), _csn(csn), _ce(ce), _irq(irq){
                   };