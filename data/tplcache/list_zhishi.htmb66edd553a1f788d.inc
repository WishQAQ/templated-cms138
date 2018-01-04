<?php
$z[0]=Array("field","",316,335);
$z[0][4]['name']="title";
$z[1]=Array("global","",336,362);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",403,432);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",472,530);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3767,3802);
$z[4][4]['filename']="head.htm";
$z[5]=Array("include","",4151,4188);
$z[5][4]['filename']="weizhi.htm";
$z[6]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",4268,4652);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channelartlist","\r\n        <li>\r\n          <h2><a href=\"{dede:field name='typeurl'/}\" {dede:field name='currentstyle'/}>{dede:field name='typename'/}</a></h2>\r\n        </li>\r\n       ",4727,4971);
$z[7][4]['type']="son";
$z[7][4]['noself']="yes";
$z[7][4]['typeid']="13";
$z[8]=Array("list","\r\n              <li>\r\n                <div class=\"s-newsbj\">\r\n                  <div class=\"time\">\r\n                    <p class=\"day\">[field:pubdate function='strftime(\"%d\",@me)'/]</p>\r\n                    <p>[field:pubdate function='strftime(\"%Y-%m\",@me)'/]</p>\r\n                  </div>\r\n                  <div class=\"intro\">\r\n                    <h3> <a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\" class=\"tit\">[field:title/]</a></h3>\r\n                    <a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\">　　[field:description function='cn_substr(@me,150)'/]...</a> </div>\r\n                </div>\r\n                <div class=\"s-dbyy\"></div>\r\n              </li>\r\n              ",5162,5929);
$z[8][4]['pagesize']="8";
$z[8][4]['titlelen']="36";
$z[9]=Array("pagelist","",6072,6138);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",6304,6339);
$z[10][4]['filename']="foot.htm";

?>