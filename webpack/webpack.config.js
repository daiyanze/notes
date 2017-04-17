module.exports = {

    // Define entry point
    entry: './src/js/script1.js',

    // Define outupt point
    output: {
        path: '/Users/daiyanze/Desktop/webpack/dist',
        filename: 'bundle.js'
    },

    // Use modules
    module: {
      loaders: [
        {
          test: /\.js$/,
          exclude: /(node_modules)/,
          loader: 'babel-loader',
          query: {
            presets: ['es2015']
          }
        },
        {
          test: /\.css$/,
          loader: 'style-loader!css-loader'
        },
        {
          test: /\.scss$/,
          loader: 'style-loader!css-loader!sass-loader'
        }
      ]
    }
};
