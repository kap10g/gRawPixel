# gRawPixel
# Pixar, Dreamworks, ratroom, Titmouse

# The following is to create a series of subpixel overrides to common libraries
# As the CCD sensor size keeps going up but projection and display is much slower to catch up with pixel density

# These are just ideas but the project is to create an override for the pixel and take advantage of Plasma displays
# Subpixel information is saved, honestly intended for (currently) CUDA generated output, initially

# I intend to override renderers particularly and create sub-pixel information for what I would call
# The 'sub-atomic pixel'

# The intension is to use the abilties of Plasma displays to the maximum capability
# While also making different ways to downsample the format for standard displays

# Ideally this should be projected in cinema in the future while keeping a low natural resolution

# A general description: a pixel with much more virtual (or not) camera raw data encoded into a single pixel
# The format will also contain a transformation matrix for each rawPixel so it can be rotated and blended into 
# Neighboring pixels through a unique system of interaction with code for standard displays and also experimentation
