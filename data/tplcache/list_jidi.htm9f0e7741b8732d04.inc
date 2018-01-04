<?php
$z[0]=Array("field","",315,334);
$z[0][4]['name']="title";
$z[1]=Array("global","",335,361);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",402,431);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",471,529);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",878,906);
$z[4][4]['name']="cfg_mobileurl";
$z[5]=Array("field","",920,936);
$z[5][4]['name']="id";
$z[6]=Array("global","",1405,1433);
$z[6][4]['name']="cfg_mobileurl";
$z[7]=Array("field","",1447,1463);
$z[7][4]['name']="id";
$z[8]=Array("include","",2388,2423);
$z[8][4]['filename']="head.htm";
$z[9]=Array("include","",2772,2809);
$z[9][4]['filename']="weizhi.htm";
$z[10]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",2888,3272);
$z[10][4]['name']="typeid";
$z[10][4]['runphp']="yes";
$z[11]=Array("channelartlist","\r\n        <li>\r\n          <h2><a href=\"{dede:field name='typeurl'/}\" {dede:field name='currentstyle'/}>{dede:field name='typename'/}</a></h2>\r\n        </li>\r\n       ",3347,3591);
$z[11][4]['type']="son";
$z[11][4]['noself']="yes";
$z[11][4]['typeid']="20";
$z[12]=Array("list","\r\n          <li><a class=\"cpimg\" href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\"><img src=\"[field:litpic/]\" onerror=\"this.src='images/1-150Q50950190-L.jpg'\" width=\"244\" height=\"182\" alt=\"[field:title/]\" /></a>\r\n            <h3><a target=\"_blank\" href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n            <a target=\"_blank\" class=\"ckxx\" href=\"[field:arcurl/]\" title=\"[field:title/]\">了解详情</a><a target=\"_blank\" href=\"[field:arcurl/]\" title=\"[field:title/]\" class=\"s-cphover\"></a></li>\r\n         ",3715,4305);
$z[12][4]['pagesize']="6";
$z[12][4]['titlelen']="36";
$z[13]=Array("pagelist","",4390,4456);
$z[13][4]['listitem']="index,end,pre,next,pageno";
$z[13][4]['listsize']="5";
$z[14]=Array("include","",4567,4602);
$z[14][4]['filename']="foot.htm";

?>