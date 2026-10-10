void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init) { 
    #define NUMPINS 16;

    // counter to move through the pins
    uint32_t current_pin = 0;
        // unsigned 32 bit integer 
    // checks if the pin should be configured
        uint32_t pin_bit; 
        // unsigned 32 bit integer, will figure it out later in the function
    //    temp so that you're not writing directly to register
    uint32_t temp;

    // checking the parameters to see if they are valid and not made up/nonexistent
    assert_param(IS_GPIO_ALL_INSTANCE(GPIOx));
    assert_param(IS_GPIO_PIN(GPIO_Init->Pin));
    assert_param(IS_GPIO_MODE(GPIO_Init->Mode));

    uint32_t full_pin = GPIO_Init->Pin;
    uint32_t full_pin_binary;

    // assigning the Pins to an array that you can loop through to figure out if you need to configure that pin or not
    int pins[NUMPINS];
    for(int i = NUMPINS - 1; i >= 0 ; i--) {
    }

    // loop through the 16 pins
    while(current_pin < 16) {
        pin_bit = pins[current_pin];
        

        // if the pin shouldn't be skipped then do stuff
        if(pin_bit != 0) {
        }
        
        // increment the loop
        current_pin++;
    }
    

}