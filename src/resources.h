/*
 * SiEd - A text editor for PalmOS 3.5+ Copyright (C) 2003 Benjamin Roe
 * Contact Email:ben@benroe.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef RESOURCES_HPP
#define RESOURCES_HPP
enum SiReturnCode {ACTION_CANCELLED,ERROR,ACTION_OK};
#include "sys_types.h"
#include "sections.h"
#include <PalmOS.h>
#include <PalmTypes.h>
// forms
#define ResFileDialog 1002
#define ResformID_text 1000
#define ResCopyFileDialog 1020
#define ResRenameFileDialog 2510
#define ResSaveFileDialog 1250
#define ResFindDialog 1500
#define ResReplaceDialog 1800
#define ResPrefsDialog 2500
#define ResStatsDialog 3002
#define NewDirDialog 5002
#define PasswordDialog 5202
#define MacroForm 1099
#define AlphaKeyboardDialog 5100
#define NumKeyboardDialog 5200
#define MAIN_MENU 1200
// controls
#define PasteButton 1103
#define CopyButton 1102
#define FileList 1003
#define CopyFileField 1021
#define SaveFileField 1251
#define FindField 1501
#define FindMatchCaseCheck 1504
#define FindWholeWordCheck 1505
#define FindFromTopCheck 1509
#define ReplaceField 1801
#define ReplaceWithField 1810
#define ReplaceMatchCaseCheck 1804
#define ReplaceWholeWordCheck 1805
#define ReplaceFindLabel 1814
#define ReplaceWithLabel 1815

#define ReplaceFromTopCheck 1809
#define ScrollBarMain 2000
#define ScrollBarTop 2001
#define ScrollBarBottom 2002
#define OpenFileDirField 3006
#define OpenFileFileField 3003
#define RenameFileField 2511
#define RenameFileOldFileNameLabel 2514
#define NewDirField 5003
#define SelectionList 3009
#define CodesList 3013
#define CodesPopupTrigger 3012
#define SelectPopupTrigger 3007
#define AltCharField 1101
#define PasswordField 5203
#define EncryptionCheckbox 5207
#define PasswordFileLabel 5214
#define MacroList 1098
#define MacroOK 1094
#define MacroField 1095
#define KeyboardField 1102
#define PopupTriggerButton 3109
#define PopupMacroList 3107
#define PopupPositionListBottom 3108
#define PopupPositionListTop 3110
#define LoadModeList 3094
#define LoadModePopupTrigger 3095
#define MimeRegisterList 3019
#define MimeRegisterTrigger 3017
#define MimeRegisterLabel 3020

// alerts
#define FileTruncationAlert 1793
#define FileTooLargeAlert 1709
#define RevertFileAlert 1051
#define OverWriteFileAlert 1702
#define FileNotFoundAlert 1001
#define UnableToUndoAlert 1701
#define UnableToSaveAlert 1004
#define ConfirmDeleteAlert 1010
#define AboutAlert 1011
#define FileAccessAlert 1040
#define NewFileAlert 1050
#define MemoryAlert 1060
#define FuncAlert 1070
#define DebugAlert 2600
#define UnknownFormAlert 1270
#define ConfirmOpenOver 1400
#define NotSupportedAlert 1401
#define DatabaseAlert 1600
#define UnableToFind 1700
#define ScreenAlert 2001
#define NotImplemented 2601
#define ClipTrunc 2901
#define BenchMarkAlert 2506
#define InvalidFileName 3001
#define FileNotEncAlert 6004
#define UnableCreateDirAlert 1711
#define NoCompressedDocAlert 1712
#define MUST_ENTER_NAME 1713
#define DeleteMacro 1019
#define WrongPalmosVersion 1703
#define CloseFileAlert 1950
#define CloseFileSavedAlert 1951
// buttons
#define PasswordOK 5204
#define OpenFileButton 1005
#define DeleteFileButton 5009
#define CancelFileButton 1006
#define RenameFileButton 1007
#define CopyFileCopy 1022
#define CopyFileCancel 1023
#define RenameFileRename 2512
#define RenameFileCancel 2513
#define NewFileYes 0
#define DeleteYes 0
#define OverWriteNo 1
#define SaveFileSave 1252
#define OpenOverSave 0
#define FindFind 1502
#define FindCancel 1503
#define StatsCalc 3004
#define NewDirButton 1008
#define BenchMarkButton 2505
#define DecryptButton 5008
#define DeleteMacroButton 1097
#define NewDirCreate 5004
#define NewDirCancel 5005
#define ReplaceFindNext 1802
#define ReplaceReplace 1806
#define ReplaceReplaceAll 1807
#define ReplaceCancel 1803
#define PrefsOK 2503
#define DeleteMacroOK 0
#define RevertFileYes 0
#define ExitNoSave 0

//font controls
#define TinyFontButton 2601
#define SmallFontButton 2602
#define NarrowFixedFontButton 2603
#define StdFixedFontButton 2604

#define StdFontButton 2505
#define BoldFontButton 2506
#define LargeFontButton 2507
#define LargeBoldFontButton 2508

#define SmallHiresFontButton 2609
#define TinyHiresFontButton 2610
#define SmallBoldHiresFontButton 2611
#define StdFixedHiresFontButton 2612

#define LeftTopSectionButton 2003
#define RightTopSectionButton 2004
#define LeftBottomSectionButton 2005
#define RightBottomSectionButton 2006

// Menu constants
#define ViewMenuReadOnly 1283
#define FileMenu 1200
#define FileMenuClose 1599
#define FileMenuSave 1205
#define FileMenuSaveAs 1204
#define FileMenuManage 1224
#define FileMenuRevert 1227
#define FileMenuNew 1206
#define FileMenuList 1207
#define FileMenuAbout 1208
#define FileMenuStats 1223
#define FileMenuPrefs 1218
#define MacroMenuQuick 1296
#define EditMenuCopy 1201
#define EditMenuPaste 1202
#define EditMenuCut 1203
#define EditMenuUndo 1212
#define EditMenuRedo 1219
#define EditMenuKeyboard 1297
#define EditMenuIncSearch 1397
#define MemUsageMenu 1600
#define CursorMenuEnd 1209
#define CursorMenuHome 1210
#define CursorMenuDelLine 1211
#define CursorMenuEndDoc 1213
#define CursorMenuStartDoc 1214
#define CursorMenuSelectAll 3010
#define ViewMenuCacheStats 1999
#define SearchMenuFind 1215
#define SearchMenuFindAgain 1216
#define SearchMenuReplace 1217
#define ViewMenuSplit 1221
#define ViewMenuUnsplit 1222
#define MacroPlay 1299
#define MacroRecord 1399
#define MacroStop 1499

//Bitmaps
#define SDCARD_BITMAP 5006
#define UP_ARROW_BITMAP 5007
#define FOLDER_BITMAP 5001
#define PADLOCK_IMAGE_ID 5010
#define DRAG_ARROW_BITMAP 5097
#define SCROLL_UP_ARROW_BITMAP 5008
#define DOWN_ARROW_BITMAP 5009
#define UP_ARROW_PRESSED_BITMAP 5012
#define DOWN_ARROW_PRESSED_BITMAP 5011
#define LEFT_ARROW_BITMAP 5012
#define RIGHT_ARROW_BITMAP 5013
#define LEFT_ARROW_PRESSED_BITMAP 5014
#define RIGHT_ARROW_PRESSED_BITMAP 5015
// Events for Beaming
#define BeamMenuFile 1300
#define BeamMenuSiEd 1305
// #define COMMAND_LINE 13
#define WIDTH 152
#define ACTIVEWIDTH 151
#define TOTAL_WIDTH 160
#define BORDER 1
//#define __DEBUG__
#define THE_CARD 0

// positions
#define FILE_FORM_RIGHT 158
#define FONT stdFont

#define STATUS_DIS_X BORDER


#define PrefsID 1

// Palmos bits
#define AppID 'SiEd'
#define INITIAL_BLOCK_ARRAY_SIZE 128
#define PREFS_DATABASE "sied-prefs"
#define TAB_WIDTH 15
#define MAX_LENGTH 16000000
#define STEP_BUFFER_INCREASE 5
#define INITIAL_BUFFER_SIZE 30
#define NONE 65535
#define SIGNED_NONE -1

#define END_BUFFER -1
#define INITIAL_LINES_PER_BUFFER 20
#define MAX_PASTE_BLOCK 40
#define TEXT 0
#define LINE_FEED 4
#define TAB 5
#define CHR_SEL_THICK 2
//#define MAX_FILE_SIZE 1000000
#define FILE_0_1_0_TYPE -100
#define FILE_0_3_0_TYPE -200
#define ICON_WIDTH 18
#define RETURN_BITMAP_WIDTH 9
#define SMALL_RETURN_BITMAP_WIDTH 4
//Keyboard defines
#define MIN_KEYBOARD_KEY 5101
#define MAX_KEYBOARD_KEY 5332

#define NO_CODES 0
#define EOL_CODES 1
#define TAB_CODES 2
#define MIN_NUM_KEYBOARD_KEY 5140
#define MAX_NUM_KEYBOARD_KEY 5167

#define IntlKeyboardDialog 5300
#define IntlKeyboardDone 5450
#define SiRunTests 6785

#define alpha_Alpha_select 5451
#define AlphaKeyboardDone 5450
#define NumKeyboardDone 5468
#define MAX_FILENAME_LENGTH 31
#define WAITING_X 5
#define WAITING_Y 148
#define MIN_FREE_MEMORY 12000
#define MAX_REPLACE_FIELD_LENGTH 49
#define STATUS_BAR_HEIGHT 11
#define QUICK_SLOSH_SIZE 15

#define PROCESSING_INTERVAL 80

//DOC file constants
#define RECORD_SIZE 4096
#define DOC_TYPE 'TEXt'
#define DOC_CREATOR 'REAd'
#define DOC_HEADER_SIZE 16
#define HEADER_RECORD 0
#define UNCOMPRESSED_DOC 1
#define COMPRESSED_DOC 2

struct doc_header
{
	UInt16 version;
	UInt16 spare;
	UInt32 size;
	UInt16 num_records;
	UInt16 max_rec_size;
	UInt32 curr_pos;
} ;

//void *operator                    new(size_t s) __attribute__ ((section ("utilfns")));
//void operator                    delete(void *p) __attribute__ ((section ("utilfns")));
typedef UInt16 BlockInt;
#ifdef NEW_LINE_OPTIONS
enum {PALM_NEWLINE,WINDOWS_NEWLINE,MAC_NEWLINE};
#endif
enum {SIED_FILE,DOC_FILE,VFS_VOLUME,VFS_FILE,VFS_DIRECTORY,ROOT_DIRECTORY,MOVE_UP_DIR};
#define FILE_EXTENSIONS "TXT\tPHP\tHTML\thtm\tC\tCC\tCPP\t"
#define MIME_TYPE "text/plain"
#endif



#define LARGE_INSERT_TEXT "abcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefg"
