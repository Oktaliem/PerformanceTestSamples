package com.oktaliem.gatling

import scala.concurrent.duration._

import io.gatling.core.Predef._
import io.gatling.http.Predef._
import io.gatling.jdbc.Predef._

//this script was originally taken from importing a HAR files, ~/user-files/resources/com/oktaliem/gatling/RecordedSimulation/Odoo Login Scenario.har
class OdooLoginTest extends Simulation {

  val httpProtocol = http
    .baseUrl("http://localhost")
    .inferHtmlResources()
    .userAgentHeader("Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.88 Safari/537.36")

  val headers_0 = Map(
    "Accept" -> "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
    "Accept-Encoding" -> "gzip, deflate, br",
    "Accept-Language" -> "en-US,en;q=0.9",
    "Origin" -> "http://localhost",
    "Sec-Fetch-Mode" -> "navigate",
    "Sec-Fetch-Site" -> "same-origin",
    "Sec-Fetch-User" -> "?1",
    "Upgrade-Insecure-Requests" -> "1")

  val headers_1 = Map(
    "Accept" -> "*/*",
    "Accept-Encoding" -> "gzip, deflate, br",
    "Accept-Language" -> "en-US,en;q=0.9",
    "Sec-Fetch-Mode" -> "cors",
    "Sec-Fetch-Site" -> "same-origin")

  val headers_2 = Map(
    "Accept" -> "*/*",
    "Accept-Encoding" -> "gzip, deflate, br",
    "Accept-Language" -> "en-US,en;q=0.9",
    "Sec-Fetch-Mode" -> "cors",
    "Sec-Fetch-Site" -> "same-origin",
    "X-Requested-With" -> "XMLHttpRequest")

  val headers_6 = Map(
    "Accept" -> "application/json, text/javascript, */*; q=0.01",
    "Accept-Encoding" -> "gzip, deflate, br",
    "Accept-Language" -> "en-US,en;q=0.9",
    "Content-Type" -> "application/json",
    "Origin" -> "http://localhost",
    "Sec-Fetch-Mode" -> "cors",
    "Sec-Fetch-Site" -> "same-origin",
    "X-Requested-With" -> "XMLHttpRequest")

  val headers_7 = Map(
    "Accept" -> "*/*",
    "Accept-Encoding" -> "gzip, deflate, br",
    "Accept-Language" -> "en-US,en;q=0.9",
    "Origin" -> "http://localhost",
    "Sec-Fetch-Mode" -> "cors",
    "Sec-Fetch-Site" -> "same-origin")

  val headers_8 = Map(
    "Accept" -> "image/webp,image/apng,image/*,*/*;q=0.8",
    "Accept-Encoding" -> "gzip, deflate, br",
    "Accept-Language" -> "en-US,en;q=0.9",
    "Sec-Fetch-Mode" -> "no-cors",
    "Sec-Fetch-Site" -> "same-origin")

  val uri2 = "https://www.google-analytics.com/analytics.js"

  val go_to_login_page = group("Go To Login Page") {
    exec(
      http("01 - GO TO LOGIN PAGE")
        .get("/web/login")
        .headers(headers_0)
        .check(status.is(200))
        .check(css("""[name="csrf_token"]""", "value").saveAs("token"))
    ).pause(1)
  }

  val login_to_odoo = group("Login To Odoo") {
    exec(
      http("02 - LOGIN TO ODOO")
        .post("/web/login")
        .headers(headers_0)
        .formParam("csrf_token", """${token}""")
        .formParam("login", "user@example.com")
        .formParam("password", "bitnami")
        .formParam("redirect", "")
        .resources(http("request_1")
          .get("/web/webclient/load_menus/003f16ffa5db0f0bc3d7182bd34ca35055762784")
          .headers(headers_1),
          http("request_2")
            .get("/web/webclient/qweb/3a817ef468b1400ba3be1854ee2435433468d582?mods=base,web,base_import,web_diagram,web_editor,web_kanban_gauge,web_tour")
            .headers(headers_2),
          http("request_3")
            .get(uri2),
          http("request_4")
            .get("/web/webclient/translations/026ae15487c2067877f7b82ffb991974c070d399?mods=base%2Cweb%2Cbase_import%2Cweb_diagram%2Cweb_editor%2Cweb_kanban_gauge%2Cweb_tour&lang=en_US")
            .headers(headers_2),
          http("request_5")
            .get("/web/webclient/locale/en_US"),
          http("request_6")
            .post("/web/dataset/call_kw/res.users/read")
            .headers(headers_6)
            .body(RawFileBody("user-files/resources/com/oktaliem/gatling/RecordedSimulation/0006_request.json")),
          http("request_7")
            .get("/web/static/lib/fontawesome/fonts/fontawesome-webfont.woff2?v=4.7.0")
            .headers(headers_7),
          http("request_8")
            .get("/web/image/res.company/1/favicon/")
            .headers(headers_8),
          http("request_9")
            .get("/web/image?model=res.users&field=image_128&id=2")
            .headers(headers_8),
          http("request_10")
            .post("/web/action/load")
            .headers(headers_6)
            .body(RawFileBody("user-files/resources/com/oktaliem/gatling/RecordedSimulation/0010_request.json")),
          http("request_11")
            .post("/web/dataset/call_kw/ir.module.module/load_views")
            .headers(headers_6)
            .body(RawFileBody("user-files/resources/com/oktaliem/gatling/RecordedSimulation/0011_request.json")),
          http("request_12")
            .post("/web/dataset/search_read")
            .headers(headers_6)
            .body(RawFileBody("user-files/resources/com/oktaliem/gatling/RecordedSimulation/0012_request.json")),
          http("request_13")
            .get("/website/static/description/icon.png")
            .headers(headers_8),
          http("request_14")
            .get("/project/static/description/icon.png")
            .headers(headers_8),
          http("request_15")
            .get("/base/static/img/icons/timesheet_grid.png")
            .headers(headers_8),
          http("request_16")
            .get("/crm/static/description/icon.png")
            .headers(headers_8),
          http("request_17")
            .get("/base/static/img/icons/stock_barcode.png")
            .headers(headers_8),
          http("request_18")
            .get("/stock/static/description/icon.png")
            .headers(headers_8),
          http("request_19")
            .get("/base/static/img/icons/account_accountant.png")
            .headers(headers_8),
          http("request_20")
            .get("/account/static/description/icon.png")
            .headers(headers_8),
          http("request_21")
            .get("/base/static/img/icons/quality_control.png")
            .headers(headers_8),
          http("request_22")
            .get("/base/static/img/icons/mrp_workorder.png")
            .headers(headers_8),
          http("request_23")
            .get("/base/static/img/icons/mrp_plm.png")
            .headers(headers_8),
          http("request_24")
            .get("/mrp/static/description/icon.png")
            .headers(headers_8),
          http("request_25")
            .get("/base/static/img/icons/web_studio.png")
            .headers(headers_8),
          http("request_26")
            .get("/sale_management/static/description/icon.png")
            .headers(headers_8),
          http("request_27")
            .get("/base/static/img/icons/helpdesk.png")
            .headers(headers_8),
          http("request_28")
            .get("/point_of_sale/static/description/icon.png")
            .headers(headers_8),
          http("request_29")
            .get("/note/static/description/icon.png")
            .headers(headers_8),
          http("request_30")
            .get("/website_sale/static/description/icon.png")
            .headers(headers_8),
          http("request_31")
            .get("/purchase/static/description/icon.png")
            .headers(headers_8),
          http("request_32")
            .get("/hr/static/description/icon.png")
            .headers(headers_8),
          http("request_33")
            .get("/hr_attendance/static/description/icon.png")
            .headers(headers_8),
          http("request_34")
            .get("/hr_recruitment/static/description/icon.png")
            .headers(headers_8),
          http("request_35")
            .get("/base/static/img/icons/hr_appraisal.png")
            .headers(headers_8),
          http("request_36")
            .get("/hr_expense/static/description/icon.png")
            .headers(headers_8),
          http("request_37")
            .get("/board/static/description/icon.png")
            .headers(headers_8),
          http("request_38")
            .get("/contacts/static/description/icon.png")
            .headers(headers_8),
          http("request_39")
            .get("/hr_holidays/static/description/icon.png")
            .headers(headers_8),
          http("request_40")
            .get("/mass_mailing_sms/static/description/icon.png")
            .headers(headers_8),
          http("request_41")
            .get("/mail/static/description/icon.png")
            .headers(headers_8),
          http("request_42")
            .get("/hr_skills/static/description/icon.png")
            .headers(headers_8),
          http("request_43")
            .get("/base/static/img/icons/project_forecast.png")
            .headers(headers_8),
          http("request_44")
            .get("/base/static/img/icons/sale_ebay.png")
            .headers(headers_8),
          http("request_45")
            .get("/base/static/img/icons/sale_subscription.png")
            .headers(headers_8),
          http("request_46")
            .get("/base/static/img/icons/sign.png")
            .headers(headers_8),
          http("request_47")
            .get("/base/static/img/icons/voip.png")
            .headers(headers_8),
          http("request_48")
            .get("/base/static/img/icons/website_calendar.png")
            .headers(headers_8),
          http("request_49")
            .get("/survey/static/description/icon.png")
            .headers(headers_8),
          http("request_50")
            .get("/base/static/img/icons/marketing_automation.png")
            .headers(headers_8),
          http("request_51")
            .get("/mass_mailing/static/description/icon.png")
            .headers(headers_8),
          http("request_52")
            .get("/lunch/static/description/icon.png")
            .headers(headers_8),
          http("request_53")
            .get("/maintenance/static/description/icon.png")
            .headers(headers_8),
          http("request_54")
            .get("/calendar/static/description/icon.png")
            .headers(headers_8),
          http("request_55")
            .get("/website_hr_recruitment/static/description/icon.png")
            .headers(headers_8),
          http("request_56")
            .get("/website_blog/static/description/icon.png")
            .headers(headers_8),
          http("request_57")
            .get("/website_slides/static/description/icon.png")
            .headers(headers_8),
          http("request_58")
            .get("/website_forum/static/description/icon.png")
            .headers(headers_8),
          http("request_59")
            .get("/website_event/static/description/icon.png")
            .headers(headers_8),
          http("request_60")
            .get("/fleet/static/description/icon.png")
            .headers(headers_8),
          http("request_61")
            .get("/base/static/img/icons/web_mobile.png")
            .headers(headers_8),
          http("request_62")
            .get("/im_livechat/static/description/icon.png")
            .headers(headers_8),
          http("request_63")
            .get("/repair/static/description/icon.png")
            .headers(headers_8))
    )
  }

  val user = Integer.getInteger("users", 1)
  val ramp_up = java.lang.Long.getLong("rampUp", 0L)

  setUp(scenario("OdooLoginTest")
    .exec(go_to_login_page, login_to_odoo)
    .inject(rampConcurrentUsers(0) to (user) during (ramp_up seconds), constantConcurrentUsers(user) during (ramp_up seconds)))
    .protocols(httpProtocol)

  //mvn clean gatling:test -Dgatling.simulationClass=com.oktaliem.gatling.OdooLoginTest -Dusers=10 -DrampUp=10

}