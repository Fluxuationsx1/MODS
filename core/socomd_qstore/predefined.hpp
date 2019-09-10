//Boolean
#define true 1
#define false 0

//Scope
#define private 0
#define protected 1
#define public 2

//Side
#define NO_SIDE -1
#define EAST 0
#define WEST 1
#define RESISTANCE 2
#define CIVILIAN 3
#define NEUTRAL 4
#define ENEMY 5
#define FRIENDLY 6
#define LOGIC 7

//BIS GUI Base Classes - https://community.bistudio.com/wiki/Dialog_Control#CONTROL_TYPES
#define CT_STATIC 0
#define CT_BUTTON 1
#define CT_EDIT 2
#define CT_SLIDER 3
#define CT_COMBO 4
#define CT_LISTBOX 5
#define CT_TOOLBOX 6
#define CT_CHECKBOXES 7
#define CT_PROGRESS 8
#define CT_HTML 9
#define CT_STATIC_SKEW 10
#define CT_ACTIVETEXT 11
#define CT_TREE 12
#define CT_STRUCTURED_TEXT 13
#define CT_CONTEXT_MENU 14
#define CT_CONTROLS_GROUP 15
#define CT_SHORTCUTBUTTON 16
#define CT_HITZONES 17
#define CT_VEHICLETOGGLES 18
#define CT_CONTROLS_TABLE 19
#define CT_XKEYDESC 40
#define CT_XBUTTON 41
#define CT_XLISTBOX 42
#define CT_XSLIDER 43
#define CT_XCOMBO 44
#define CT_ANIMATED_TEXTURE 45
#define CT_MENU 46
#define CT_MENU_STRIP 47
#define CT_CHECKBOX 77
#define CT_OBJECT 80
#define CT_OBJECT_ZOOM 81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK 98
#define CT_USER 99
#define CT_MAP 100
#define CT_MAP_MAIN 101
#define CT_LISTNBOX 102
#define CT_ITEMSLOT 103
#define CT_LISTNBOX_CHECKABLE 104
#define CT_VEHICLE_DIRECTION 105

//BIS Control Styles - https://community.bistudio.com/wiki/Dialog_Control#CONTROL_STYLES

#define ST_LEFT 0x00
#define ST_RIGHT 0x01
#define ST_CENTER 0x02
#define ST_DOWN 0x04
#define ST_UP 0x08
#define ST_VCENTER 0x0C
#define ST_SINGLE 0x00
#define ST_MULTI 0x10
#define ST_TITLE_BAR 0x20
#define ST_PICTURE 0x30
#define ST_FRAME 0x40
#define ST_BACKGROUND 0x50
#define ST_GROUP_BOX 0x60
#define ST_GROUP_BOX2 0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE 0x90
#define ST_WITH_RECT 0xA0
#define ST_LINE 0xB0
#define ST_UPPERCASE 0xC0
#define ST_LOWERCASE 0xD0
#define ST_ADDITIONAL_INFO 0x0F00
#define ST_SHADOW 0x0100
#define ST_NO_RECT 0x0200
#define ST_KEEP_ASPECT_RATIO 0x0800
#define ST_TITLE ST_TITLE_BAR + ST_CENTER
#define SL_VERT 0
#define SL_HORZ 0x400
#define SL_TEXTURES 0x10
#define ST_VERTICAL 0x01
#define ST_HORIZONTAL 0
#define LB_TEXTURES 0x10
#define LB_MULTI 0x20
#define TR_SHOWROOT 1
#define TR_AUTOCOLLAPSE 2

//UI Macros
#define REL_X(x) (x * safeZoneW)
#define REL_Y(y) (y * safeZoneH)

#define PX_X(w) (w * pixelW)
#define PX_Y(h) (h * pixelH)

#define RECT(posX, posY, sizeW, sizeH, originX, originY) \
x = safeZoneX + ((posX) - ((sizeW) * originX)); \
w = (sizeW); \
y = safeZoneY + ((posY) - ((sizeH) * (1 - originY))); \
h = (sizeH);

#define RECT_FILL \
x = safeZoneX; \
w = safeZoneW; \
y = safeZoneY; \
h = safeZoneH;

#define RECT_FILL_H(posX, sizeW, originX) \
x = safeZoneX + ((posX) - ((sizeW) * originX)); \
w = (sizeW); \
y = safeZoneY; \
h = safeZoneH;

#define RECT_FILL_W(posY, sizeH, originY) \
x = safeZoneX; \
w = safeZoneW; \
y = safeZoneY + ((posY) - ((sizeH) * (1 - originY))); \
h = (sizeH);