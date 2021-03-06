/*
 * This program source code file is part of KiCad, a free EDA CAD application.
 *
 * Copyright (C) 2008 Wayne Stambaugh <stambaughw@gmail.com>
 * Copyright (C) 2008-2017 KiCad Developers, see change_log.txt for contributors.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you may find one here:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 * or you may search the http://www.gnu.org website for the version 2 license,
 * or you may write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

/**
 * @file eeschema_id.h
 */

#ifndef __EESCHEMA_ID_H__
#define __EESCHEMA_ID_H__


#include <id.h>


/**
 * The maximum number of items in the clarify selection context menu.  While in
 * most cases it is highly unlikely that there would ever be more than 10 items
 * at the current cursor, there are some exceptions  (a bunch of pins created at
 * once, for instance).  The current setting of 200 is arbitrary.
 */
#define MAX_SELECT_ITEM_IDS 200

/**
 * The maximum number of units per package.
 * While counts approaching 100 start to make the unit-selection popup menu
 * difficult to use, the limit is currently 'ZZ' (26 * 26).
 */
#define MAX_UNIT_COUNT_PER_PACKAGE 676


/**
 * Command IDs for the schematic editor.
 *
 * Please add IDs that are unique to the schematic editor (Eeschema) here and
 * not in the global id.h file.  This will prevent the entire project from
 * being rebuilt when adding new command to Eeschema.
 */

enum id_eeschema_frm
{
    ID_UPDATE_ONE_SHEET = ID_END_LIST,
    ID_SAVE_ONE_SHEET_UNDER_NEW_NAME,
    ID_IMPORT_NON_KICAD_SCH,

    /* Schematic editor main menubar IDs. */
    ID_RESCUE_CACHED,
    ID_EDIT_SYM_LIB_TABLE,
    ID_REMAP_SYMBOLS,
    ID_EDIT_COMPONENTS_TO_SYMBOLS_LIB_ID,
    ID_GRID_SETTINGS,

    /* Schematic editor horizontal toolbar IDs */
    ID_HIERARCHY,
    ID_TO_LIBVIEW,
    ID_GET_ANNOTATE,
    ID_GET_ERC,
    ID_BACKANNO_ITEMS,
    ID_UPDATE_FIELDS,
    ID_GEN_PLOT_SCHEMATIC,

    /* Schematic editor vertical toolbar IDs */
    ID_SCHEMATIC_VERTICAL_TOOLBAR_START,
    ID_HIGHLIGHT,
    ID_SCH_PLACE_COMPONENT,
    ID_PLACE_POWER_BUTT,
    ID_BUS_BUTT,
    ID_WIRE_BUTT,
    ID_BUSTOBUS_ENTRY_BUTT,
    ID_WIRETOBUS_ENTRY_BUTT,
    ID_LABEL_BUTT,
    ID_GLABEL_BUTT,
    ID_HIERLABEL_BUTT,
    ID_IMPORT_HLABEL_BUTT,
    ID_SHEET_PIN_BUTT,
    ID_NOCONN_BUTT,
    ID_JUNCTION_BUTT,
    ID_SHEET_SYMBOL_BUTT,
    ID_TEXT_COMMENT_BUTT,
    ID_LINE_COMMENT_BUTT,
    ID_ADD_IMAGE_BUTT,
    ID_SCHEMATIC_DELETE_ITEM_BUTT,
    ID_SCHEMATIC_VERTICAL_TOOLBAR_END,

    // Schematic editor menu place IDs (equivalent to vertical toolbar IDs
    // for submenus.
    // On Windows we cannot use the same ID for 2 items in the same frame.
    // Usually it creates issues (wxASSERTS, item not displayed, ...)
    ID_SCHEMATIC_PLACE_MENU_START,
    ID_MENU_PLACE_COMPONENT,
    ID_MENU_PLACE_POWER_BUTT,
    ID_MENU_BUS_BUTT,
    ID_MENU_WIRE_BUTT,
    ID_MENU_BUSTOBUS_ENTRY_BUTT,
    ID_MENU_WIRETOBUS_ENTRY_BUTT,
    ID_MENU_LABEL_BUTT,
    ID_MENU_GLABEL_BUTT,
    ID_MENU_HIERLABEL_BUTT,
    ID_MENU_IMPORT_HLABEL_BUTT,
    ID_MENU_SHEET_PIN_BUTT,
    ID_MENU_NOCONN_BUTT,
    ID_MENU_JUNCTION_BUTT,
    ID_MENU_SHEET_SYMBOL_BUTT,
    ID_MENU_TEXT_COMMENT_BUTT,
    ID_MENU_LINE_COMMENT_BUTT,
    ID_MENU_ADD_IMAGE_BUTT,
    ID_MENU_DELETE_ITEM_BUTT,
    ID_SCHEMATIC_PLACE_MENU_END,

    // Toolbar options id:
    ID_TB_OPTIONS_HIDDEN_PINS,
    ID_TB_OPTIONS_BUS_WIRES_ORIENT,

    /* Schematic editor context menu IDs. */
    ID_POPUP_SCH_DUPLICATE_ITEM,

    ID_POPUP_START_RANGE,
    ID_POPUP_SCH_DELETE,
    ID_POPUP_SCH_BREAK_WIRE,
    ID_POPUP_SCH_BEGIN_WIRE,
    ID_POPUP_SCH_BEGIN_BUS,
    ID_POPUP_END_LINE,
    ID_POPUP_SCH_DELETE_CONNECTION,
    ID_POPUP_SCH_DELETE_NODE,
    ID_POPUP_SCH_DELETE_CMP,
    ID_POPUP_SCH_ENTRY_SELECT_SLASH,
    ID_POPUP_SCH_ENTRY_SELECT_ANTISLASH,

    ID_POPUP_SCH_INIT_CMP,

    ID_POPUP_SCH_SET_SHAPE_TEXT,
    ID_POPUP_SCH_END_SHEET,
    ID_POPUP_SCH_RESIZE_SHEET,
    ID_POPUP_SCH_CLEANUP_SHEET,
    ID_POPUP_IMPORT_HLABEL_TO_SHEETPIN,
    ID_POPUP_SCH_GENERIC_ORIENT_CMP,
    ID_POPUP_SCH_GENERIC_EDIT_CMP,
    ID_POPUP_SCH_EDIT_CONVERT_CMP,
    ID_POPUP_SCH_EDIT_FIELD,
    ID_POPUP_SCH_ENTER_SHEET,
    ID_POPUP_SCH_LEAVE_SHEET,
    ID_POPUP_SCH_SELECT_ON_PCB,
    ID_POPUP_SCH_ADD_JUNCTION,
    ID_POPUP_SCH_ADD_LABEL,
    ID_POPUP_SCH_ADD_GLABEL,
    ID_POPUP_SCH_GETINFO_MARKER,
    ID_POPUP_END_RANGE,

    ID_POPUP_SCH_DISPLAYDOC_CMP,
    ID_POPUP_SCH_CALL_LIBEDIT_AND_LOAD_CMP,

    // Unit select context menus command IDs.
    ID_POPUP_SCH_SELECT_UNIT_CMP,
    ID_POPUP_SCH_SELECT_UNIT1,
    // ... leave room for MAX_UNIT_COUNT_PER_PACKAGE IDs ,
    // to select one unit among MAX_UNIT_COUNT_PER_PACKAGE in popup menu
    ID_POPUP_SCH_SELECT_UNIT_CMP_MAX = ID_POPUP_SCH_SELECT_UNIT1
                                       + MAX_UNIT_COUNT_PER_PACKAGE,

    // Change text type context menu command IDs.
    ID_POPUP_SCH_CHANGE_TYPE_TEXT,
    ID_POPUP_SCH_CHANGE_TYPE_TEXT_TO_LABEL,
    ID_POPUP_SCH_CHANGE_TYPE_TEXT_TO_GLABEL,
    ID_POPUP_SCH_CHANGE_TYPE_TEXT_TO_HLABEL,
    ID_POPUP_SCH_CHANGE_TYPE_TEXT_TO_COMMENT,

    ID_SELECT_ITEM_START,
    ID_SELECT_ITEM_END = ID_SELECT_ITEM_START + MAX_SELECT_ITEM_IDS,

    // Change orientation command IDs.
    ID_SCH_MIRROR_X,
    ID_SCH_MIRROR_Y,
    ID_SCH_ORIENT_NORMAL,

    ID_SCH_ROTATE_CLOCKWISE,
    ID_SCH_ROTATE_COUNTERCLOCKWISE,
    ID_SCH_EDIT_ITEM,
    ID_SCH_EDIT_COMPONENT_VALUE,
    ID_SCH_EDIT_COMPONENT_REFERENCE,
    ID_SCH_EDIT_COMPONENT_FOOTPRINT,
    ID_SCH_MOVE_ITEM,
    ID_SCH_DRAG_ITEM,

    ID_AUTOPLACE_FIELDS,

    // Schematic editor commmands.  These are command IDs that are generated by multiple
    // events (menus, toolbar, context menu, etc.) that result in the same event handler.
    ID_CANCEL_CURRENT_COMMAND,

    ID_HOTKEY_HIGHLIGHT,

    /* Library editor: edit events */
    ID_LIBEDIT_NEW_LIBRARY,
    ID_LIBEDIT_ADD_LIBRARY,
    ID_LIBEDIT_SAVE,
    ID_LIBEDIT_SAVE_AS,
    ID_LIBEDIT_SAVE_ALL,
    ID_LIBEDIT_REVERT,
    ID_LIBEDIT_NEW_PART,
    ID_LIBEDIT_EDIT_PART,
    ID_LIBEDIT_IMPORT_PART,
    ID_LIBEDIT_EXPORT_PART,
    ID_LIBEDIT_REMOVE_PART,
    ID_LIBEDIT_CUT_PART,
    ID_LIBEDIT_COPY_PART,
    ID_LIBEDIT_PASTE_PART,
    ID_LIBEDIT_DUPLICATE_PART,

    /* Library editor horizontal toolbar IDs. */
    ID_DE_MORGAN_NORMAL_BUTT,
    ID_DE_MORGAN_CONVERT_BUTT,
    ID_LIBEDIT_SYNC_PIN_EDIT,
    ID_LIBEDIT_EDIT_PIN_BY_TABLE,
    ID_LIBEDIT_VIEW_DOC,
    ID_LIBEDIT_CHECK_PART,
    ID_LIBEDIT_GET_FRAME_EDIT_PART,

    ID_LIBEDIT_SELECT_PART_NUMBER,
    ID_LIBEDIT_SELECT_ALIAS,

    /* Library editor vertical toolbar IDs. */
    ID_LIBEDIT_PIN_BUTT,
    ID_LIBEDIT_BODY_LINE_BUTT,
    ID_LIBEDIT_BODY_ARC_BUTT,
    ID_LIBEDIT_BODY_CIRCLE_BUTT,
    ID_LIBEDIT_BODY_RECT_BUTT,
    ID_LIBEDIT_BODY_TEXT_BUTT,
    ID_LIBEDIT_ANCHOR_ITEM_BUTT,
    ID_LIBEDIT_IMPORT_BODY_BUTT,
    ID_LIBEDIT_EXPORT_BODY_BUTT,
    ID_LIBEDIT_DELETE_ITEM_BUTT,

    /* Change orientation command ID */
    ID_LIBEDIT_ROTATE_ITEM,
    ID_LIBEDIT_MIRROR_X,
    ID_LIBEDIT_MIRROR_Y,
    ID_LIBEDIT_ORIENT_NORMAL,

    /* Library editor context menu IDs */
    ID_LIBEDIT_EDIT_PIN,
    ID_POPUP_LIBEDIT_PIN_GLOBAL_CHANGE_ITEM,
    ID_POPUP_LIBEDIT_PIN_GLOBAL_CHANGE_PINSIZE_ITEM,
    ID_POPUP_LIBEDIT_PIN_GLOBAL_CHANGE_PINNAMESIZE_ITEM,
    ID_POPUP_LIBEDIT_PIN_GLOBAL_CHANGE_PINNUMSIZE_ITEM,
    ID_POPUP_LIBEDIT_BODY_EDIT_ITEM,
    ID_POPUP_LIBEDIT_DELETE_ITEM,
    ID_POPUP_LIBEDIT_MODIFY_ITEM,
    ID_POPUP_LIBEDIT_END_CREATE_ITEM,
    ID_POPUP_LIBEDIT_CANCEL_EDITING,
    ID_POPUP_LIBEDIT_MOVE_ITEM_REQUEST,
    ID_POPUP_LIBEDIT_FIELD_EDIT_ITEM,
    ID_POPUP_LIBEDIT_DELETE_CURRENT_POLY_SEGMENT,

    /* Library editor toolbar options IDs */
    ID_LIBEDIT_SHOW_ELECTRICAL_TYPE,
    ID_LIBEDIT_SHOW_HIDE_SEARCH_TREE,

    /* Library editor menubar IDs */
    ID_LIBEDIT_GEN_PNG_FILE,
    ID_LIBEDIT_GEN_SVG_FILE,

    /* Library viewer horizontal toolbar IDs */
    ID_LIBVIEW_SELECT_PART,
    ID_LIBVIEW_NEXT,
    ID_LIBVIEW_PREVIOUS,
    ID_LIBVIEW_VIEWDOC,
    ID_LIBVIEW_DE_MORGAN_NORMAL_BUTT,
    ID_LIBVIEW_DE_MORGAN_CONVERT_BUTT,
    ID_LIBVIEW_SELECT_PART_NUMBER,
    ID_LIBVIEW_LIB_LIST,
    ID_LIBVIEW_CMP_LIST,
    ID_LIBVIEW_LIBWINDOW,
    ID_LIBVIEW_CMPWINDOW,
    ID_LIBVIEW_CMP_EXPORT_TO_SCHEMATIC,
    ID_SET_RELATIVE_OFFSET,
    ID_LIBVIEW_SHOW_ELECTRICAL_TYPE,

    ID_UPDATE_PCB_FROM_SCH,
    ID_UPDATE_SCH_FROM_PCB,

    ID_SIM_RUN,
    ID_SIM_TUNE,
    ID_SIM_PROBE,
    ID_SIM_SETTINGS,
    ID_SIM_ADD_SIGNALS,
    ID_SIM_SHOW,

    ID_END_EESCHEMA_ID_LIST
};


#endif  /* __EESCHEMA_ID_H__ */
