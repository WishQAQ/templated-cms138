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
$z[4]=Array("include","",1797,1832);
$z[4][4]['filename']="head.htm";
$z[5]=Array("include","",2168,2205);
$z[5][4]['filename']="weizhi.htm";
$z[6]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",2279,2663);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channelartlist","\r\n        <li>\r\n          <h2><a href=\"{dede:field name='typeurl'/}\" {dede:field name='currentstyle'/}>{dede:field name='typename'/}</a></h2>\r\n        </li>\r\n       ",2734,2978);
$z[7][4]['type']="son";
$z[7][4]['noself']="yes";
$z[7][4]['typeid']="13";
$z[8]=Array("field","",3065,3084);
$z[8][4]['name']="title";
$z[9]=Array("field","",3136,3193);
$z[9][4]['name']="pubdate";
$z[9][4]['function']="strftime(\"%Y-%m-%d\",@me)";
$z[10]=Array("field","",3260,3276);
$z[10][4]['name']="id";
$z[11]=Array("field","",3281,3298);
$z[11][4]['name']="mid";
$z[12]=Array("field","",3615,3633);
$z[12][4]['name']="body";
$z[13]=Array("prenext","",3703,3728);
$z[13][4]['get']="pre";
$z[14]=Array("prenext","",3767,3793);
$z[14][4]['get']="next";
$z[15]=Array("type","[field:typelink /]",3827,3885);
$z[15][4]['typeid']="0";
$z[15][4]['row']="1";
$z[16]=Array("include","",3984,4019);
$z[16][4]['filename']="foot.htm";

?>