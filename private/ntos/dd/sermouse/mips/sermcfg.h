/*++

Copyright (c) 1989, 1990, 1991, 1992, 1993  Microsoft Corporation

Module Name:

    sermcfg.h

Abstract:

    These are the machine-dependent configuration constants that are used in
    the i8250 serial mouse port driver.

Revision History:

--*/

#ifndef _SERMCFG_
#define _SERMCFG_

//
// Define the interrupt-related configuration constants.
//

#define SERIAL_MOUSE_INTERFACE_TYPE        Internal
#define SERIAL_MOUSE_INTERRUPT_MODE        LevelSensitive
#define SERIAL_MOUSE_INTERRUPT_SHARE       FALSE
#define SERIAL_MOUSE_FLOATING_SAVE         FALSE
#define SERIAL_MOUSE_BUS_NUMBER            0

#define MOUSE_COM1_VECTOR                  0    // Bogus value
#define MOUSE_COM1_IRQL                    0    // Bogus value
#define SERIAL_MOUSE_COM1_PHYSICAL_BASE    0    // Bogus value

#define MOUSE_COM2_VECTOR                  0    // Bogus value
#define MOUSE_COM2_IRQL                    0    // Bogus value
#define SERIAL_MOUSE_COM2_PHYSICAL_BASE    0    // Bogus value

#define MOUSE_VECTOR                       MOUSE_COM1_VECTOR
#define MOUSE_IRQL                         MOUSE_COM1_IRQL
#define SERIAL_MOUSE_PHYSICAL_BASE         SERIAL_MOUSE_COM1_PHYSICAL_BASE
#define SERIAL_MOUSE_REGISTER_LENGTH       8
#define SERIAL_MOUSE_REGISTER_SHARE        FALSE
#define SERIAL_MOUSE_PORT_TYPE             CM_RESOURCE_PORT_MEMORY

//
// Define the default clock rate to be 8.0064 MHz.
//

#define MOUSE_BAUD_CLOCK                   8006400UL

//
// Define the default number of entries in the input data queue.
//

#define DATA_QUEUE_SIZE    100

//
// The default overrideHardware flag (disabled)
//

#define DEFAULT_OVERRIDE_HARDWARE -1

#endif // _SERMCFG_
