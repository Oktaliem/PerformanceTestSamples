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

## Running server-side load testing demo with JMeter
```properties
1. Go to your JMeter path {path_to_JMeter}/apache-jmeter-5.2.1/
2. Run this below syntax


```


## Running server-side load testing demo with Gatling
```properties
1. Go to your project path ${your_project_path}/PerformaceTestSamples
2. Run this syntax
$ mvn clean gatling:test -Dgatling.simulationClass=com.oktaliem.gatling.OdooLoginTest -Dusers=50 -DrampUp=50

```

## Running server-side load testing demo with LoadRunner



## Open JMeter HTML Report


## Open Gatling HTML Report
```
{path_to_your_project}/PerformaceTestSamples/target/gatling/odoologintest-{gatling_id_report}/index.html
```

## Open LoadRunner HTML Report





