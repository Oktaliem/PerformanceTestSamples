<h1 align="center"><img src="https://user-images.githubusercontent.com/26521948/72658109-63a1d400-39e7-11ea-9667-c652586b4508.png" alt="Apache JMeter logo" /></h1>
<h4 align="center">SOFTWARE TESTING ENTHUSIAST</h4>
<br>

## Server-side Performance Testing tools
Tools that being used in this repository:
- Apache JMeter
- Gatling
- LoadRunner

Scenario : Login to Odoo

## Client-side Performace Testing tools
Tools that being used in this repository:
- Web.dev / Chrome Extention - Lighthouse
- Webpagetest

Scenario : Go to Odoo Official Webpage

- Jmeter & Selenium
- LoadRunner - TrueClient protocol

Scenario : Login to Odoo


## System Under Test - Install Odoo via Docker
```
$ curl -sSL https://raw.githubusercontent.com/bitnami/bitnami-docker-odoo/master/docker-compose.yml > docker-compose.yml
$ docker-compose up -d
```

## APACHE JMETER

###### Download and Install JMeter
[Download JMeter](https://jmeter.apache.org/download_jmeter.cgi)

[Install JMeter](https://www.edureka.co/blog/how-to-install-jmeter)

###### Running server-side load testing demo with JMeter - Web Application
```properties
1. Go to your JMeter path ${your_project_path}/PerformaceTestSamples/apache-jmeter-5.2.1/bin/
2. Run this below syntax
$ ./jmeter -Jusers=50 -Jrampup=50 -Jhold=50 -Jrampdown=50 -n -t "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/testscenario/Odoo_Login_Scenario_Recorder.jmx"  -l "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/Odoo_Login_Scenario_Recorder.jtl" -e -o "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/"
```

###### Open JMeter HTML Report
```
${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/index.html
```

###### JMeter Youtube Demo
   <a href="https://youtu.be/DwLp7XcLdZo" target="_blank"><img src="https://user-images.githubusercontent.com/26521948/72658109-63a1d400-39e7-11ea-9667-c652586b4508.png" 
   alt="CLICK HERE" width="140" height="80" border="10" /></a>
   


## GATLING

###### Download and Install Gatling
[Download & Install](https://gatling.io/docs/current/installation)

###### Running server-side load testing demo with Gatling - Web Application
```properties
1. Go to your project path ${your_project_path}/PerformaceTestSamples/gatling/
2. Run this syntax
$ mvn clean gatling:test -Dgatling.simulationClass=com.oktaliem.gatling.OdooLoginTest -Dusers=50 -DrampUp=50

```

###### Open Gatling HTML Report
```
${path_to_your_project}/PerformaceTestSamples/target/gatling/odoologintest-${gatling_id_report}/index.html
```

###### Gatling Youtube Demo
   <a href="https://youtu.be/HhyNP2VgNL8" target="_blank"><img src="https://user-images.githubusercontent.com/26521948/72658109-63a1d400-39e7-11ea-9667-c652586b4508.png" 
   alt="CLICK HERE" width="140" height="80" border="10" /></a>


## LOADRUNNER - HTML/Http Protocol

###### Download and Install LoadRunner
[Download & Install](https://www.guru99.com/guide-to-download-and-install-hp-loadrunner-12-0.html)

[Virtual User Generator Basic Tutorial ](https://www.guru99.com/understanding-vugen-in-loadrunner.html)

[LoadRunner Controller Basic Tutorial](https://www.guru99.com/how-to-use-controller-in-loadrunner.html)

[LoadRunner Analyzer Basic Tutorial](https://www.guru99.com/how-to-use-analyzer-in-loadrunner-12-0.html)

###### Running server-side load testing demo with LoadRunner - Web Application - Youtube Demo
   <a href="https://youtu.be/H7MB7pD83Cw" target="_blank"><img src="https://user-images.githubusercontent.com/26521948/72658109-63a1d400-39e7-11ea-9667-c652586b4508.png" 
   alt="CLICK HERE" width="140" height="80" border="10" /></a>

## WEBPAGETEST

###### Webpagetest Youtube Demo
   <a href="https://youtu.be/jC8l19sHtLk" target="_blank"><img src="https://user-images.githubusercontent.com/26521948/72658109-63a1d400-39e7-11ea-9667-c652586b4508.png" 
   alt="CLICK HERE" width="140" height="80" border="10" /></a>

## WEB.DEV

###### web.dev/lighthouse Youtube Demo
   <a href="https://youtu.be/FpFtM2rP56Q" target="_blank"><img src="https://user-images.githubusercontent.com/26521948/72658109-63a1d400-39e7-11ea-9667-c652586b4508.png" 
   alt="CLICK HERE" width="140" height="80" border="10" /></a>


## JMETER & SELENIUM
[Add WebDriver Plugin](https://jmeter-plugins.org/wiki/WebDriverTutorial/)

[Documentation](https://github.com/undera/jmeter-plugins-webdriver)

###### Running End to End Client-side load testing demo with JMeter & Selenium - Web Application
```properties
1. Go to your JMeter path ${your_project_path}/PerformaceTestSamples/apache-jmeter-5.2.1/bin/
2. Run this below syntax
$ ./jmeter -Jusers=10 -Jrampup=10 -Jhold=30 -Jrampdown=10 -n -t "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/testscenario/Odoo_Login_Scenario_Selenium.jmx"  -l "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/Odoo_Login_Scenario_Selenium.jtl" -e -o "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/"
```
###### JMeter-Selenium Youtube Demo
   <a href="https://youtu.be/FNMTDnkWOVY" target="_blank"><img src="https://user-images.githubusercontent.com/26521948/72658109-63a1d400-39e7-11ea-9667-c652586b4508.png" 
   alt="CLICK HERE" width="140" height="80" border="10" /></a>

## LOADRUNNER - TruClient Protocol

```
In-progress
```
