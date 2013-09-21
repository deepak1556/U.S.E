# Universal Scene Editor

## Install

First, clone this repository:
```
git clone git://github.com/deepak1556/U.S.E.git
```

Install node.js(Only needed for building)
grunt-cli as a global module
```
npm install grunt-cli -g
npm install bower -g
```

then install grunt and its modules in the project's folder
```
cd U.S.E/
npm install
bower install
```

## Running the app

```
grunt server
```

### Features-List

* __Editable Items__
    * __Bodies__
        * Translate, rotate, scale
        * Copy, paste, duplicate
        * Copy joints along with bodies (minor)
        * Flip bodies aross axis
    * __Verties__
        * Translate, rotate, scale
        * Insert along existing edge
        * Append/insert to a chain (draw a sequence of points)
    * __Joints__ 
        * __Types__
            * Revolute
            * Prismatic
            * Distance
            * Rope
            * Wheel
        * Change between bodies
        * Set local anchor positions
        * Set limits
        * Rotate local axis
        * Set damping and frequency
        * Structure duplication simple as joints can be moved along with bodies
    * __Images__
        * Positon images as background or use them for creating physics object
        * Attach image to bodies
        * Translate, rotate, scale
        * Duplicate
        * Set opacity, linear filter, flip
    * __World__
        * Set gravity

* __Editor__ 
    * Referene Grid
    * Items can be multi-selected
    * Undo/Redo selection
    * Multiple Editor views per document
    * Items an be named for access from program
    * Move Items betwee views
    * Interative View to test scene
    * Multiple test views 
    * Pause, single step, modify speed
    * Render joints, body COM etc.
    * __Item Browser__
        * Show items in the scene in a textual list
        * Allow selection and name changing of items
        * List can be filtered to find items
        * Hovering mouse over an item in the list will highlight it in the scene view

* __Scripting__
    * Anything created via GUI can be scripted
    * Script-editor with code highlighting, linting and auto-ompiling
    * Scripts can interact with user while execution for data
