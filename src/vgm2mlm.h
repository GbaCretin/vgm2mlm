#ifndef VGM2MLM_H
#define VGM2MLM_H

typedef enum {
	VGM2MLM_STSUCCESS,
	VGM2MLM_STERR_NO_YM2610,
	VGM2MLM_STERR_MLM_BUFFER_OVERFLOW,
	VGM2MLM_STERR_INVALID_VGM_COMMAND,
	VGM2MLM_STERR_FAILED_REALLOCATION,
	VGM2MLM_STERR_UNSUPPORTED_VGM_DATA_BLOCK_TYPE,
	VGM2MLM_STERR_PCM_WRITE,
	VGM2MLM_STERR_DACSTRM_WRITE,
	VGM2MLM_STERR_INVALID_VGM_FILE,
	VGM2MLM_STERR_INVALID_GD3_TAG,
	VGM2MLM_STERR_FAILED_TO_READ_FILE,
	VGM2MLM_STERR_FAILED_TO_WRITE_TO_FILE,
	VGM2MLM_STERR_BAD_VGM_FILE,
	VGM2MLM_STERR_UNSUPPORTED_FREQUENCY,
	VGM2MLM_STERR_FAILED_MEM_ALLOCATION,
	VGM2MLM_STERR_METADATA_OVERFLOW,
	VGM2MLM_STERR_CORRUPTED_LOOP_OFS,
	VGM2MLM_STATUS_COUNT
} vgm2mlm_status_code_t;

typedef enum
{
	VGM2MLM_FLAG_NONE = 0x00,
	VGM2MLM_FLAG_AUTO_TMA_FREQ = 0x01,
} vgm2mlm_flags_t;

extern const char* VGM2MLM_STATUS_MESSAGES[VGM2MLM_STATUS_COUNT];

// This function does NOT create any directories
vgm2mlm_status_code_t vgm2mlm_df_intf(char* vgm_path, char* output_path);

#endif