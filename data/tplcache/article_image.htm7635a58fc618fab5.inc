<?php
$z[0]=Array("field","",120,139);
$z[0][4]['name']="title";
$z[1]=Array("global","",140,166);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",207,229);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",269,320);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",384,412);
$z[4][4]['name']="cfg_mobileurl";
$z[5]=Array("field","",426,442);
$z[5][4]['name']="id";
$z[6]=Array("global","",911,939);
$z[6][4]['name']="cfg_mobileurl";
$z[7]=Array("field","",953,969);
$z[7][4]['name']="id";
$z[8]=Array("include","",1227,1262);
$z[8][4]['filename']="head.htm";
$z[9]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1430,1814);
$z[9][4]['name']="typeid";
$z[9][4]['runphp']="yes";
$z[10]=Array("include","",1866,1901);
$z[10][4]['filename']="left.htm";
$z[11]=Array("field","",1980,2002);
$z[11][4]['name']="typename";
$z[12]=Array("field","",2043,2065);
$z[12][4]['name']="position";
$z[13]=Array("productimagelist"," \r\n        <a href=\"javascript:;\"><img src=\"[field:imgsrc/]\" alt=\"\"></a>\r\n        ",2176,2305);
$z[14]=Array("field","",2365,2384);
$z[14][4]['name']="title";
$z[15]=Array("field","",2461,2486);
$z[15][4]['name']="description";
$z[16]=Array("field","",2566,2586);
$z[16][4]['name']="cfg_qq";
$z[17]=Array("productimagelist"," \r\n                <li><a href=\"javascript:;\"><img src=\"[field:imgsrc/]\" alt=\"\"></a></li>\r\n                ",2731,2885);
$z[18]=Array("field","",3254,3272);
$z[18][4]['name']="body";
$z[19]=Array("include","",3334,3369);
$z[19][4]['filename']="foot.htm";

?>