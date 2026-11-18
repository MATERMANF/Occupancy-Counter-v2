#ifndef SECRETS_H
#define SECRETS_H

// ============================================================================
// COPY THIS FILE TO  secrets.h  AND FILL IN YOUR VALUES.
// secrets.h is git-ignored and will not be committed.
// ============================================================================

// --- WiFi mode ---------------------------------------------------------------
// ----------------------------------------------------------------------------
#define WIFI_SSID      "Registered4OSU"
#define WIFI_PASSWORD  "your-password"

// --- Google Cloud service account -------------------------------------------
#define GCP_PROJECT_ID    "your-gcp-project-id"
#define GCP_CLIENT_EMAIL  "sa-name@project-id.iam.gserviceaccount.com"

const char GCP_PRIVATE_KEY[] PROGMEM = "-----BEGIN PRIVATE KEY-----\n"
"PASTE YOUR KEY HERE (one quoted line per PEM line, \\n at the end)\n"
"-----END PRIVATE KEY-----\n";

// --- Google Sheet -----------------------------------------------------------
#define SPREADSHEET_ID  "your-spreadsheet-id-from-the-url"

#endif // SECRETS_H
