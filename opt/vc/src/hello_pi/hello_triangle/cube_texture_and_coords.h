/*
Copyright (c) 2012, Broadcom Europe Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the copyright holder nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// Spatial coordinates for the cube

static const GLbyte quadx[6*4*3] = {
   /* FRONT */
   -10, -10,  10,
   10, -10,  10,
   -10,  10,  10,
   10,  10,  10,

   /* BACK */
   -10, -10, -10,
   -10,  10, -10,
   10, -10, -10,
   10,  10, -10,

   /* LEFT */
   -10, -10,  10,
   -10,  10,  10,
   -10, -10, -10,
   -10,  10, -10,

   /* RIGHT */
   10, -10, -10,
   10,  10, -10,
   10, -10,  10,
   10,  10,  10,

   /* TOP */
   -10,  10,  10,
   10,  10,  10,
   -10,  10, -10,
   10,  10, -10,

   /* BOTTOM */
   -10, -10,  10,
   -10, -10, -10,
   10, -10,  10,
   10, -10, -10,
};

/** Texture coordinates for the quad. */
static const GLfloat texCoords[6 * 4 * 2] = {
   0.f,  0.f,
   0.f,  1.f,
   1.f,  0.f,
   1.f,  1.f,

   0.f,  0.f,
   0.f,  1.f,
   1.f,  0.f,
   1.f,  1.f,

   0.f,  0.f,
   0.f,  1.f,
   1.f,  0.f,
   1.f,  1.f,

   0.f,  0.f,
   0.f,  1.f,
   1.f,  0.f,
   1.f,  1.f,

   0.f,  0.f,
   0.f,  1.f,
   1.f,  0.f,
   1.f,  1.f,

   0.f,  0.f,
   0.f,  1.f,
   1.f,  0.f,
   1.f,  1.f
};

// Colors are invisible when textures appear on all 6 faces.
// If textures are disabled, e.g. by commenting out glEnable(GL_TEXTURE_2D),
// the colours will appear.

static const GLfloat colorsf[6*4*4] = {
   1.f,  0.f,  0.f,  1.f,  //red
   1.f,  0.f,  0.f,  1.f,
   1.f,  0.f,  0.f,  1.f,
   1.f,  0.f,  0.f,  1.f,

   0.f,  1.f,  0.f,  1.f,  // blue
   0.f,  1.f,  0.f,  1.f,
   0.f,  1.f,  0.f,  1.f,
   0.f,  1.f,  0.f,  1.f,

   0.f,  0.f,  1.f,  1.f, // green
   0.f,  0.f,  1.f,  1.f,
   0.f,  0.f,  1.f,  1.f,
   0.f,  0.f,  1.f,  1.f,

   0.f, 0.5f, 0.5f,  1.f, // teal
   0.f, 0.5f, 0.5f,  1.f,
   0.f, 0.5f, 0.5f,  1.f,
   0.f, 0.5f, 0.5f,  1.f,

   0.5f, 0.5f,  0.f,  1.f, // yellow
   0.5f, 0.5f,  0.f,  1.f,
   0.5f, 0.5f,  0.f,  1.f,
   0.5f, 0.5f,  0.f,  1.f,

   0.5f,  0.f, 0.5f,  1.f, // purple
   0.5f,  0.f, 0.5f,  1.f,
   0.5f,  0.f, 0.5f,  1.f,
   0.5f,  0.f, 0.5f,  1.f
};
