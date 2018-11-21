# ZZ2 F5 CI bootstrap

## Run the app

- `npm install` to install all dependencies
- `npm run start` to start the app

## Controllers

Controllers are located in the `src/controllers` folder. They contains routing of the app and use [Express](http://expressjs.com/).

## Views

Views are located in the `src/views` folder. View are [EJS](http://ejs.co/) templates.

## Services

Services are located in the `src/services` folder. It contains all the logic of the app.

## Assets

All assets (JS, CSS, Images) are located in public folder. These assets are accessible via `/assets/{asset-name}` URL.
For example: `/assets/styles/main.css` is the url to access `public/styles/main.css`.
