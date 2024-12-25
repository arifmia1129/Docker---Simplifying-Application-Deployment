# Base image
FROM node:latest


# Settings

WORKDIR /app

COPY ./package*.json ./

RUN npm install

COPY . ./

EXPOSE 3000


# Startup
CMD [ "node", "index.js" ]

