/* 
| This is the website for updating the backend firmware and it is a JavaScript. 
| Here we onl;y have two sections, the loginIndex and the SeverIndex which are used in the main.cpp file.
|
*/
#ifndef __WEB_H__
#define ___WEB_H_
/*
 * Login page
 */
 
// const char* loginIndex =
//  "<form name='loginForm'>"
//     "<table width='20%' bgcolor='A09F9F' align='center'>"
//         "<tr>"
//             "<td colspan=2>"
//                 "<center><font size=4><b>ESP32 Login Page</b></font></center>"
//                 "<br>"
//             "</td>"
//             "<br>"
//             "<br>"
//         "</tr>"
//         "<tr>"
//              "<td>Username:</td>"
//              "<td><input type='text' size=25 name='userid'><br></td>"
//         "</tr>"
//         "<br>"
//         "<br>"
//         "<tr>"
//             "<td>Password:</td>"
//             "<td><input type='Password' size=25 name='pwd'><br></td>"
//             "<br>"
//             "<br>"
//         "</tr>"
//         "<tr>"
//             "<td><input type='submit' onclick='check(this.form)' value='Login'></td>"
//         "</tr>"
//     "</table>"
// "</form>"
// "<script>"
//     "function check(form)"
//     "{"
//     "if(form.userid.value=='evoke' && form.pwd.value=='nicolas')" //This is where the login info is
//     "{"
//     "window.open('/serverIndex')"
//     "}"
//     "else"
//     "{"
//     " alert('Error Password or Username')/*displays error message*/"
//     "}"
//     "}"
// "</script>";
 
// /*
//  * Server Index Page
//  */
 
// const char* serverIndex =
// "<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js'></script>"
// "<form method='POST' action='#' enctype='multipart/form-data' id='upload_form'>"
//    "<input type='file' name='update'>"
//         "<input type='submit' value='Update'>"
//     "</form>"
//  "<div id='prg'>progress: 0%</div>"
//  "<script>"
//   "$('form').submit(function(e){"
//   "e.preventDefault();"
//   "var form = $('#upload_form')[0];"
//   "var data = new FormData(form);"
//   " $.ajax({"
//   "url: '/update',"
//   "type: 'POST',"
//   "data: data,"
//   "contentType: false,"
//   "processData:false,"
//   "xhr: function() {"
//   "var xhr = new window.XMLHttpRequest();"
//   "xhr.upload.addEventListener('progress', function(evt) {"
//   "if (evt.lengthComputable) {"
//   "var per = evt.loaded / evt.total;"
//   "$('#prg').html('progress: ' + Math.round(per*100) + '%');"
//   "}"
//   "}, false);"
//   "return xhr;"
//   "},"
//   "success:function(d, s) {"
//   "console.log('success!')"
//  "},"
//  "error: function (a, b, c) {"
//  "}"
//  "});"
//  "});"
//  "</script>";
/* Style */
String style =
"<style>#file-input,input{width:100%;height:44px;border-radius:4px;margin:10px auto;font-size:15px}"
"input{background:#f1f1f1;border:0;padding:0 15px}body{background:#3498db;font-family:sans-serif;font-size:14px;color:#777}"
"#file-input{padding:0;border:1px solid #ddd;line-height:44px;text-align:left;display:block;cursor:pointer}"
"#bar,#prgbar{background-color:#f1f1f1;border-radius:10px}#bar{background-color:#3498db;width:0%;height:10px}"
"form{background:#fff;max-width:258px;margin:75px auto;padding:30px;border-radius:5px;text-align:center}"
".btn{background:#3498db;color:#fff;cursor:pointer}</style>";

/* Login page */
String loginIndex = 
"<form name=loginForm>"
"<h1>Evoke OTA Login</h1>"
"<input name=userid placeholder='User ID'> "
"<input name=pwd placeholder=Password type=Password> "
"<input type=submit onclick=check(this.form) class=btn value=Login></form>"
"<script>"
"function check(form) {"
"if(form.userid.value=='evoke' && form.pwd.value=='nicolas')"
"{window.open('/serverIndex')}"
"else"
"{alert('Error Password or Username')}"
"}"
"</script>" + style;
 
/* Server Index Page */
String serverIndex = 
"<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js'></script>"
"<form method='POST' action='#' enctype='multipart/form-data' id='upload_form'>"
"<input type='file' name='update' id='file' onchange='sub(this)' style=display:none>"
"<label id='file-input' for='file'>   Choose file...</label>"
"<input type='submit' class=btn value='Update'>"
"<br><br>"
"<div id='prg'></div>"
"<br><div id='prgbar'><div id='bar'></div></div><br></form>"
"<script>"
"function sub(obj){"
"var fileName = obj.value.split('\\\\');"
"document.getElementById('file-input').innerHTML = '   '+ fileName[fileName.length-1];"
"};"
"$('form').submit(function(e){"
"e.preventDefault();"
"var form = $('#upload_form')[0];"
"var data = new FormData(form);"
"$.ajax({"
"url: '/update',"
"type: 'POST',"
"data: data,"
"contentType: false,"
"processData:false,"
"xhr: function() {"
"var xhr = new window.XMLHttpRequest();"
"xhr.upload.addEventListener('progress', function(evt) {"
"if (evt.lengthComputable) {"
"var per = evt.loaded / evt.total;"
"$('#prg').html('progress: ' + Math.round(per*100) + '%');"
"$('#bar').css('width',Math.round(per*100) + '%');"
"}"
"}, false);"
"return xhr;"
"},"
"success:function(d, s) {"
"console.log('success!') "
"},"
"error: function (a, b, c) {"
"}"
"});"
"});"
"</script>" + style;


 #endif
 