//	LAB1
//	  char in[1];
//	  if (HAL_I2C_Slave_Receive(&hi2c1, &in, 1, 1000) == HAL_OK) {
//		  if (in[0] == 'a') {
//			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
//			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);
//			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
//			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15);
//		  }
//	  }

//	LAB2
//	  char in[1];
//	  if (HAL_SPI_Receive(&hspi1, &in, 1, 1000) == HAL_OK) {
//		  if (in[0] == 'a') {
//			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
//			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);
//			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
//			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15);
//		  }
//	  }

//	LAB3
	  char in[1];
	  if (HAL_I2C_Slave_Receive(&hi2c1, &in, 1, 1000) == HAL_OK) {
		  if (in[0] == 'a') {
			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);
			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
			  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15);
		  }
	  }