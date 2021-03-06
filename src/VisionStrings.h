/*
 * The contents of this file are subject to the Mozilla Public 
 * License Version 1.1 (the "License"); you may not use this file 
 * except in compliance with the License. You may obtain a copy of 
 * the License at http://www.mozilla.org/MPL/ 
 * 
 * Software distributed under the License is distributed on an "AS 
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or 
 * implied. See the License for the specific language governing 
 * rights and limitations under the License. 
 * 
 * The Original Code is Vision. 
 * 
 * The Initial Developer of the Original Code is The Vision Team.
 * Portions created by The Vision Team are
 * Copyright (C) 1999, 2000, 2001 The Vision Team.  All Rights
 * Reserved.
 * 
 * Contributor(s): Wade Majors <wade@ezri.org>
 *                 Rene Gollent
 *                 Todd Lair
 *                 Andrew Bazan
 *                 Jamie Wilkinson
 */

#ifndef _VISIONSTRINGS_H_
#define _VISIONSTRINGS_H_

// channel agent

#define S_CHANNEL_INIT              "*** Now talking in "
#define S_CHANNEL_REJOIN            "*** Attempting to rejoin "
#define S_CHANNEL_RECON_REJOIN      "[@] Attempting to rejoin"
#define S_CHANNEL_GOT_KICKED        "*** You have been kicked from "
#define S_CHANNEL_GOT_KICKED2       "by"
#define S_CHANNEL_SET_MODE          " set mode "

// channel options

#define S_CHANOPTS_TITLE            " Options"
#define S_CHANOPTS_OPID1            "You are currently a channel operator. "
#define S_CHANOPTS_OPID2            "You may change any of these options."

// client agent

#define S_CLIENT_DCC_SUCCESS        "Completed "
#define S_CLIENT_DCC_FAILED         "Terminated "
#define S_CLIENT_DCC_SENDTYPE       "send of "
#define S_CLIENT_DCC_RECVTYPE       "receive of "
#define S_CLIENT_DCC_TO             " to "
#define S_CLIENT_DCC_FROM           " from "
#define S_CLIENT_DCC_SIZE_UNITS     " bytes"
#define S_CLIENT_DCC_SPEED_UNITS    " cps"

// client window

#define S_CW_APP_ABOUT              "About"
#define S_CW_APP_PREFS              "Preferences"
#define S_CW_APP_CHANLIST           "List channels"
#define S_CW_APP_TERMINAL           "New terminal"
#define S_CW_APP_QUIT               "Quit"
#define S_CW_SERVER_MENU            "Server"
#define S_CW_SERVER_CONNECT         "Connect to"
#define S_CW_SERVER_SETUP           "Setup"
#define S_CW_EDIT_MENU              "Edit"
#define S_CW_EDIT_CUT               "Cut"
#define S_CW_EDIT_COPY              "Copy"
#define S_CW_EDIT_PASTE             "Paste"
#define S_CW_EDIT_SELECT_ALL        "Select all"
#define S_CW_WINDOW_MENU            "Window"
#define S_CW_WINDOW_PART            "Close subwindow"
#define S_CW_WINDOW_UP              "Up"
#define S_CW_WINDOW_DOWN            "Down"
#define S_CW_WINDOW_SM_UP           "Smart up"
#define S_CW_WINDOW_SM_DOWN         "Smart down"
#define S_CW_WINDOW_NETWORK         "Network window"
#define S_CW_WINDOW_PREVIOUS        "Previous window"
#define S_CW_WINDOW_NET_UP          "Move network up"
#define S_CW_WINDOW_NET_DOWN        "Move network down"
#define S_CW_WINDOW_COLLAPSE        "Collapse network"
#define S_CW_WINDOW_EXPAND          "Expand network"

// client window dock

#define S_CWD_WINLIST_HEADER        "Window list"
#define S_CWD_NOTIFY_HEADER         "Notify list"

// DCC messages

#define S_DCC_SPEED                 "bps: "
#define S_DCC_ESTABLISH_ERROR       "Unable to establish connection."
#define S_DCC_ESTABLISH_SUCCEEDED   "Established connection."
#define S_DCC_CONNECT_TO_SENDER     "Connecting to sender."
#define S_DCC_RECV1                 "Receiving \""
#define S_DCC_RECV2                 "\" from "
#define S_DCC_SEND1                 "Sending \""
#define S_DCC_SEND2                 "\" to "
#define S_DCC_LOCK_ACQUIRE          "Acquiring DCC lock"
#define S_DCC_ACK_WAIT              "Waiting for acceptance"
#define S_DCC_LISTEN_CALL           "Doing listen call."
#define S_DCC_WAIT_FOR_CONNECTION   "Waiting for connection "
#define S_DCC_WRITE_ERROR           "Error writing data."
#define S_DCC_SOCKET_ERROR          "Error creating socket.\n"
#define S_DCC_BIND_ERROR            "Error binding socket.\n"
#define S_DCC_CONN_ERROR            "Error connecting socket.\n"
#define S_DCC_CHAT_LISTEN           "Accepting connection on address "
#define S_DCC_CHAT_TRY              "Trying to connect to address "
#define S_DCC_CHAT_PORT             ", port "
#define S_DCC_CHAT_CONNECTED        "Connected!\n"
#define S_DCC_CHAT_TERM             "DCC chat terminated.\n"

// list agent

#define S_LIST_MENU                 "Channels"
#define S_LIST_MENU_FIND            "Find"
#define S_LIST_MENU_FINDNEXT        "Find next"
#define S_LIST_MENU_FILTER          "Filter"
#define S_LIST_COLUMN_CHAN          "Channel"
#define S_LIST_COLUMN_USER          "Users"
#define S_LIST_COLUMN_TOPIC         "Topic"
#define S_LIST_STATUS_LOADING       "Loading"
#define S_LIST_STATUS_DONE          "Done"
#define S_LIST_PROMPT_TITLE         "Find"
#define S_LIST_PROMPT_LABEL         "    Find:"

// network prefs -- server list

#define S_PREFSERVER_STATUS_COLUMN  "Status"
#define S_PREFSERVER_SERVER_COLUMN  "Server"
#define S_PREFSERVER_PORT_COLUMN    "Port"
#define S_PREFSERVER_ADD_BUTTON     "Add"
#define S_PREFSERVER_REMOVE_BUTTON  "Remove"
#define S_PREFSERVER_EDIT_BUTTON    "Edit"
#define S_PREFSERVER_DESC1          "Key: "
#define S_PREFSERVER_DESC2          "  * = primary"
#define S_PREFSERVER_DESC3          "  + = secondary (fallback)"
#define S_PREFSERVER_DESC4          "  - = disabled"
#define S_PREFSERVER_OK_BUTTON      "OK"
#define S_PREFSERVER_SEL_STRING     "Select servers for "

// network prefs -- main view

#define S_NETPREFS_NETMENU          "Networks"
#define S_NETPREFS_DEFAULTS_ITEM    "Defaults"
#define S_NETPREFS_ADD_NEW          "Add new"
#define S_NETPREFS_REMOVE           "Remove current"
#define S_NETPREFS_DUPE             "Duplicate current"
#define S_NETPREFS_NET_BOX          "Network details"
#define S_NETPREFS_PERSONAL_BOX     "Personal details"
#define S_NETPREFS_CONN1            "Will connect to"
#define S_NETPREFS_CONN2            "falling back to 9 others."
#define S_NETPREFS_CHANGE_SERVER    "Change servers"
#define S_NETPREFS_AUTOEXEC         "Autoexec:"
#define S_NETPREFS_LAG_CHECK        "Enable lag checking"
#define S_NETPREFS_STARTUP_CONN     "Connect to this network when Vision starts up"
#define S_NETPREFS_USE_DEFAULTS     "Use defaults"
#define S_NETPREFS_PREFNICK         "Preferred nicks:"
#define S_NETPREFS_ADD_BUTTON       "Add"
#define S_NETPREFS_REMOVE_BUTTON    "Remove"
#define S_NETPREFS_IDENT            "Ident: "
#define S_NETPREFS_REALNAME         "Real name: "
#define S_NETPREFS_FALLBACK1        "falling back to "
#define S_NETPREFS_FALLBACK2        " other"
#define S_NETPREFS_FALLBACK2_PLURAL "s"
#define S_NETPREFS_ADDNET_TITLE     "Add network"
#define S_NETPREFS_DUPENET_TITLE    "Duplicate network"
#define S_NETPREFS_NET_PROMPT       "Network name: "
#define S_NETPREFS_ADDNICK_TITLE    "Add nickname"
#define S_NETPREFS_ADDNICK_PROMPT   "Nickname: "

// network windows

#define S_NETWORK_WINDOW_TITLE      "Network setup"
#define S_SERVERPREFS_TITLE         "Servers"

// notify list

#define S_NOTIFYLIST_QUERY_ITEM     "Query"
#define S_NOTIFYLIST_WHOIS_ITEM     "Whois"
#define S_NOTIFYLIST_REMOVE_ITEM    "Remove"
#define S_NOTIFYLIST_DCC_ITEM       "DCC chat"
// command parser

#define S_PCMD_PARAMETER_ERROR      "Error: Invalid parameters"
#define S_PCMD_SEND_TITLE           "Sending a file to "
#define S_PCMD_SEND_BUTTON          "Send"
#define S_PCMD_TRY_NEW_NICK         "*** Trying new nick "
#define S_PCMD_SET_BOOL_SUCCESS     "Bool has been set"
#define S_PCMD_SET_BOOL_FAILURE     "Error setting bool"
#define S_PCMD_DNS1                 "Resolved "
#define S_PCMD_DNS2                 " to "
#define S_PCMD_DNS_ERROR            "Unable to resolve "
#define S_PCMD_PEXEC_ERROR          "/pexec: command failed"
#define S_PCMD_VIS_UPTIME           "Vision has been running for "
// ctcp parser

#define S_PCTCP_RESPONSE            " response"
#define S_PCTCP_SECOND              "second"
#define S_PCTCP_SECOND_PLURAL       "seconds"

// numerics parser

#define S_PENUM_CURMODE             "[x] your current mode is: "
#define S_PENUM_WHOWAS              "[was]"
#define S_PENUM_IDLE                "Idle: "
#define S_PENUM_SIGNON              "Signon: "
#define S_PENUM_WHOIS_CHANNELS      "[x] Channels: "
#define S_PENUM_CHANMODE            "*** Channel mode for "
#define S_PENUM_MLOCK               "*** Channel lock for "
#define S_PENUM_CHANCREATED         "created"
#define S_PENUM_NO_TOPIC            "[x] No topic set in "
#define S_PENUM_DISP_TOPIC          "*** Topic: "
#define S_PENUM_TOPIC_SET_BY        "*** Topic set by "
#define S_PENUM_INVITING            " has been invited to "
#define S_PENUM_NAMEREPLY           "*** Users in "
#define S_PENUM_SERVER_MOTD         "- Server Message Of The Day:"
#define S_PENUM_RECON_SUCCESS       "[@] Successful reconnect"
#define S_PENUM_NICKINUSE1          "* Nickname \""
#define S_PENUM_NICKINUSE2          "\" in use or unavailable.. trying \""
#define S_PENUM_NICKINUSE3          "[x] Nickname/Channel "
#define S_PENUM_NICKINUSE4          " is already in use or unavailable."
#define S_PENUM_ALLNICKSUSED1       "* All your pre-selected nicknames are in use."
#define S_PENUM_ALLNICKSUSED2       "* Please type /NICK <NEWNICK> to try another."
#define S_PENUM_NOTINCHANNEL        " is not in "
#define S_PENUM_ME_NOTINCHANNEL     "[x] You're not in "
#define S_PENUM_ALREADYINCHANNEL    " is already in "
#define S_PENUM_KEY_ALREADY_SET     "[x] Channel key already set in "
#define S_PENUM_UNKNOWNCHANMODE     "[x] Unknown channel mode: '"
#define S_PENUM_INVITE_ONLY         " (invite only)"
#define S_PENUM_BANNED              " (you're banned)"
#define S_PENUM_BADCHANKEY          " (bad channel key)"
#define S_PENUM_UNKNOWNMODE         "[x] Unknown MODE flag."

// events parser

#define S_PEVENTS_UMODE_CHANGE      "*** User mode changed: "
#define S_PEVENTS_INVITE1           "*** You have been invited to "
#define S_PEVENTS_INVITE2           " by "
#define S_PEVENTS_SILENCE_ADDED     "*** Hostmask added to SILENCE list: "
#define S_PEVENTS_SILENCE_REMOVED   "*** Hostmask removed from SILENCE list: "

// alias prefs

#define S_PREFALIAS_COLUMN_NAME     "Name"
#define S_PREFALIAS_COLUMN_ALIAS    "Alias"
#define S_PREFALIAS_ADD             "Add"
#define S_PREFALIAS_REMOVE          "Remove"

// app prefs

#define S_PREFAPP_VERSION_PARANOID  "Show OS information in version reply"
#define S_PREFAPP_CMDW              "Require double CMD+Q/W to close"
#define S_PREFAPP_STRIP_MIRC        "Strip mIRC colors"
#define S_PREFAPP_WARN_MULTILINE    "Warn when multiline pasting"
#define S_PREFAPP_QUERY_MSG         "Open new query on message"

// color prefs

#define S_PREFCOLOR_TEXT            "Text"
#define S_PREFCOLOR_BACKGROUND      "Background"
#define S_PREFCOLOR_URL             "URL"
#define S_PREFCOLOR_SERVERTEXT      "Server text"
#define S_PREFCOLOR_NOTICE          "Notice"
#define S_PREFCOLOR_ACTION          "Action"
#define S_PREFCOLOR_QUIT            "Quit"
#define S_PREFCOLOR_ERROR           "Error"
#define S_PREFCOLOR_NICK_EDGES      "Nickname edges"
#define S_PREFCOLOR_UNICK_EDGES     "User nickname edges"
#define S_PREFCOLOR_NICK_TEXT       "Nickname text"
#define S_PREFCOLOR_JOIN            "Join"
#define S_PREFCOLOR_KICK            "Kick"
#define S_PREFCOLOR_WHOIS           "Whois"
#define S_PREFCOLOR_NAMES_NORM      "Names (normal)"
#define S_PREFCOLOR_NAMES_OP        "Names (OP)"
#define S_PREFCOLOR_NAMES_HELP      "Names (helper)"
#define S_PREFCOLOR_NAMES_VOICE     "Names (voice)"
#define S_PREFCOLOR_NAMES_SEL       "Names selection"
#define S_PREFCOLOR_NAMES_BG        "Names background"
#define S_PREFCOLOR_CTCP_REQ        "CTCP request"
#define S_PREFCOLOR_CTCP_RPY        "CTCP reply"
#define S_PREFCOLOR_IGNORE          "Ignore"
#define S_PREFCOLOR_INPUT_TXT       "Input text"
#define S_PREFCOLOR_INPUT_BG        "Input background"
#define S_PREFCOLOR_WLIST_NORM      "Winlist normal status"
#define S_PREFCOLOR_WLIST_TXT       "Winlist text status"
#define S_PREFCOLOR_WLIST_NICK      "Winlist nick alert status"
#define S_PREFCOLOR_WLIST_SEL       "Winlist selection status"
#define S_PREFCOLOR_WLIST_EVT       "Winlist event status"
#define S_PREFCOLOR_WLIST_BG        "Winlist background"
#define S_PREFCOLOR_WALLOPS         "Wallops"
#define S_PREFCOLOR_TIMESTAMP       "Timestamp"
#define S_PREFCOLOR_TIMESTAMP_BG    "Timestamp background"
#define S_PREFCOLOR_SELECTION       "Selection"
#define S_PREFCOLOR_MIRCWHITE       "mIRC white"
#define S_PREFCOLOR_MIRCBLACK       "mIRC black"
#define S_PREFCOLOR_MIRCDBLUE       "mIRC dark blue"
#define S_PREFCOLOR_MIRCGREEN       "mIRC green"
#define S_PREFCOLOR_MIRCRED         "mIRC red"
#define S_PREFCOLOR_MIRCBROWN       "mIRC brown"
#define S_PREFCOLOR_MIRCPURPLE      "mIRC purple"
#define S_PREFCOLOR_MIRCORANGE      "mIRC orange"      
#define S_PREFCOLOR_MIRCYELLOW      "mIRC yellow"
#define S_PREFCOLOR_MIRCLIME        "mIRC lime"
#define S_PREFCOLOR_MIRCTEAL        "mIRC teal"
#define S_PREFCOLOR_MIRCAQUA        "mIRC aqua"
#define S_PREFCOLOR_MIRCLBLUE       "mIRC light blue"
#define S_PREFCOLOR_MIRCPINK        "mIRC pink"
#define S_PREFCOLOR_MIRCGREY        "mIRC grey"
#define S_PREFCOLOR_MIRCSILVER      "mIRC silver"
#define S_PREFCOLOR_NOTIFY_ON       "Notify online"
#define S_PREFCOLOR_NOTIFY_OFF      "Notify offline"
#define S_PREFCOLOR_NOTIFY_BG       "Notify list background"
#define S_PREFCOLOR_NOTIFY_SEL      "Notify list selection"
#define S_PREFCOLOR_REVERT          "Revert"

// command prefs

#define S_PREFCOMMAND_QUIT          "Quit:"
#define S_PREFCOMMAND_KICK          "Kick:"
#define S_PREFCOMMAND_IGNORE        "Ignore:"
#define S_PREFCOMMAND_UNIGNORE      "Unignore:"
#define S_PREFCOMMAND_AWAY          "Away:"
#define S_PREFCOMMAND_BACK          "Back:"
#define S_PREFCOMMAND_UPTIME        "Uptime:"

// dcc prefs

#define S_PREFDCC_BLOCK_SIZE        "DCC block size: "
#define S_PREFDCC_AUTOACK           "Automatically accept incoming sends"
#define S_PREFDCC_PRIVATE           "Automatically check for NAT IP"
#define S_PREFDCC_DEFPATH           "Default path: "
#define S_PREFDCC_PORTRANGE         "DCC port range"
#define S_PREFDCC_PORTMIN           "Min: "
#define S_PREFDCC_PORTMAX           "Max: "

// event prefs

#define S_PREFEVENT_JOIN            "Join:"
#define S_PREFEVENT_PART            "Part:"
#define S_PREFEVENT_NICK            "Nick:"
#define S_PREFEVENT_QUIT            "Quit:"
#define S_PREFEVENT_KICK            "Kick:"
#define S_PREFEVENT_TOPIC           "Topic:"
#define S_PREFEVENT_SNOTICE         "Server notice:"
#define S_PREFEVENT_UNOTICE         "User notice:"
#define S_PREFEVENT_NOTIFYON        "Notify on:"
#define S_PREFEVENT_NOTIFYOFF       "Notify off:"

// font prefs

#define S_PREFFONT_TEXT             "Text"
#define S_PREFFONT_SMESSAGES        "Server messages"
#define S_PREFFONT_URLS             "URLs"
#define S_PREFFONT_NAMESLIST        "Names list"
#define S_PREFFONT_INPUT_TEXT       "Input text"
#define S_PREFFONT_WINLIST          "Window list"
#define S_PREFFONT_CHANLIST         "Channel list"
#define S_PREFFONT_TSTAMP           "Timestamp"
#define S_PREFFONT_FONTLABEL        "Font: "
#define S_PREFFONT_SIZELABEL        "Size: "

// log prefs

#define S_PREFLOG_LOGPATH           "Log base path:"
#define S_PREFLOG_TS_FORMAT         "Timestamp format:"
#define S_PREFLOG_SHOW_TIMESTAMP    "Show timestamps in IRC window"
#define S_PREFLOG_USE_LOGGING       "Enable logging"
#define S_PREFLOG_LOG_TIMESTAMP     "Append timestamp to log filenames"
#define S_PREFLOG_ALERT_TITLE       "Error"
#define S_PREFLOG_ALERT_TEXT        "The log path you have entered is invalid."
#define S_PREFLOG_ALERT_BUTTON      "OK"
#define S_PREFLOG_DELETE_LOGS		"Delete Log Files"

// main prefs view

#define S_PREFGEN_ALIAS_ITEM        "Aliases"
#define S_PREFGEN_APP_ITEM          "Application"
#define S_PREFGEN_COLOR_ITEM        "Colors"
#define S_PREFGEN_FONT_ITEM         "Fonts"
#define S_PREFGEN_COMMAND_ITEM      "Commands"
#define S_PREFGEN_EVENT_ITEM        "Events"
#define S_PREFGEN_DCC_ITEM          "DCC"
#define S_PREFGEN_LOG_ITEM          "Logging"

// preferences window

#define S_PREFSWIN_TITLE            "Preferences"

// server agent

#define S_SERVER_ATTEMPT1           "[@] Attempting to "
#define S_SERVER_ATTEMPT2           "re"
#define S_SERVER_ATTEMPT3           "connect (attempt "
#define S_SERVER_ATTEMPT4           " of "
#define S_SERVER_ATTEMPT5           "[@] Attempting a connection to "
#define S_SERVER_CONN_ERROR1        "[@] Could not create connection to address and port. Make sure your internet connection is operational."
#define S_SERVER_CONN_ERROR2        "[@] Could not establish a connection to the server. Sorry."
#define S_SERVER_CONN_OPEN          "[@] Connection open, waiting for reply from server"
#define S_SERVER_LOCALIP_ERROR      "[@] Error getting local IP"
#define S_SERVER_LOCALIP            "[@] Local IP: "
#define S_SERVER_PROXY_MSG          "[@] (It looks like you are behind an internet gateway. Vision will query the IRC server upon successful connection for your gateway's internet address. This will be used for DCC communication.)"
#define S_SERVER_PASS_MSG           "[@] Sending password"
#define S_SERVER_HANDSHAKE          "[@] Handshaking"
#define S_SERVER_ESTABLISH          "[@] Established"
#define S_SERVER_RETRY_LIMIT        "[@] Retry limit reached; giving up. Type /reconnect if you want to give it another go."
#define S_SERVER_DISCONNECT         "[@] Disconnected from "
#define S_SERVER_DISCON_STATUS      "Disconnected"
#define S_SERVER_CONN_PROBLEM       "CONNECTION PROBLEM"
#define S_SERVER_LAG_DISABLED       "Disabled"
#define S_SERVER_DCC_CHAT_PROMPT    " wants to begin a DCC chat with you."
#define S_SERVER_WAITING_RETRY      "[@] Waiting "
#define S_SERVER_WAITING_SECONDS    " second"
#define S_SERVER_WAITING_PLURAL     "s"
#define S_SERVER_WAITING_ENDING     " before next attempt"

// server entry window

#define S_SERVERWIN_TITLE           "Add server"
#define S_SERVERWIN_SERVER          "Server: "
#define S_SERVERWIN_PORT            "Port: "
#define S_SERVERWIN_MENU1           "Choose status"
#define S_SERVERWIN_MENU_PRI        "Primary"
#define S_SERVERWIN_MENU_SEC        "Secondary"
#define S_SERVERWIN_MENU_DIS        "Disabled"
#define S_SERVERWIN_STATE           "State: "
#define S_SERVERWIN_DONE_BUTTON     "Done"
#define S_SERVERWIN_CANCEL_BUTTON   "Cancel"
#define S_SERVERWIN_PASS_CHECK      "Use password: "

// setup window

#define S_SETUP_TITLE               "Setup window"
#define S_SETUP_CONNECT_BUTTON      "Connect"
#define S_SETUP_NETPREFS            "Network setup"
#define S_SETUP_GENPREFS            "Preferences"
#define S_SETUP_CHOOSENET           "Choose network"
#define S_SETUP_CHOOSELABEL         "Network: "

// status bar

#define S_STATUS_LAG                "Lag: "
#define S_STATUS_USERS              "Users: "
#define S_STATUS_OPS                "Ops: "
#define S_STATUS_MODES              "Modes: "
#define S_STATUS_LISTCOUNT          "Count: "
#define S_STATUS_LISTSTAT           "Status: "
#define S_STATUS_LISTFILTER         "Filter: "

// window list

#define S_WINLIST_CLOSE_ITEM        "Close"	

#define S_INFOPOPPER_TITLE			"Vision"

#endif // _VISIONSTRINGS_H_

