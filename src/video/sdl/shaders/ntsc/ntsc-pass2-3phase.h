{
"// GLSL shader autogenerated by cg2glsl.py.\n"
"#if defined(VERTEX)\n"
"\n"
"#if __VERSION__ >= 130\n"
"#define COMPAT_VARYING out\n"
"#define COMPAT_ATTRIBUTE in\n"
"#define COMPAT_TEXTURE texture\n"
"#else\n"
"#define COMPAT_VARYING varying\n"
"#define COMPAT_ATTRIBUTE attribute\n"
"#define COMPAT_TEXTURE texture2D\n"
"#endif\n"
"\n"
"#ifdef GL_ES\n"
"#define COMPAT_PRECISION mediump\n"
"#else\n"
"#define COMPAT_PRECISION\n"
"#endif\n"
"COMPAT_VARYING     vec2 VARtex;\n"
"struct data {\n"
"    vec2 VARtex;\n"
"};\n"
"struct input_dummy {\n"
"    vec2 _video_size;\n"
"    vec2 _texture_size;\n"
"    vec2 _output_dummy_size;\n"
"    float _frame_count;\n"
"};\n"
"vec4 _oPosition1;\n"
"data _oData1;\n"
"input_dummy _IN1;\n"
"vec4 _r0010;\n"
"COMPAT_ATTRIBUTE vec4 VertexCoord;\n"
"COMPAT_ATTRIBUTE vec4 TexCoord;\n"
" \n"
"uniform mat4 MVPMatrix;\n"
"uniform int FrameDirection;\n"
"uniform int FrameCount;\n"
"uniform COMPAT_PRECISION vec2 OutputSize;\n"
"uniform COMPAT_PRECISION vec2 TextureSize;\n"
"uniform COMPAT_PRECISION vec2 InputSize;\n"
"void main()\n"
"{\n"
"    _r0010 = VertexCoord.x*MVPMatrix[0];\n"
"    _r0010 = _r0010 + VertexCoord.y*MVPMatrix[1];\n"
"    _r0010 = _r0010 + VertexCoord.z*MVPMatrix[2];\n"
"    _r0010 = _r0010 + VertexCoord.w*MVPMatrix[3];\n"
"    _oPosition1 = _r0010;\n"
"    VARtex = TexCoord.xy - vec2(5.00000000E-01/TextureSize.x, 0.00000000E+00);\n"
"    gl_Position = _r0010;\n"
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
"COMPAT_VARYING     vec2 VARtex;\n"
"struct data {\n"
"    vec2 VARtex;\n"
"};\n"
"struct input_dummy {\n"
"    vec2 _video_size;\n"
"    vec2 VARtexture_size;\n"
"    vec2 _output_dummy_size;\n"
"    float _frame_count;\n"
"};\n"
"vec4 _ret_0;\n"
"vec4 _TMP3;\n"
"vec4 _TMP2;\n"
"vec4 _TMP1;\n"
"input_dummy _IN1;\n"
"data _vertex1;\n"
"uniform sampler2D Texture;\n"
"vec2 _c0013;\n"
"vec2 _c0015;\n"
"vec3 _r0021;\n"
" \n"
"uniform int FrameDirection;\n"
"uniform int FrameCount;\n"
"uniform COMPAT_PRECISION vec2 OutputSize;\n"
"uniform COMPAT_PRECISION vec2 TextureSize;\n"
"uniform COMPAT_PRECISION vec2 InputSize;\n"
"void main()\n"
"{\n"
"    float _one_x;\n"
"    vec3 _signal;\n"
"    vec3 _sums1;\n"
"    _one_x = 1.00000000E+00/TextureSize.x;\n"
"    _c0013 = VARtex + vec2(-2.40000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(2.40000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _sums1*vec3( -1.20200002E-05, -1.18846998E-04, -1.18846998E-04);\n"
"    _c0013 = VARtex + vec2(-2.30000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(2.30000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -2.21459995E-05, -2.71305995E-04, -2.71305995E-04);\n"
"    _c0013 = VARtex + vec2(-2.20000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(2.20000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -1.31549996E-05, -5.02642011E-04, -5.02642011E-04);\n"
"    _c0013 = VARtex + vec2(-2.10000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(2.10000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -1.20200002E-05, -9.30832990E-04, -9.30832990E-04);\n"
"    _c0013 = VARtex + vec2(-2.00000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(2.00000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -4.99790003E-05, -1.45101303E-03, -1.45101303E-03);\n"
"    _c0013 = VARtex + vec2(-1.90000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.90000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -1.13939997E-04, -2.06474401E-03, -2.06474401E-03);\n"
"    _c0013 = VARtex + vec2(-1.80000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.80000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -1.22149999E-04, -2.70043197E-03, -2.70043197E-03);\n"
"    _c0013 = VARtex + vec2(-1.70000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.70000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -5.61200022E-06, -3.24127590E-03, -3.24127590E-03);\n"
"    _c0013 = VARtex + vec2(-1.60000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.60000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 1.70515996E-04, -3.52494791E-03, -3.52494791E-03);\n"
"    _c0013 = VARtex + vec2(-1.50000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.50000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 2.37198998E-04, -3.35028395E-03, -3.35028395E-03);\n"
"    _c0013 = VARtex + vec2(-1.40000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.40000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 1.69640000E-04, -2.49172910E-03, -2.49172910E-03);\n"
"    _c0013 = VARtex + vec2(-1.30000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.30000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 2.85688002E-04, -7.21148972E-04, -7.21148972E-04);\n"
"    _c0013 = VARtex + vec2(-1.20000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.20000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 9.84573970E-04, 2.16465909E-03, 2.16465909E-03);\n"
"    _c0013 = VARtex + vec2(-1.10000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.10000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 2.01868289E-03, 6.31363504E-03, 6.31363504E-03);\n"
"    _c0013 = VARtex + vec2(-1.00000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(1.00000000E+01*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 2.00227508E-03, 1.17891030E-02, 1.17891030E-02);\n"
"    _c0013 = VARtex + vec2(-9.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(9.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -9.09882016E-04, 1.85456593E-02, 1.85456593E-02);\n"
"    _c0013 = VARtex + vec2(-8.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(8.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -7.04908092E-03, 2.64143962E-02, 2.64143962E-02);\n"
"    _c0013 = VARtex + vec2(-7.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(7.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -1.32228602E-02, 3.51007096E-02, 3.51007096E-02);\n"
"    _c0013 = VARtex + vec2(-6.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(6.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( -1.26069309E-02, 4.41965684E-02, 4.41965684E-02);\n"
"    _c0013 = VARtex + vec2(-5.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(5.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 2.46085995E-03, 5.32072037E-02, 5.32072037E-02);\n"
"    _c0013 = VARtex + vec2(-4.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(4.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 3.58682238E-02, 6.15902767E-02, 6.15902767E-02);\n"
"    _c0013 = VARtex + vec2(-3.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(3.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 8.40164497E-02, 6.88036010E-02, 6.88036010E-02);\n"
"    _c0013 = VARtex + vec2(-2.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(2.00000000E+00*_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 1.35563493E-01, 7.43561909E-02, 7.43561909E-02);\n"
"    _c0013 = VARtex + vec2(-_one_x, 0.00000000E+00);\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0013);\n"
"    _c0015 = VARtex + vec2(_one_x, 0.00000000E+00);\n"
"    _TMP2 = COMPAT_TEXTURE(Texture, _c0015);\n"
"    _sums1 = _TMP1.xyz + _TMP2.xyz;\n"
"    _signal = _signal + _sums1*vec3( 1.75261274E-01, 7.78565630E-02, 7.78565630E-02);\n"
"    _TMP3 = COMPAT_TEXTURE(Texture, VARtex);\n"
"    _signal = _signal + _TMP3.xyz*vec3( 1.90176547E-01, 7.90523961E-02, 7.90523961E-02);\n"
"    _r0021.x = dot(vec3( 1.00000000E+00, 9.55999970E-01, 6.20999992E-01), _signal);\n"
"    _r0021.y = dot(vec3( 1.00000000E+00, -2.72000015E-01, -6.47400022E-01), _signal);\n"
"    _r0021.z = dot(vec3( 1.00000000E+00, -1.10599995E+00, 1.70459998E+00), _signal);\n"
"    _ret_0 = vec4(_r0021.x, _r0021.y, _r0021.z, 1.00000000E+00);\n"
"    FragColor = _ret_0;\n"
"    return;\n"
"} \n"
"#endif\n"
},