# auto generated makefile
HPT_ROOT := /home/niko/rr/rr174x-linux-src-v2.4
HPT_REGPARM := $(shell echo "$(CFLAGS) $(KBUILD_CFLAGS)" | awk '{ match($$0,"-mregparm="); if (RSTART>0) print substr($$0,RSTART+10,1);}')
HPT_REGPARM := $(if $(HPT_REGPARM),$(HPT_REGPARM),0)
HPT_LIB := /home/niko/rr/rr174x-linux-src-v2.4/lib/linux/free-x86_64-regparm$(HPT_REGPARM)
TARGETNAME := rr174x
TARGETOBJS := os_linux.o osm_linux.o div64.o hptinfo.o config.o
TARGETMODS := him_rr1740pm.o ldm_raid_compat.o partition.o raid0.o raid1.o raid5.o jbod.o

obj-m := $(TARGETNAME).o

$(TARGETNAME)-objs := $(TARGETOBJS) $(TARGETMODS)

EXTRA_CFLAGS := -DLINUX -D_LINUX_ -D__KERNEL__=1 -DSUPPORT_ARRAY -DDBG=0 -DBITS_PER_LONG=64 -DMODVERSIONS -DMODULE -Idrivers/scsi -I$(HPT_ROOT)/inc/linux -I$(HPT_ROOT)/inc -I$(HPT_ROOT)/osm/linux

$(addprefix $(obj)/,$(TARGETOBJS:.o=.c)): FORCE
	@{ test -f /home/niko/rr/rr174x-linux-src-v2.4/product/rr1740pm/linux/$(notdir $@) && cp -f /home/niko/rr/rr174x-linux-src-v2.4/product/rr1740pm/linux/$(notdir $@) $@; } ||\
	{ test -f $(HPT_ROOT)/osm/linux/$(notdir $@) && cp -f $(HPT_ROOT)/osm/linux/$(notdir $@) $@; }

$(addprefix $(obj)/,$(TARGETMODS)): $(obj)/%.o: $(HPT_LIB)/%.o
	@cp -f $< $@
