# $Id: Makefile,v 1.2 2007/12/06 09:54:47 xxj Exp $
#
# Copyright (C) 2006 HighPoint Technologies, Inc.
# All Rights Reserved.
#

HPT_ROOT := ../../..

C_DEFINES := -DSUPPORT_ARRAY

TARGETNAME := rr174x
TARGETTYPE := KMOD
TARGETMODS := him_rr1740pm.o ldm_raid_compat.o partition.o raid0.o raid1.o raid5.o jbod.o
TARGETOBJS := os_linux.o osm_linux.o div64.o hptinfo.o config.o

TRASH := ./spp ./update_revision.sh

include $(HPT_ROOT)/inc/linux/Makefile.def

$(TARGETOBJS): osm_linux.h
