/**
 * PGE Multiplayer module using WebSockets
 */

#pragma once

#include <pebble.h>

#define PGE_WS_LOGS true

// Developer-usable keys, predeclared in appinfo.json
#define PGE_WS_KEY_0  0
#define PGE_WS_KEY_1  1
#define PGE_WS_KEY_2  2
#define PGE_WS_KEY_3  3
#define PGE_WS_KEY_4  4
#define PGE_WS_KEY_5  5
#define PGE_WS_KEY_6  6
#define PGE_WS_KEY_7  7
#define PGE_WS_KEY_8  8
#define PGE_WS_KEY_9  9
#define PGE_WS_KEY_10 10
#define PGE_WS_KEY_11 11
#define PGE_WS_KEY_12 12
#define PGE_WS_KEY_13 13
#define PGE_WS_KEY_14 14
#define PGE_WS_KEY_15 15

// Send URL, receive confirmation
#define PGE_WS_URL       100
#define PGE_WS_CLIENT_ID 101

// Handler for connection result
typedef void (PGEWSConnectedHandler)(bool successful);

/**
 * Connect to server. E.g.: ws://localhost:5000
 */
void pge_ws_connect(char *url, PGEWSConnectedHandler *handler);

/**
 * Duisconnect from server
 */
void pge_ws_disconnect();

/**
 * Get connected status
 */
bool pge_ws_is_connected();

/**
 * Get client ID once connected
 */
int pge_ws_get_client_id();
