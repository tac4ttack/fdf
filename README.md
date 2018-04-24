--------------------------------------------
/***** FDF - A Wireframe Map Renderer *****/
--------------------------------------------

Features:
---------
- game style isometric projection
- top view projection (useless due to lack of color and altitude bind)
- grid rendering
- dot rendering
- keyboard and mouse adjustable zoom
- keyboard adjustable Z scale
- translations
- adjustable hue
- screen center guides
- centering render
- reset settings
- automatic window size
- multi input support
- input repetition


Keybinds:
---------
ESC                -> exit program
Arrows             -> move render
Numpad + -         -> zoom in/out
Numpad = /         -> adjust Z scale
Numpad *           -> reset render
Numpad 7 1         -> rotate on X axis (disabled!)
Numpad 8 2         -> rotate on Y axis (disabled!)
Numpad 9 3         -> rotate on Z axis (disabled!)
Numpad Del         -> reset hue
G                  -> toggle grid rendering mode
P                  -> toggle dot rendering mode
I                  -> toggle game isometric projection
T                  -> toggle top view projection
M                  -> toggle ON screen center guides
C                  -> center render
,                  -> toggle OFF screen center guides
Z                  -> reset zoom
F13 Del            -> adjust red quantity in hue
F14 End            -> adjust green quantity in hue
F15 Page_Down      -> adjust blue quantity in hue
Home Page_Up       -> adjust alpha quantity in hue (disabled!)


Planned features:
-----------------
- multi compatibility with different operating systems via automatic compilation
- 3 axes rotation controlled with keyboard and mouse
- new projection types
- hue changing according to points altitude
- antialiasing
- plain colored surfaces/polygones
- motion blur
- map file browser
- more different rendering techniques such as polygones, vertical/horizontal only segments
- onscreen help and rendering information such as number of points etc...
- changing point altitude with mouse click
- point hue detection in the map file
- export render in XPM file format


Compatibility:
--------------
For the moment the FDF binary is only compatible for MacOS El Capitan with X11 server required.
Linux BSD operating systems and newer MacOS versions compatibility is planned in the future.