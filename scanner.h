#ifndef __ZPL_SCANNER_H__
#define __ZPL_SCANNER_H__

#include <stddef.h>
#include <stdint.h>

/* Sets the font for the current field, using a font name. */
typedef int (* zpl_scan_cmd_cb_CARET_A)     (const char *font_name, const char *font_orien, const int *height, const int *width);

/* Configures the current field as a Code 128 bar code. */
typedef int (* zpl_scan_cmd_cb_CARET_BC)    (const char *orien, const int *height, const char *line, const char *line_above, const char *check_digit, const char *mode);

/* Configures the global bar code defaults. */
typedef int (* zpl_scan_cmd_cb_CARET_BY)    (const int *width, const float *width_ratio, const int *height);

/* Sets the current field's data string. This data is usually printed to the label as text or encoded as a bar code, depending on the field type. */
typedef int (* zpl_scan_cmd_cb_CARET_FD)    (const void *data, size_t size);

/* Sets the position of the top left corner of the current field. */
typedef int (* zpl_scan_cmd_cb_CARET_FO)    (const int *x, const int *y, const int *align);

/* Ends the current field and starts the next field. */
typedef int (* zpl_scan_cmd_cb_CARET_FS)    (void);

/* Configures the current field as a graphical box. */
typedef int (* zpl_scan_cmd_cb_CARET_GB)    (const int *width, const int *height, const int *thickness, const char *color, const int *rounding);

/* Configures inverted mode, which mirrors label content across a horizontal axis. */
typedef int (* zpl_scan_cmd_cb_CARET_PO)    (const char *orien);

/* Sets the label print width. */
typedef int (* zpl_scan_cmd_cb_CARET_PW)    (const int *width);

/* Begins a label definition. All label definitions must start with this command. */
typedef int (* zpl_scan_cmd_cb_CARET_XA)    (void);

/* Ends a label definition. All label definitions must end with this command. */
typedef int (* zpl_scan_cmd_cb_CARET_XZ)    (void);

typedef struct zpl_scan_cmd_cb_tab
{
    zpl_scan_cmd_cb_CARET_A     cmd_cb_CARET_A;
    zpl_scan_cmd_cb_CARET_BC    cmd_cb_CARET_BC;
    zpl_scan_cmd_cb_CARET_BY    cmd_cb_CARET_BY;
    zpl_scan_cmd_cb_CARET_FD    cmd_cb_CARET_FD;
    zpl_scan_cmd_cb_CARET_FO    cmd_cb_CARET_FO;
    zpl_scan_cmd_cb_CARET_FS    cmd_cb_CARET_FS;
    zpl_scan_cmd_cb_CARET_GB    cmd_cb_CARET_GB;
    zpl_scan_cmd_cb_CARET_PO    cmd_cb_CARET_PO;
    zpl_scan_cmd_cb_CARET_PW    cmd_cb_CARET_PW;
    zpl_scan_cmd_cb_CARET_XA    cmd_cb_CARET_XA;
    zpl_scan_cmd_cb_CARET_XZ    cmd_cb_CARET_XZ;
} zpl_scan_cmd_cb_tab_t;

#endif
