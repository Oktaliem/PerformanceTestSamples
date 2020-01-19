Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='1557f2056d7f8b8e910c2fca5e7b406738526091o1579132548' Name ='csrf_token' Type ='Manual'*/
	web_reg_save_param_attrib(
		"ParamName=csrf_token",
		"TagName=input",
		"Extract=value",
		"Name=csrf_token",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("login", 
		"URL=http://192.168.1.66/web/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_concurrent_start(NULL);

	web_url("web.assets_common.css", 
		"URL=http://192.168.1.66/web/content/430-3c01eea/web.assets_common.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("web.assets_frontend.css", 
		"URL=http://192.168.1.66/web/content/431-2b2ce13/web.assets_frontend.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("web.assets_frontend_minimal_js.js", 
		"URL=http://192.168.1.66/web/content/433-4fef38a/web.assets_frontend_minimal_js.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("web.assets_common_minimal_js.js", 
		"URL=http://192.168.1.66/web/content/432-178fe0e/web.assets_common_minimal_js.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("company_logo", 
		"URL=http://192.168.1.66/web/binary/company_logo", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t6.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("web.assets_common_lazy.js", 
		"URL=http://192.168.1.66/web/content/434-383b496/web.assets_common_lazy.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("web.assets_frontend_lazy.js", 
		"URL=http://192.168.1.66/web/content/435-a16725c/web.assets_frontend_lazy.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t8.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(21);

	web_url("1579395754836", 
		"URL=http://192.168.1.66/web/webclient/translations/1579395754836?mods=&lang=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("en_US", 
		"URL=http://192.168.1.66/web/webclient/locale/en_US", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t10.inf", 
		LAST);

	web_add_header("Origin", 
		"http://192.168.1.66");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

//	web_reg_save_param_regexp(
//		"ParamName=token",
//		"RegExp=name=\"csrf_token\" value\"(.+?)\"",
//		"Group=1",
//		"Ordinal=ALL",
//		SEARCH_FILTERS,
//		"Scope=BODY",
//		"RequestUrl=http://192.168.1.66/web/login",
//		LAST);

	web_reg_save_param_regexp(
		"ParamName=token",
		"RegExp=name=\"(.+?)\" value=\"(.+?)\"",
		"NotFound=warning",
		"Group=2",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=http://192.168.1.66/web/login",
		LAST);

	
//	web_reg_save_param_regexp(
//		"ParamName=token",
//		"RegExp=name=\"csrf_token\",value=\"(.+?)\"",
//		"Group=1",
//		"Ordinal=ALL",
//		SEARCH_FILTERS,
//		"Scope=BODY",
//		"RequestUrl=http://192.168.1.66/web/login",
//		LAST);
//	
	
//	web_reg_save_param_regexp(
//		"ParamName=token",
//		"RegExp=\\w{51}",
//		"NotFound=warning",
//		"Group=0",
//		"Ordinal=ALL",
//		SEARCH_FILTERS,
//		"Scope=BODY",
//		"RequestUrl=http://192.168.1.66/web/login",
//		LAST);

//	lr_save_string({token},"{token}"); //salah
	lr_output_message(lr_eval_string("{token}")); //bisa dipakai tp hasilnya {token}
//  lr_output_message(lr_eval_string("1557f2056d7f8b8e910c2fca5e7b406738526091o1579132548"));
//	lr_output_message(lr_eval_string({token}));//salah
//    lr_output_message("{token}"); //bisa dipakai tp hasilnya {token}
//    lr_output_message("%s",lr_eval_string("{token}")); //bisa dipakai tp hasilnya {token}
    lr_output_message(lr_eval_string("{csrf_token}")); //bisa dipakai tp hasilnya {token}
    //lr_output_message(lr_eval_string());
	
	web_submit_data("login_2",
		"Action=http://192.168.1.66/web/login",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://192.168.1.66/web/login",
		"Snapshot=t11.inf",
		"Mode=HTTP",
		ITEMDATA,
//		"Name=csrf_token", "Value=1557f2056d7f8b8e910c2fca5e7b406738526091o1579132548", ENDITEM,
		"Name=csrf_token", "Value={csrf_token}", ENDITEM,
		"Name=login", "Value=user@example.com", ENDITEM,
		"Name=password", "Value=bitnami", ENDITEM,
		"Name=redirect", "Value=", ENDITEM,
		LAST);

	web_concurrent_start(NULL);

	web_url("web.assets_backend.css", 
		"URL=http://192.168.1.66/web/content/436-44561e6/web.assets_backend.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("web.assets_common.js", 
		"URL=http://192.168.1.66/web/content/437-3c01eea/web.assets_common.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t13.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("003f16ffa5db0f0bc3d7182bd34ca35055762784", 
		"URL=http://192.168.1.66/web/webclient/load_menus/003f16ffa5db0f0bc3d7182bd34ca35055762784", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("web.assets_backend.js", 
		"URL=http://192.168.1.66/web/content/438-44561e6/web.assets_backend.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t15.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("3a817ef468b1400ba3be1854ee2435433468d582", 
		"URL=http://192.168.1.66/web/webclient/qweb/3a817ef468b1400ba3be1854ee2435433468d582?mods=base,web,base_import,web_diagram,web_editor,web_kanban_gauge,web_tour", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon", 
		"URL=http://192.168.1.66/web/image/res.company/1/favicon/", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("026ae15487c2067877f7b82ffb991974c070d399", 
		"URL=http://192.168.1.66/web/webclient/translations/026ae15487c2067877f7b82ffb991974c070d399?mods=base%2Cweb%2Cbase_import%2Cweb_diagram%2Cweb_editor%2Cweb_kanban_gauge%2Cweb_tour&lang=en_US", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("user_menu_avatar.png", 
		"URL=http://192.168.1.66/web/static/src/img/user_menu_avatar.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"http://192.168.1.66");

	web_custom_request("read", 
		"URL=http://192.168.1.66/web/dataset/call_kw/res.users/read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"call\",\"params\":{\"args\":[2,[\"action_id\"]],\"model\":\"res.users\",\"method\":\"read\",\"kwargs\":{\"context\":{\"lang\":\"en_US\",\"tz\":\"Europe/Brussels\",\"uid\":2,\"allowed_company_ids\":[1]}}},\"id\":222106299}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("image", 
		"URL=http://192.168.1.66/web/image?model=res.users&field=image_128&id=2", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("fontawesome-webfont.woff2", 
		"URL=http://192.168.1.66/web/static/lib/fontawesome/fonts/fontawesome-webfont.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.66/web/content/430-3c01eea/web.assets_common.css", 
		"Snapshot=t22.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("load", 
		"URL=http://192.168.1.66/web/action/load", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"call\",\"params\":{\"action_id\":35},\"id\":469415478}", 
		LAST);

	web_custom_request("load_views", 
		"URL=http://192.168.1.66/web/dataset/call_kw/ir.module.module/load_views", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"call\",\"params\":{\"args\":[],\"model\":\"ir.module.module\",\"method\":\"load_views\",\"kwargs\":{\"views\":[[false,\"kanban\"],[false,\"list\"],[false,\"form\"],[92,\"search\"]],\"options\":{\"action_id\":35,\"toolbar\":true,\"load_filters\":true},\"context\":{\"lang\":\"en_US\",\"tz\":\"Europe/Brussels\",\"uid\":2,\"allowed_company_ids\":[1],\"search_default_app\":1}}},\"id\":489289431}", 
		LAST);

	web_custom_request("search_read", 
		"URL=http://192.168.1.66/web/dataset/search_read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"call\",\"params\":{\"model\":\"ir.module.module\",\"domain\":[[\"application\",\"=\",true]],\"fields\":[\"icon\",\"to_buy\",\"name\",\"state\",\"summary\",\"website\",\"application\",\"shortdesc\"],\"limit\":80,\"sort\":\"\",\"context\":{\"lang\":\"en_US\",\"tz\":\"Europe/Brussels\",\"uid\":2,\"allowed_company_ids\":[1],\"bin_size\":true}},\"id\":806588863}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("icon.png", 
		"URL=http://192.168.1.66/crm/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("icon.png_2", 
		"URL=http://192.168.1.66/website/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("icon.png_3", 
		"URL=http://192.168.1.66/project/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("stock_barcode.png", 
		"URL=http://192.168.1.66/base/static/img/icons/stock_barcode.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("timesheet_grid.png", 
		"URL=http://192.168.1.66/base/static/img/icons/timesheet_grid.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("icon.png_4", 
		"URL=http://192.168.1.66/stock/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("account_accountant.png", 
		"URL=http://192.168.1.66/base/static/img/icons/account_accountant.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("icon.png_5", 
		"URL=http://192.168.1.66/account/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("icon.png_6", 
		"URL=http://192.168.1.66/mrp/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("mrp_workorder.png", 
		"URL=http://192.168.1.66/base/static/img/icons/mrp_workorder.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("favicon_2", 
		"URL=http://192.168.1.66/web/image/res.company/1/favicon/", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("mrp_plm.png", 
		"URL=http://192.168.1.66/base/static/img/icons/mrp_plm.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("quality_control.png", 
		"URL=http://192.168.1.66/base/static/img/icons/quality_control.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("favicon_3", 
		"URL=http://192.168.1.66/web/image/res.company/1/favicon/", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("icon.png_7", 
		"URL=http://192.168.1.66/sale_management/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("web_studio.png", 
		"URL=http://192.168.1.66/base/static/img/icons/web_studio.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("icon.png_8", 
		"URL=http://192.168.1.66/point_of_sale/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("icon.png_9", 
		"URL=http://192.168.1.66/note/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("icon.png_10", 
		"URL=http://192.168.1.66/website_sale/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("icon.png_11", 
		"URL=http://192.168.1.66/purchase/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("helpdesk.png", 
		"URL=http://192.168.1.66/base/static/img/icons/helpdesk.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("icon.png_12", 
		"URL=http://192.168.1.66/hr/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("icon.png_13", 
		"URL=http://192.168.1.66/hr_attendance/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("icon.png_14", 
		"URL=http://192.168.1.66/hr_recruitment/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("icon.png_15", 
		"URL=http://192.168.1.66/hr_expense/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("icon.png_16", 
		"URL=http://192.168.1.66/board/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("icon.png_17", 
		"URL=http://192.168.1.66/contacts/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("hr_appraisal.png", 
		"URL=http://192.168.1.66/base/static/img/icons/hr_appraisal.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("icon.png_18", 
		"URL=http://192.168.1.66/hr_holidays/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("icon.png_19", 
		"URL=http://192.168.1.66/hr_skills/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("icon.png_20", 
		"URL=http://192.168.1.66/mail/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("icon.png_21", 
		"URL=http://192.168.1.66/mass_mailing_sms/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("project_forecast.png", 
		"URL=http://192.168.1.66/base/static/img/icons/project_forecast.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("sale_ebay.png", 
		"URL=http://192.168.1.66/base/static/img/icons/sale_ebay.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("sale_subscription.png", 
		"URL=http://192.168.1.66/base/static/img/icons/sale_subscription.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("sign.png", 
		"URL=http://192.168.1.66/base/static/img/icons/sign.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("website_calendar.png", 
		"URL=http://192.168.1.66/base/static/img/icons/website_calendar.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("voip.png", 
		"URL=http://192.168.1.66/base/static/img/icons/voip.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("icon.png_22", 
		"URL=http://192.168.1.66/survey/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("icon.png_23", 
		"URL=http://192.168.1.66/mass_mailing/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("marketing_automation.png", 
		"URL=http://192.168.1.66/base/static/img/icons/marketing_automation.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("icon.png_24", 
		"URL=http://192.168.1.66/lunch/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("icon.png_25", 
		"URL=http://192.168.1.66/maintenance/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("icon.png_26", 
		"URL=http://192.168.1.66/calendar/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("icon.png_27", 
		"URL=http://192.168.1.66/website_slides/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("icon.png_28", 
		"URL=http://192.168.1.66/website_hr_recruitment/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("icon.png_29", 
		"URL=http://192.168.1.66/website_blog/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("icon.png_30", 
		"URL=http://192.168.1.66/website_forum/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("icon.png_31", 
		"URL=http://192.168.1.66/fleet/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("icon.png_32", 
		"URL=http://192.168.1.66/website_event/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("icon.png_33", 
		"URL=http://192.168.1.66/im_livechat/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("icon.png_34", 
		"URL=http://192.168.1.66/repair/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("web_mobile.png", 
		"URL=http://192.168.1.66/base/static/img/icons/web_mobile.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t78.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}