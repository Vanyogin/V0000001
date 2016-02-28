{
"// GLSL shader autogenerated by cg2glsl.py.\n"
"#if defined(VERTEX)\n"
"\n"
"#if __VERSION__ >= 130\n"
"#define COMPAT_VARYING out\n"
"#define COMPAT_ATTRIBUTE in\n"
"#define COMPAT_TEXTURE texture\n"
"#else\n"
"#define COMPAT_VARYING varying \n"
"#define COMPAT_ATTRIBUTE attribute \n"
"#define COMPAT_TEXTURE texture2D\n"
"#endif\n"
"\n"
"#ifdef GL_ES\n"
"#define COMPAT_PRECISION mediump\n"
"#else\n"
"#define COMPAT_PRECISION\n"
"#endif\n"
"COMPAT_VARYING     float _frame_rotation;\n"
"struct input_dummy {\n"
"    vec2 _video_size;\n"
"    vec2 _texture_size;\n"
"    vec2 _output_dummy_size;\n"
"    float _frame_count;\n"
"    float _frame_direction;\n"
"    float _frame_rotation;\n"
"};\n"
"vec4 _oPosition1;\n"
"input_dummy _IN1;\n"
"vec4 _r0008;\n"
"COMPAT_ATTRIBUTE vec4 VertexCoord;\n"
"COMPAT_ATTRIBUTE vec4 COLOR;\n"
"COMPAT_VARYING vec4 COL0;\n"
"COMPAT_ATTRIBUTE vec4 TexCoord;\n"
"COMPAT_VARYING vec4 TEX0;\n"
"COMPAT_ATTRIBUTE vec4 LUTTexCoord;\n"
"COMPAT_VARYING vec4 TEX1;\n"
" \n"
"uniform mat4 MVPMatrix;\n"
"uniform int FrameDirection;\n"
"uniform int FrameCount;\n"
"uniform COMPAT_PRECISION vec2 OutputSize;\n"
"uniform COMPAT_PRECISION vec2 TextureSize;\n"
"uniform COMPAT_PRECISION vec2 InputSize;\n"
"void main()\n"
"{\n"
"    vec4 _oColor;\n"
"    vec2 _oTex;\n"
"    vec2 _otex_border;\n"
"    vec2 _scale;\n"
"    vec2 _middle;\n"
"    vec2 _diff;\n"
"    vec2 _dist;\n"
"    _r0008 = VertexCoord.x*MVPMatrix[0];\n"
"    _r0008 = _r0008 + VertexCoord.y*MVPMatrix[1];\n"
"    _r0008 = _r0008 + VertexCoord.z*MVPMatrix[2];\n"
"    _r0008 = _r0008 + VertexCoord.w*MVPMatrix[3];\n"
"    _oPosition1 = _r0008;\n"
"    _oColor = COLOR;\n"
"    _scale = (OutputSize/vec2( 3.20000000E+02, 2.40000000E+02))/4.00000000E+00;\n"
"    _middle = (5.00000000E-01*InputSize)/TextureSize;\n"
"    _diff = TexCoord.xy - _middle;\n"
"    _oTex = _middle + _diff*_scale;\n"
"    _dist = LUTTexCoord.xy - vec2( 4.99989986E-01, 4.99989986E-01);\n"
"    _otex_border = vec2( 4.99989986E-01, 4.99989986E-01) + (_dist*OutputSize)/vec2( 1.92000000E+03, 1.08000000E+03);\n"
"    gl_Position = _r0008;\n"
"    COL0 = COLOR;\n"
"    TEX0.xy = _oTex;\n"
"    TEX1.xy = _otex_border;\n"
"} \n"
"#elif defined(FRAGMENT)\n"
"\n"
"#if __VERSION__ >= 130\n"
"#define COMPAT_VARYING in\n"
"#define COMPAT_TEXTURE texture\n"
"out vec4 FragColor;\n"
"#else\n"
"#define COMPAT_VARYING varying\n"
"#define FragColor gl_FragColor\n"
"#define COMPAT_TEXTURE texture2D\n"
"#endif\n"
"\n"
"#ifdef GL_ES\n"
"#ifdef GL_FRAGMENT_PRECISION_HIGH\n"
"precision highp float;\n"
"#else\n"
"precision mediump float;\n"
"#endif\n"
"#define COMPAT_PRECISION mediump\n"
"#else\n"
"#define COMPAT_PRECISION\n"
"#endif\n"
"COMPAT_VARYING     float _frame_rotation;\n"
"struct input_dummy {\n"
"    vec2 _video_size;\n"
"    vec2 _texture_size;\n"
"    vec2 _output_dummy_size;\n"
"    float _frame_count;\n"
"    float _frame_direction;\n"
"    float _frame_rotation;\n"
"};\n"
"vec4 _ret_0;\n"
"vec4 _TMP16;\n"
"float _TMP15;\n"
"float _TMP19;\n"
"float _TMP14;\n"
"float _TMP13;\n"
"float _TMP12;\n"
"float _TMP11;\n"
"vec2 _TMP10;\n"
"vec2 _TMP9;\n"
"vec2 _TMP18;\n"
"vec3 _TMP7;\n"
"vec3 _TMP5;\n"
"vec3 _TMP4;\n"
"vec2 _TMP3;\n"
"float _TMP2;\n"
"float _TMP17;\n"
"float _TMP1;\n"
"uniform sampler2D Texture;\n"
"uniform sampler2D bg;\n"
"input_dummy _IN1;\n"
"float _a0030;\n"
"float _x0032;\n"
"vec3 _r0042;\n"
"vec2 _TMP53;\n"
"vec2 _a0060;\n"
"vec2 _x0062;\n"
"vec2 _a0064;\n"
"float _a0066;\n"
"float _b0066;\n"
"float _a0070;\n"
"float _a0072;\n"
"float _b0074;\n"
"float _x0076;\n"
"float _TMP77;\n"
"COMPAT_VARYING vec4 TEX0;\n"
"COMPAT_VARYING vec4 TEX1;\n"
" \n"
"uniform int FrameDirection;\n"
"uniform int FrameCount;\n"
"uniform COMPAT_PRECISION vec2 OutputSize;\n"
"uniform COMPAT_PRECISION vec2 TextureSize;\n"
"uniform COMPAT_PRECISION vec2 InputSize;\n"
"void main()\n"
"{\n"
"    vec2 _uv;\n"
"    vec3 _acc;\n"
"    float _dof;\n"
"    int _i1;\n"
"    float _fi1;\n"
"    vec2 _q1;\n"
"    vec3 _n1;\n"
"    vec3 _m1;\n"
"    vec3 _mp1;\n"
"    vec3 _r1;\n"
"    vec2 _s1;\n"
"    float _d1;\n"
"    float _edge1;\n"
"    vec4 _snowscape;\n"
"    vec4 _frame;\n"
"    vec4 _background;\n"
"    _uv = TEX0.xy*(TextureSize.xy/InputSize.xy);\n"
"    _acc = vec3( 0.00000000E+00, 0.00000000E+00, 0.00000000E+00);\n"
"    _a0030 = float(FrameCount)*1.00000001E-01;\n"
"    _TMP1 = sin(_a0030);\n"
"    _dof = 5.00000000E+00*_TMP1;\n"
"    _i1 = 0;\n"
"    for (; float(_i1) < 1.50000000E+01; _i1 = _i1 + 1) { \n"
"        _fi1 = float(_i1);\n"
"        _q1 = _uv*(1.00000000E+00 + _fi1);\n"
"        _x0032 = _fi1*7.23891687E+00;\n"
"        _TMP17 = floor(_x0032);\n"
"        _TMP2 = _x0032 - _TMP17;\n"
"        _q1 = _q1 + vec2(_q1.y*(7.50000000E-01*_TMP2 - 3.75000000E-01), (-2.99999993E-02*float(FrameCount))/(1.00000000E+00 + _fi1*2.99999993E-02));\n"
"        _TMP3 = floor(_q1);\n"
"        _n1 = vec3(_TMP3.x, _TMP3.y, 3.11889992E+01 + _fi1);\n"
"        _TMP4 = floor(_n1);\n"
"        _TMP5 = fract(_n1);\n"
"        _m1 = _TMP4*9.99999975E-06 + _TMP5;\n"
"        _r0042.x = dot(vec3( 1.33231220E+01, 2.11212006E+01, 2.18111992E+01), _m1);\n"
"        _r0042.y = dot(vec3( 2.35112000E+01, 2.87311993E+01, 1.47212000E+01), _m1);\n"
"        _r0042.z = dot(vec3( 2.17112293E+01, 1.19312000E+01, 6.13933983E+01), _m1);\n"
"        _TMP7 = fract(_r0042);\n"
"        _mp1 = (3.14159004E+04 + _m1)/_TMP7;\n"
"        _r1 = fract(_mp1);\n"
"        _TMP18 = floor(_q1);\n"
"        _TMP53 = _q1 - _TMP18;\n"
"        _a0060 = ((_TMP53 - 5.00000000E-01) + 8.99999976E-01*_r1.xy) - 4.49999988E-01;\n"
"        _s1 = abs(_a0060);\n"
"        _x0062 = 1.00000000E+01*_q1.yx;\n"
"        _TMP9 = fract(_x0062);\n"
"        _a0064 = 2.00000000E+00*_TMP9 - 1.00000000E+00;\n"
"        _TMP10 = abs(_a0064);\n"
"        _s1 = _s1 + 9.99999978E-03*_TMP10;\n"
"        _a0066 = _s1.x - _s1.y;\n"
"        _b0066 = _s1.x + _s1.y;\n"
"        _TMP11 = max(_a0066, _b0066);\n"
"        _TMP12 = max(_s1.x, _s1.y);\n"
"        _d1 = (6.00000024E-01*_TMP11 + _TMP12) - 9.99999978E-03;\n"
"        _a0070 = (_fi1 - 5.00000000E+00) - _dof;\n"
"        _TMP13 = abs(_a0070);\n"
"        _a0072 = 5.00000000E-01*_TMP13;\n"
"        _TMP14 = min(_a0072, 1.00000000E+00);\n"
"        _edge1 = 5.00000007E-02 + 5.00000007E-02*_TMP14;\n"
"        _b0074 = -_edge1;\n"
"        _x0076 = (_d1 - _edge1)/(_b0074 - _edge1);\n"
"        _TMP19 = min(1.00000000E+00, _x0076);\n"
"        _TMP77 = max(0.00000000E+00, _TMP19);\n"
"        _TMP15 = _TMP77*_TMP77*(3.00000000E+00 - 2.00000000E+00*_TMP77);\n"
"        _acc = _acc + vec3(_TMP15*(_r1.x/(1.00000000E+00 + 1.99999996E-02*_fi1)), _TMP15*(_r1.x/(1.00000000E+00 + 1.99999996E-02*_fi1)), _TMP15*(_r1.x/(1.00000000E+00 + 1.99999996E-02*_fi1)));\n"
"    } \n"
"    _snowscape = vec4(_acc.x, _acc.y, _acc.z, 1.00000000E+00);\n"
"    _frame = COMPAT_TEXTURE(Texture, TEX0.xy);\n"
"    _TMP16 = COMPAT_TEXTURE(bg, TEX1.xy);\n"
"    _background = vec4(_TMP16.x, _TMP16.y, _TMP16.z, _TMP16.w);\n"
"    _ret_0 = _frame + _background.w*(_snowscape - _frame);\n"
"    FragColor = _ret_0;\n"
"    return;\n"
"} \n"
"#endif\n"
},