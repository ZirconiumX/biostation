// SPDX-License-Identifier: GPL-3.0-or-later
#define INTERRUPT_TABLE         0x00000300
#define SYSCALL_TABLE           0x00000400
#define THREAD_ARRAY 		0x00001000
#define CURR_THREAD  		0x00004000
#define GS_INTERRUPT_MASK	0x00004004
#define HANDLER_ARRAY           0x00005000

#define END_OF_KERNEL_RAM       0x00100000

#define END_OF_RAM		0x02000000

#define EE_DMAC_STAT		0x1000E010

#define EE_INTC_STAT		0x1000F000
#define EE_INTC_MASK		0x1000F010

#define GS_IMR 			0x12001010

#define	END_OF_SCRATCH_RAM	0x70004000
