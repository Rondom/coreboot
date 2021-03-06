ramstage-y += model_206ax_init.c
subdirs-y += ../../x86/name
subdirs-y += ../smm/gen1
subdirs-y += ../common

ramstage-y += acpi.c

ramstage-y += tsc_freq.c
romstage-y += tsc_freq.c
smm-$(CONFIG_HAVE_SMI_HANDLER) += tsc_freq.c

smm-$(CONFIG_HAVE_SMI_HANDLER) += finalize.c

romstage-$(CONFIG_CACHE_RELOCATED_RAMSTAGE_OUTSIDE_CBMEM) += stage_cache.c
ramstage-$(CONFIG_CACHE_RELOCATED_RAMSTAGE_OUTSIDE_CBMEM) += stage_cache.c

cpu_microcode_bins += 3rdparty/blobs/cpu/intel/model_206ax/microcode.bin
cpu_microcode_bins += 3rdparty/blobs/cpu/intel/model_306ax/microcode.bin

cpu_incs-y += $(src)/cpu/intel/model_206ax/cache_as_ram.inc
romstage-y += ../car/romstage.c
