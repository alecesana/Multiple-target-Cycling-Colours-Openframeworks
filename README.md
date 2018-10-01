# Multiple target Cycling Colours Openframeworks

Auopenvideo


The code in the repository is a non general version of the function used to rotate colours in the Australian Open 2017 interactive installation, with the blending restricted to three colours. 

It uses c++ linear interpolation function (lerp), fmodf(), Openframeworks function OfGetElapsedTimef() to blend the three chosen colors between sub-groups of three objects in a timely manner, and can be virtually applied to any number of objects . 

Also, some simple object iteration is applied, following the great resource that is OfBook (link) The resulting output will be:

Outputvideo


The resulting visual effect of the color moving across groups of objects . Observing a single circle object will reveal the cycling nature of the effect in blending the colours in a distributed way between groups of objects. The effect can be noticed also choosing one shade of the colour currently on screen and observing it blending along to the other objects. 

If your plan is to iterate between more than three colours or affect the timing of the swap you'll need to modify the function (shared under MIT Licence).

Adding a third dimension, iterating across different objects, using ofNode class (link) some rotations and adding sound reactivity could result in something like these 3D mandala geometries

3d Sound reactive video

A more generalized version of the function could be used to apply behaviours to objects in a programmatic way.
