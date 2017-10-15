$(function(){			
	$(".form-horizontal").validate({
		rules:
		{
			username:
			{
				required:true,
				rangelength:[4,10]
			},
			password:
			{
				required:true,
				rangelength:[4,10]
			},
			repassworda:
			{
				equalTo:"#password"
			}
		},
		messages:
		{
			username:
			{
				required:"用户名不能为空",
				rangelength:"请输入4到10位的用户名"
			},
			password:
			{
				required:"密码不能为空",
				rangelength:"请输入4到10位的密码"
			},
			repassworda:
			{
				equalTo:"两次输入密码不同"
			}
		}
	});
	$(".abb").validate({
		rules:
		{
		name:
			{
				required:true
			},
			mail:
			{
				required:true
			},
			title:
			{
				required:true
			},
			content:
			{
				required:true
			}
		},
		messages:
		{
			name:
			{
				required:"姓名不能为空"
			},
			mail:
			{
				required:"邮箱不能为空"
			},
			title:
			{
				required:"标题不能为空"
			},
			content:
			{
				required:"内容不能为空"
			}
		}
	});	
});