
                    <li class="z3g-column2 pro_bull" style=" margin-left:2%;width:46%; margin-bottom:10px; float:left; display:block;"> <a href="list.php?tid=[field:id/]">[field:typename/]</a> </li>
                  </ul>
                </div>
                <script type="text/javascript">

var pro_class;

/*function pro_liresize() {

var pro_classw = $(".pro_plist").width();

$(".pro_bull").width(pro_classw / 2);

pro_class.refresh();

}*/



$(function () {

pro_class = new iScroll("pro_plist", {

snap: true,

momentum: false,

vScroll: false,

hScroll: true,

hScrollbar: false

});

$(window).load(function (e) {

//pro_liresize();

});



$(window).resize(function (e) {

pro_liresize();

});



});

</script> 
              </div>
            </section>
          </div>
        </div>
        <div name="资讯列表" id="elem-News_list01-001" class="columnSpace">
          <div class="borderTitle z3g-bgColor03 active" style="background:#0066cc"> <span class="left"> <em class="icon"></em> <em class="borderName " style="color:#ffffff">文章列表 </em> </span> <span class="right"> <em class="moreCont"></em> <em class="active controlBar"> <cite class="icon"></cite> </em> </span> </div>
          <section class="News_list01-d1_c1" id="news-list">
            <ul>
              {dede:list pagesize='10' titlelen='36'}
              <li class="active"> <a href="view.php?aid=[field:id/]" title="[field:title/]">
                <div class="js_gotoNewsDetail" data-id="143">
                  <h3 class="newsTitle"> <em class="icon"></em> <span class="name"> [field:title/] </span> </h3>
                  <p class="time"> [field:pubdate function='strftime("%Y-%m-%d",@me)'/] </p>
                </div>
                </a> </li>
              {/dede:list}
              
            </ul>
            <div class="pagess">
              <ul class="pagelist">
                {dede:pagelist listitem="index,end,pre,next,pageno" listsize="5"