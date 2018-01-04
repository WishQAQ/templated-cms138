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
$z[4]=Array("global","",879,907);
$z[4][4]['name']="cfg_mobileurl";
$z[5]=Array("field","",921,937);
$z[5][4]['name']="id";
$z[6]=Array("global","",1406,1434);
$z[6][4]['name']="cfg_mobileurl";
$z[7]=Array("field","",1448,1464);
$z[7][4]['name']="id";
$z[8]=Array("include","",4422,4457);
$z[8][4]['filename']="head.htm";
$z[9]=Array("include","",4806,4843);
$z[9][4]['filename']="weizhi.htm";
$z[10]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",4923,5307);
$z[10][4]['name']="typeid";
$z[10][4]['runphp']="yes";
$z[11]=Array("channelartlist","\r\n        <li>\r\n          <h2><a href=\"{dede:field name='typeurl'/}\" {dede:field name='currentstyle'/}>{dede:field name='typename'/}</a></h2>\r\n        </li>\r\n       ",5382,5626);
$z[11][4]['type']="son";
$z[11][4]['noself']="yes";
$z[11][4]['typeid']="13";
$z[12]=Array("list","\r\n              <li>\r\n                <div class=\"s-newsbj\">\r\n                  <div class=\"time\">\r\n                    <p class=\"day\">[field:pubdate function='strftime(\"%d\",@me)'/]</p>\r\n                    <p>[field:pubdate function='strftime(\"%Y-%m\",@me)'/]</p>\r\n                  </div>\r\n                  <div class=\"intro\">\r\n                    <h3> <a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\" class=\"tit\">[field:title/]</a></h3>\r\n                    <a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\">　　[field:description function='cn_substr(@me,150)'/]...</a> </div>\r\n                </div>\r\n                <div class=\"s-dbyy\"></div>\r\n              </li>\r\n              ",5817,6584);
$z[12][4]['pagesize']="8";
$z[12][4]['titlelen']="36";
$z[13]=Array("pagelist","",6727,6793);
$z[13][4]['listitem']="index,end,pre,next,pageno";
$z[13][4]['listsize']="5";
$z[14]=Array("include","",6959,6994);
$z[14][4]['filename']="foot.htm";

?>