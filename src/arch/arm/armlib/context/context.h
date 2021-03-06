/**
 * @file
 * @brief
 *
 * @author  Anton Kozlov
 * @date    25.10.2012
 */

#ifndef SRC_ARCH_ARM_CORTEXA8_KERNEL_CONTEXT_H_
#define SRC_ARCH_ARM_CORTEXA8_KERNEL_CONTEXT_H_

#ifndef __ASSEMBLER__

#include <stdint.h>
#include <arm/fpu.h>

struct context {
	uint32_t system_r[13];
	uint32_t sp;
	uint32_t lr;
	uint32_t cpsr;
	uint32_t fpu_data[FPU_DATA_LEN];
};

#endif /* __ASSEMBLER__ */

#endif /* SRC_ARCH_ARM_CORTEXA8_KERNEL_CONTEXT_H_ */
