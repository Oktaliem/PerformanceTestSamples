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
1. Go to your JMeter path ${your_project_path}/PerformaceTestSamples/apache-jmeter-5.2.1/
2. Run this below syntax
$ ./jmeter -Jusers=50 -Jrampup=50 -Jhold=50 -Jrampdown=50 -n -t "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/testscenario/Odoo_Login_Scenario_Recorder.jmx"  -l "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/Odoo_Login_Scenario_Recorder.jtl" -e -o "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/"

or

> jmeter -Jusers=50 -Jrampup=50 -Jhold=50 -Jrampdown=50 -n -t "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/testscenario/Odoo_Login_Scenario_Recorder.jmx"  -l "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/Odoo_Login_Scenario_Recorder.jtl" -e -o "${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/"

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
1. Go to your project path ${your_project_path}/PerformaceTestSamples/gatling
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

###### Running server-side load testing demo with LoadRunner - Web Application
```
In-progress
```

###### Open LoadRunner HTML Report
```
In-progress
```

## WEBPAGETEST

###### Webpagetest Youtube Demo
   <a href="https://youtu.be/jC8l19sHtLk" target="_blank"><img src="https://user-images.githubusercontent.com/26521948/72658109-63a1d400-39e7-11ea-9667-c652586b4508.png" 
   alt="CLICK HERE" width="140" height="80" border="10" /></a>

## WEB.DEV
```
In-progress
```


## JMETER & SELENIUM
[Add WebDriver Plugin](https://jmeter-plugins.org/wiki/WebDriverTutorial/)

```
In-progress
```


## LOADRUNNER - TruClient Protocol

```
In-progress
```
