
$(function () {
    //首页导航下拉
    $(".top-nav li").mouseover(function () {
        $(this).children(".in-nav").show();
    }).mouseout(function () {
        $(this).children(".in-nav").hide();
    });

    //语言切换
    $(".language .btn").toggle(function () {
        $(this).css("left", "0");
    }, function function_name(argument) {
        $(this).css("left", "25px");
    })

    // 首页产品切换
    var $ipro_li = $(".ipro-tab li");
    $ipro_li.click(function () {
        $(this).addClass("current").siblings().removeClass("current");
        var index = $ipro_li.index(this);
        $(".ipro-box .ipro-show").eq(index).show().siblings().hide();
    });

    // 首页优势
    $(".idx-advant li").mouseover(function () {
        $(this).css({ "padding": "10px", "z-index": "999", "margin-top": "-10px", "margin-left": "-10px" })
    })
    $(".idx-advant li").mouseout(function () {
        $(this).css({ "padding": "0", "z-index": "1", "margin-top": "0", "margin-left": "0" })
    })

    $(function () {//首页公司简介
        $(".idx-abt-cont .next").click(function () {
            $(".idx-abt-slide .wtf").eq(0).hide();
        })
        $(".idx-abt-cont .prev").click(function () {
            $(".idx-abt-slide .wtf").eq(0).show();
        })
    })

    // 产品详情页选项卡
    var $pro_tab = $(".pro-intro-tab li");
    var $pro_box = $(".pro-intro-txt");
    $pro_tab.click(function () {

        $(this).addClass("current").siblings().removeClass("current");

        var index = $pro_tab.index(this);

        $(".pro-intro-txt").eq(index).show().siblings(".pro-intro-txt").hide();
    })

    //faq切换
    $(".faq h3").click(function () {
        if ($(this).hasClass("hover")) {
            $(this).removeClass("hover");
            $(this).next(".faq-txt").slideUp()
        } else {
            $(".faq h3").removeClass("hover");
            $(".faq-txt").slideUp();
            $(this).addClass("hover");
            $(this).next(".faq-txt").slideDown();
        };
    })

    //内页侧边栏导航下拉
    $("#sid-nav .sid-item").mouseover(function () {
        $(this).siblings().find("h3").removeClass("current");
        $(this).siblings().find("ul").hide();
        $(this).find("h3").addClass("current");
        $(this).find("ul").show();
    })

    //内页侧边栏滚动
    $(function () {
        var page = 1
        var timer = null;
        var $parent = $(".sid-show");
        var $v_content = $parent.find(".sid-pic");
        var $v_ul = $v_content.find("ul");
        var v_width = $v_content.width();
        var $v_li = $v_ul.find("li").first();
        var $v_li2 = $v_li.clone(true);
        var $v_ul = $v_ul.append($v_li2);
        var len = $v_ul.find("li").length;

        $(".sid-show .next").click(function () {
            if (!$v_ul.is(":animated")) {
                if (page >= len) {
                    // $v_ul.animate({left:'0px'},"slow");
                    page = 1;
                    $v_ul.css("left", "0");

                } else {
                    $v_ul.animate({ left: '-=' + v_width }, "slow");
                    page++;
                };
            }
        })
        $(".sid-show .prev").click(function () {
            if (!$v_ul.is(":animated")) {
                if (page == 1) {
                    // $v_ul.animate({left:'-='+(len-1)*v_width},"slow");
                    $v_ul.css("left", -v_width * (len - 1));
                    page = len;
                } else {
                    $v_ul.animate({ left: '+=' + v_width }, "slow");
                    page--;
                };
            }
        })
        $parent.hover(function () {
            if (timer) { clearInterval(timer) };
        }, function () {
            timer = setInterval(function () {
                $(".sid-show .next").click();
            }, 3000)
        }).trigger("mouseleave");
    })

    //产品详情页点击滚动
    $(function () {
        var timer = null;
        var index = 1;
        var $parent = $(".s-slide");
        var $v_content = $parent.find(".s-pic");
        var $v_ul = $v_content.find("ul");
        var v_width = $v_content.find("li").width() + 35 + 'px';
        var len = $v_ul.find("li").length;
        $parent.find(".next").click(function () {
            if (!$v_ul.is(":animated")) {
                if (index < len - 2) {
                    // 	$v_ul.animate({left:'0px'},"slow");
                    // 	index=1;
                    // } else{
                    $v_ul.animate({ left: '-=' + v_width }, "slow");
                    index++;
                };
            }
        })
        $parent.find(".prev").click(function () {
            if (!$v_ul.is(":animated")) {
                if (index > 1) {
                    // 	$v_ul.animate({left:'-='+(len-3)*v_width},"slow");
                    // 	index=len-2;
                    // } else{
                    $v_ul.animate({ left: '+=' + v_width }, "slow");
                    index--;
                };
            }
        })

        $v_content.find("img").mouseover(function () {
            $(".s-lt img").attr('src', this.src)//更换大图
        });

      
    })
    //企业文化图片滚动
    $(function () {
        var timer = null;
        var page = 1;
        var i = 3;
        var $parent = $(".cult-spic");
        var $v_content = $parent.find(".vie");
        var $v_ul = $v_content.find("ul");
        var v_width = $v_ul.find("li").width() + 40 + 'px';
        var len = $v_ul.find("li").length;
        $parent.find(".next").click(function () {
            if (!$v_ul.is(":animated")) {
                if (page < len - 2) {
                    // 	$v_ul.animate({left:'0px'},"slow");
                    // 	page=1;
                    // } else{
                    $v_ul.animate({ left: '-=' + v_width }, "slow");
                    page++;
                };
            }
        })
        $parent.find(".prev").click(function () {
            if (!$v_ul.is(":animated")) {
                if (page > 1) {
                    // 	$v_ul.animate({left:'-='+(len-3)*v_width},"slow");
                    // 	page=len-2;
                    // } else{
                    $v_ul.animate({ left: '+=' + v_width }, "slow");
                    page--;
                };
            }
        })

        $v_content.find("img").mouseover(function () {
            $(".cult-bpic img").attr('src', this.src)//更换大图
            $(this).parents("li").addClass("current").siblings().removeClass("current");
        })
    })
})

//客服
$(function () {
    $(".qqkefu .top").click(function () {
        $("html,body").animate({ "scrollTop": 0 }, 1000);
    })


    //QQ
    $(".qq_czaa").hover(function () {
        var idw = this.id;
        if (navigator.appName == "Microsoft Internet Explorer" && navigator.appVersion.split(";")[1].replace(/[ ]/g, "") == "MSIE7.0") {
            $(this).stop(true, false).animate({ width: idw, "left": "-85px" }, 300);
        } else {
            $(this).stop(true, false).animate({ "width": "160px" }, 300);
        }
    }, function () {
        if (navigator.appName == "Microsoft Internet Explorer" && navigator.appVersion.split(";")[1].replace(/[ ]/g, "") == "MSIE7.0") {
            $(this).stop(true, false).animate({ "width": "45px", "left": "0" }, 300);
        } else {
            $(this).stop(true, false).animate({ "width": "45px" }, 300);
        }
    })

    $(".qq_czb").hover(function () {
        $(".erweima").show(50)
    }, function () {
        $(".erweima").hide(50)
    })

});




