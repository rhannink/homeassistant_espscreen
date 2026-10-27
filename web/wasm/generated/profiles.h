// Generated firmware profile dispatch.
#include "font.h"
struct FirmwareUi { lv_obj_t *room, *time, *prev, *next, *number; void (*bind)(); void (*cells)(); const char *look; };
namespace standard_118 {
#include "standard_118/ui.h"
}
namespace standard_133 {
#include "standard_133/ui.h"
}
namespace compact_143 {
#include "compact_143/ui.h"
}
namespace compact_146 {
#include "compact_146/ui.h"
}
namespace standard_149 {
#include "standard_149/ui.h"
}
namespace compact_165 {
#include "compact_165/ui.h"
}
namespace standard_165 {
#include "standard_165/ui.h"
}
namespace standard_170 {
#include "standard_170/ui.h"
}
namespace standard_187 {
#include "standard_187/ui.h"
}
namespace standard_189 {
#include "standard_189/ui.h"
}
namespace compact_196 {
#include "compact_196/ui.h"
}
namespace standard_217 {
#include "standard_217/ui.h"
}
namespace standard_254 {
#include "standard_254/ui.h"
}
namespace standard_255 {
#include "standard_255/ui.h"
}
namespace standard_294 {
#include "standard_294/ui.h"
}
static FirmwareUi setup_firmware_ui(lv_obj_t *root, int dpi, int look) {
if (dpi == 118 && (look == 0 || look == 2)) { using namespace standard_118; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 133 && (look == 0 || look == 2)) { using namespace standard_133; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 143 && (look == 0 || look == 1)) { using namespace compact_143; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "compact"}; }
if (dpi == 146 && (look == 0 || look == 1)) { using namespace compact_146; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "compact"}; }
if (dpi == 149 && (look == 0 || look == 2)) { using namespace standard_149; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 165 && (look == 0 || look == 2)) { using namespace standard_165; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 165 && (look == 0 || look == 1)) { using namespace compact_165; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "compact"}; }
if (dpi == 170 && (look == 0 || look == 2)) { using namespace standard_170; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 187 && (look == 0 || look == 2)) { using namespace standard_187; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 189 && (look == 0 || look == 2)) { using namespace standard_189; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 196 && (look == 0 || look == 1)) { using namespace compact_196; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "compact"}; }
if (dpi == 217 && (look == 0 || look == 2)) { using namespace standard_217; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 254 && (look == 0 || look == 2)) { using namespace standard_254; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 255 && (look == 0 || look == 2)) { using namespace standard_255; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
if (dpi == 294 && (look == 0 || look == 2)) { using namespace standard_294; setup_firmware_ui(root);
return {lbl_room, lbl_time, page_prev, page_next, page_number, bind_firmware_ui, setup_firmware_cells, "standard"}; }
return {};
}
