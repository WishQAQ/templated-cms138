<?php
$z[0]=Array("field","",315,334);
$z[0][4]['name']="title";
$z[1]=Array("global","",335,361);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",402,424);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",464,515);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",1438,1466);
$z[4][4]['name']="cfg_mobileurl";
$z[5]=Array("field","",1480,1496);
$z[5][4]['name']="id";
$z[6]=Array("global","",1965,1993);
$z[6][4]['name']="cfg_mobileurl";
$z[7]=Array("field","",2007,2023);
$z[7][4]['name']="id";
$z[8]=Array("include","",2518,2553);
$z[8][4]['filename']="head.htm";
$z[9]=Array("include","",2893,2930);
$z[9][4]['filename']="weizhi.htm";
$z[10]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",2999,3383);
$z[10][4]['name']="typeid";
$z[10][4]['runphp']="yes";
$z[11]=Array("channelartlist","\r\n        <li>\r\n          <h2><a href=\"{dede:field name='typeurl'/}\" {dede:field name='currentstyle'/}>{dede:field name='typename'/}</a></h2>\r\n        </li>\r\n       ",3454,3698);
$z[11][4]['type']="son";
$z[11][4]['noself']="yes";
$z[11][4]['typeid']="20";
$z[12]=Array("field","",3785,3804);
$z[12][4]['name']="title";
$z[13]=Array("field","",3856,3913);
$z[13][4]['name']="pubdate";
$z[13][4]['function']="strftime(\"%Y-%m-%d\",@me)";
$z[14]=Array("field","",3980,3996);
$z[14][4]['name']="id";
$z[15]=Array("field","",4001,4018);
$z[15][4]['name']="mid";
$z[16]=Array("field","",4335,4353);
$z[16][4]['name']="body";
$z[17]=Array("prenext","",4423,4448);
$z[17][4]['get']="pre";
$z[18]=Array("prenext","",4487,4513);
$z[18][4]['get']="next";
$z[19]=Array("type","[field:typelink /]",4547,4605);
$z[19][4]['typeid']="0";
$z[19][4]['row']="1";
$z[20]=Array("include","",4704,4739);
$z[20][4]['filename']="foot.htm";

?>