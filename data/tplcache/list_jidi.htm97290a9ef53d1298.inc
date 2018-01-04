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
$z[4]=Array("include","",1667,1702);
$z[4][4]['filename']="head.htm";
$z[5]=Array("include","",2051,2088);
$z[5][4]['filename']="weizhi.htm";
$z[6]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",2167,2551);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channelartlist","\r\n        <li>\r\n          <h2><a href=\"{dede:field name='typeurl'/}\" {dede:field name='currentstyle'/}>{dede:field name='typename'/}</a></h2>\r\n        </li>\r\n       ",2626,2870);
$z[7][4]['type']="son";
$z[7][4]['noself']="yes";
$z[7][4]['typeid']="20";
$z[8]=Array("list","\r\n          <li><a class=\"cpimg\" href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\"><img src=\"[field:litpic/]\" onerror=\"this.src='images/1-150Q50950190-L.jpg'\" width=\"244\" height=\"182\" alt=\"[field:title/]\" /></a>\r\n            <h3><a target=\"_blank\" href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n            <a target=\"_blank\" class=\"ckxx\" href=\"[field:arcurl/]\" title=\"[field:title/]\">了解详情</a><a target=\"_blank\" href=\"[field:arcurl/]\" title=\"[field:title/]\" class=\"s-cphover\"></a></li>\r\n         ",2994,3584);
$z[8][4]['pagesize']="6";
$z[8][4]['titlelen']="36";
$z[9]=Array("pagelist","",3669,3735);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",3846,3881);
$z[10][4]['filename']="foot.htm";

?>