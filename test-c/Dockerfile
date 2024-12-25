FROM ubuntu:latest

WORKDIR /app


COPY main.c .


RUN apt-get update && \
    apt-get install -y build-essential


RUN gcc -o main main.c


CMD [ "./main" ]


