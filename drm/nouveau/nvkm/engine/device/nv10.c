/*
 * Copyright 2012 Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors: Ben Skeggs
 */
#include "priv.h"

int
nv10_identify(struct nvkm_device *device)
{
	switch (device->chipset) {
	case 0x10:
		device->oclass[NVDEV_ENGINE_GR     ] = &nv10_gr_oclass;
		device->oclass[NVDEV_ENGINE_DISP   ] =  nv04_disp_oclass;
		break;
	case 0x15:
		device->oclass[NVDEV_ENGINE_FIFO   ] =  nv10_fifo_oclass;
		device->oclass[NVDEV_ENGINE_SW     ] =  nv10_sw_oclass;
		device->oclass[NVDEV_ENGINE_GR     ] = &nv10_gr_oclass;
		device->oclass[NVDEV_ENGINE_DISP   ] =  nv04_disp_oclass;
		break;
	case 0x16:
		device->oclass[NVDEV_ENGINE_FIFO   ] =  nv10_fifo_oclass;
		device->oclass[NVDEV_ENGINE_SW     ] =  nv10_sw_oclass;
		device->oclass[NVDEV_ENGINE_GR     ] = &nv10_gr_oclass;
		device->oclass[NVDEV_ENGINE_DISP   ] =  nv04_disp_oclass;
		break;
	case 0x1a:
		device->oclass[NVDEV_ENGINE_FIFO   ] =  nv10_fifo_oclass;
		device->oclass[NVDEV_ENGINE_SW     ] =  nv10_sw_oclass;
		device->oclass[NVDEV_ENGINE_GR     ] = &nv10_gr_oclass;
		device->oclass[NVDEV_ENGINE_DISP   ] =  nv04_disp_oclass;
		break;
	case 0x11:
		device->oclass[NVDEV_ENGINE_FIFO   ] =  nv10_fifo_oclass;
		device->oclass[NVDEV_ENGINE_SW     ] =  nv10_sw_oclass;
		device->oclass[NVDEV_ENGINE_GR     ] = &nv10_gr_oclass;
		device->oclass[NVDEV_ENGINE_DISP   ] =  nv04_disp_oclass;
		break;
	case 0x17:
		device->oclass[NVDEV_ENGINE_FIFO   ] =  nv17_fifo_oclass;
		device->oclass[NVDEV_ENGINE_SW     ] =  nv10_sw_oclass;
		device->oclass[NVDEV_ENGINE_GR     ] = &nv10_gr_oclass;
		device->oclass[NVDEV_ENGINE_DISP   ] =  nv04_disp_oclass;
		break;
	case 0x1f:
		device->oclass[NVDEV_ENGINE_FIFO   ] =  nv17_fifo_oclass;
		device->oclass[NVDEV_ENGINE_SW     ] =  nv10_sw_oclass;
		device->oclass[NVDEV_ENGINE_GR     ] = &nv10_gr_oclass;
		device->oclass[NVDEV_ENGINE_DISP   ] =  nv04_disp_oclass;
		break;
	case 0x18:
		device->oclass[NVDEV_ENGINE_FIFO   ] =  nv17_fifo_oclass;
		device->oclass[NVDEV_ENGINE_SW     ] =  nv10_sw_oclass;
		device->oclass[NVDEV_ENGINE_GR     ] = &nv10_gr_oclass;
		device->oclass[NVDEV_ENGINE_DISP   ] =  nv04_disp_oclass;
		break;
	default:
		return -EINVAL;
	}

	return 0;
}
