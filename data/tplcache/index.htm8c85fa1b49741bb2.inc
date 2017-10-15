<?php
$z[0]=Array("global","",264,290);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",334,364);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",460,487);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("channelartlist","\r\n    <li class=\"child\"> <a href=\"{dede:field name='typeurl'/}\">\r\n      <p class=\"title\">{dede:field name='typename'/}</p>\r\n      </a>\r\n      <ul class=\"childContent\">\r\n        {dede:channel type='son' noself='yes'} <a href=\"[field:typeurl/]\">\r\n        <li class=\"childContentLi\">[field:typename/]</li>\r\n        </a> {/dede:channel}\r\n      </ul>\r\n      <img class=\"wapNavPointer\" src=\"/skin/images/wapnavpointer.jpg\" /> </li>\r\n    ",2411,2898);
$z[3][4]['typeid']="top";
$z[4]=Array("global","",3274,3299);
$z[4][4]['name']="cfg_cmsurl";
$z[5]=Array("sql"," \r\n        [field:content  function='cn_substr(html2text(@me),700)'/]\r\n        ",6251,6401);
$z[5][4]['sql']="Select content from dede_arctype where id=1";
$z[6]=Array("arclist"," <a href=\"[field:arcurl/]\">\r\n        <div class=\"child\">\r\n          <div class=\"childImg\"><img src=\"[field:picname/]\" /></div>\r\n          <p class=\"childTitle\">[field:title/]</p>\r\n          <p class=\"childTime\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</p>\r\n          <p class=\"childInfo\">[field:info/]...</p>\r\n        </div>\r\n        </a> ",6709,7128);
$z[6][4]['row']="18";
$z[6][4]['titlelen']="32";
$z[6][4]['infolen']="80";
$z[6][4]['typeid']="20";
$z[7]=Array("arclist"," <a href=\"[field:arcurl/]\">\r\n    <div class=\"child\" id=\"work[field:global name=autoindex runphp=\"yes\"]@me=@me+1;[/field:global]\"> <img class=\"childImg\" src=\"[field:picname/]\" />\r\n      <p class=\"childTitle\">[field:title/]</p>\r\n      <img class=\"childFoot\" src=\"/skin/images/projectfixed.png\" /> <img class=\"childRight\" src=\"/skin/images/projecticon.png\" />\r\n      <div class=\"childHide\"></div>\r\n      <img class=\"childSearch\" src=\"/skin/images/projectsearch.png\" />\r\n      <div class=\"childSearchBg\"></div>\r\n    </div>\r\n    </a> ",8494,9081);
$z[7][4]['row']="6";
$z[7][4]['titlelen']="32";
$z[7][4]['typeid']="3";
$z[8]=Array("include","",9137,9174);
$z[8][4]['filename']="footer.htm";

?>