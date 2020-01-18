## Server-side Performance Testing tools
Tools that being used in this repository:
- Apache JMeter
- Gatling
- LoadRunner

## Client-side Performace Testing tools
Tools that being used in this repository:
- Web.dev / Chrome Extention - Lighthouse
- Webpagetest

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

```

###### Open JMeter HTML Report
```
${your_project_path}/PerformanceTestSamples/apache-jmeter-5.2.1/bin/htmlreport/index.html
```

## GATLING

###### Running server-side load testing demo with Gatling - Web Application
```properties
1. Go to your project path ${your_project_path}/PerformaceTestSamples
2. Run this syntax
$ mvn clean gatling:test -Dgatling.simulationClass=com.oktaliem.gatling.OdooLoginTest -Dusers=50 -DrampUp=50

```

###### Open Gatling HTML Report
```
${path_to_your_project}/PerformaceTestSamples/target/gatling/odoologintest-${gatling_id_report}/index.html
```

## Running server-side load testing demo with LoadRunner - Web Application



## Open LoadRunner HTML Report





