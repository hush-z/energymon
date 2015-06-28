/**
 * Read energy from an ODROID Smart Power USB device.
 *
 * @author Connor Imes
 */
#ifndef _EM_ODROID_SMART_POWER_H_
#define _EM_ODROID_SMART_POWER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "energymon.h"

int em_init_osp(em_impl* em);

double em_read_total_osp(em_impl* em);

int em_finish_osp(em_impl* em);

char* em_get_source_osp(char* buffer);

int em_impl_get_osp(em_impl* impl);

#ifdef __cplusplus
}
#endif

#endif
