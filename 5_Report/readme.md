# **Introduction:**

The temperature measurement system is used to measure and control the temperature.It has been implemented by using Atmega32 in a simulation software named SimulIDE using Embedded C.

# **Research:**

Mostly used in vehicles to make sure that the equipments used are working efficiently in cold weather.It takes an analog input and generates a temperature accordingly via master slave communication.

# **Features:**

-Low Cost
-Checks if the driver is seated or not.
-Can modify the temperature according to the passenger.
-Robust System

## Details requirements
### High Level Requirements:
| ID | Description | 
|----| ------------| 
|HLR1  | When the two switches are closed, the first LED glows indicating the actuation of the system and the heater. | 
|HLR2  | Analog input from the temperature sensor | 
|HLR3  | Display. |		

#### Low Level Requirements:

| ID | Description |
|-------|------|
| LLR1 | ADC with Pulse Width Modulation.| 
| LLR2 | Compatible on different Operating Systems. |

 
# **SWOT Analysis:**

**Strength:**

-Temperature modification can be done easily.
-Cost effective.
-Heat generation is fast.

**Weakness:**
- Need dry bags to store the heater.
- Mostly applicable in countries with low temperature.
- Not water proof.

**Opportunities:**

-By implementing both heater and AC.

**Threats:**
- Can't use in high temperature areas.
- High electrical resistance could cause the heater pad in the seat to overheat.

# **4W and 1H:**

**Why:**
To maintain the heat in the vehicles in cold weather.

**What:**
Temperature measurement system to measure,control and generate heat.

**Where:**
Automotive Industry.

**When:**
In vehicles at low temperature areas.

**How:**
By installing the system in vehicles.

#### TEST PLAN:
### High Level Test plan:
| ID    | Description                             | Expected O/P | Actual O/P |
|-------|-----------------------------------------| ------------ | ---------- |
| H_01  |Read temperature                         |PASSED        |SUCCESS     | 
| H_01  |Sensing                                  |PASSED        |SUCCESS     | 
| H_03  |enable blinking led                      |PASSED        |SUCCESS     | 


### Low Level Test Plan:
| ID    | Description           | Expected O/P | Actual O/P | 
|-------|-----------------------| ------------ | -----------| 
| L_01  |Open the app           | PASSED       |SUCESS      | 
| L_03  |Reserve seat           | PASSED       |SUCCESS     |

### Simulation

![Image2](https://user-images.githubusercontent.com/94234616/144358766-a7706083-d87c-4139-8030-092eee803554.png)
