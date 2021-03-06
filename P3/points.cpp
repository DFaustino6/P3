#define NTRI(x) (sizeof(x)/sizeof(x[0]))  

const float vertices[] = {
//-----------FRONT--------------
-0.38113f,	 0.50066f,	0.1f, //C   0
-0.38113f,	 0.35155f,	0.1f, //D   1    
 0.42919f,	 0.35285f,	0.1f, //E   2
 0.42723f,	 0.50132f,	0.1f, //F   3
-0.40000f,	 0.50000f,	0.1f, //G   4
-0.42467f,	 0.49923f,	0.1f, //H   5
-0.44061f,	 0.49690f,	0.1f, //I   6
-0.40250f,	 0.35182f,	0.1f, //J   7
-0.41961f,	 0.35104f,	0.1f, //K   8
-0.45267f,	 0.49456f,	0.1f, //L   9
-0.47134f,	 0.49067f,	0.1f, //M   10
-0.43478f,	 0.34871f,	0.1f, //N   11
-0.48845f,	 0.48678f,	0.1f, //O   12
-0.50712f,	 0.48212f,	0.1f, //P   13
-0.52346f,	 0.47589f,	0.1f, //Q   14
-0.45034f,	 0.34599f,	0.1f, //R   15
-0.54018f,	 0.46734f,	0.1f, //S   16
-0.55263f,	 0.46034f,	0.1f, //T   17
-0.56430f,	 0.45100f,	0.1f, //U   18
-0.46667f,	 0.34093f,	0.1f, //V   19
-0.47873f,	 0.33665f,	0.1f, //W   20
-0.49156f,	 0.33121f,	0.1f, //Z   21
-0.57363f,	 0.44322f,	0.1f, //A1  22
-0.58413f,	 0.43311f,	0.1f, //B1  23
-0.59019f,	 0.42601f,	0.1f, //C1  24
-0.59635f,	 0.41738f,	0.1f, //D1  25
-0.60252f,	 0.40721f,	0.1f, //E1  26
-0.60745f,	 0.39797f,	0.1f, //F1  27
-0.49990f,	 0.32617f,	0.1f, //G1  28
-0.50853f,	 0.32154f,	0.1f, //H1  29
-0.51593f,	 0.31538f,	0.1f, //I1  30
-0.52394f,	 0.30891f,	0.1f, //J1  31
-0.61207f,	 0.38780f,	0.1f, //K1  32
-0.53103f,	 0.30213f,	0.1f, //L1  33
-0.61638f,	 0.37917f,	0.1f, //M1  34
-0.53719f,	 0.29535f,	0.1f, //N1  35
-0.54428f,	 0.28672f,	0.1f, //O1  36
-0.62070f,	 0.36530f,	0.1f, //P1  37
-0.55075f,	 0.27933f,	0.1f, //Q1  38
-0.62378f,	 0.35390f,	0.1f, //R1  39
-0.62594f,	 0.34435f,	0.1f, //S1  40
-0.62852f,	 0.33312f,	0.1f, //T1  41
-0.63236f,	 0.31747f,	0.1f, //U1  42
-0.55747f,	 0.26976f,	0.1f, //V1  43
-0.56414f,	 0.25925f,	0.1f, //W1  44
-0.57004f,	 0.24950f,	0.1f, //Z1  45
-0.63801f,	 0.29259f,	0.1f, //A2  46
-0.64442f,	 0.26668f,	0.1f, //B2  47
-0.65109f,	 0.24027f,	0.1f, //C2  48
-0.58184f,	 0.22565f,	0.1f, //D2  49
-0.59261f,	 0.20025f,	0.1f, //E2  50
-0.65783f,	 0.21275f,	0.1f, //F2  51
-0.59777f,	 0.19019f,	0.1f, //G2  52
-0.66191f,	 0.19590f,	0.1f, //H2  53
-0.60538f,	 0.16872f,	0.1f, //I2  54
-0.66735f,	 0.17715f,	0.1f, //J2  55
-0.68501f,	 0.10458f,	0.1f, //K2  56
-0.63881f,	 0.08420f,	0.1f, //L2  57
-0.19370f,	 0.35185f,	0.1f, //M2  58
-0.19668f,	 0.33542f,	0.1f, //N2  59
-0.10878f,	 0.35199f,	0.1f, //O2  60
-0.11419f,	 0.32893f,	0.1f, //P2  61
-0.20074f,	 0.31487f,	0.1f, //Q2  62
-0.12000f,	 0.30000f,	0.1f, //R2  63
-0.12696f,	 0.26695f,	0.1f, //S2  64
-0.20855f,	 0.28637f,	0.1f, //T2  65
-0.21675f,	 0.25486f,	0.1f, //U2  66
-0.13430f,	 0.23695f,	0.1f, //V2  67
-0.14482f,	 0.19551f,	0.1f, //W2  68
-0.22583f,	 0.22179f,	0.1f, //Z2  69
-0.15212f,	 0.16681f,	0.1f, //A3  70
-0.23970f,	 0.17143f,	0.1f, //B3  71
-0.16216f,	 0.12639f,	0.1f, //C3  72
-0.25321f,	 0.13163f,	0.1f, //D3  73
-0.26542f,	 0.09256f,	0.1f, //E3  74
-0.17437f,	 0.08244f,	0.1f, //F3  75
-0.28042f,	 0.04721f,	0.1f, //G3  76
-0.29193f,	 0.01546f,	0.1f, //H3  77
-0.18763f,	 0.03395f,	0.1f, //I3  78
-0.20158f,	-0.01628f,	0.1f, //J3  79
-0.21623f,	-0.06198f,	0.1f, //K3  80
-0.30588f,	-0.02361f,	0.1f, //L3  81
-0.32099f,	-0.06379f,	0.1f, //M3  82
-0.23996f,	-0.13701f,	0.1f, //N3  83
-0.35728f,	-0.15452f,	0.1f, //O3  84
-0.37322f,	-0.19207f,	0.1f, //P3  85
-0.26427f,	-0.21445f,	0.1f, //Q3  86
-0.28309f,	-0.26853f,	0.1f, //R3  87
-0.38629f,	-0.22178f,	0.1f, //S3  88
-0.40116f,	-0.25627f,	0.1f, //T3  89
-0.29475f,	-0.30763f,	0.1f, //U3  90
-0.42451f,	-0.30492f,	0.1f, //V3  91
-0.32080f,	-0.38651f,	0.1f, //W3  92
-0.44972f,	-0.35817f,	0.1f, //Z3  93
-0.36287f,	-0.50904f,	0.1f, //A4  94
-0.49094f,	-0.43729f,	0.1f, //B4  95
-0.53368f,	-0.51437f,	0.1f, //C4  96
-0.53114f,	-0.54312f,	0.1f, //D4  97
-0.37705f,	-0.55164f,	0.1f, //E4  98
-0.40531f,	-0.57739f,	0.1f, //F4  99
 0.22638f,	 0.35253f,	0.1f, //G4  100
 0.24000f,	 0.34000f,	0.1f, //H4  101
 0.39435f,	 0.35280f,	0.1f, //I4  102
 0.37552f,	 0.33647f,	0.1f, //J4  103
 0.22818f,	 0.22977f,	0.1f, //K4  104
 0.36745f,	 0.18524f,	0.1f, //L4  105
 0.21404f,	 0.06773f,	0.1f, //M4  106
 0.36422f,	 0.06890f,	0.1f, //N4  107
 0.20960f,	-0.01181f,	0.1f, //O4  108
 0.36370f,	-0.01554f,	0.1f, //P4  109
 0.36743f,	-0.11910f,	0.1f, //Q4  110
 0.20421f,	-0.13319f,	0.1f, //R4  111
 0.36979f,	-0.15962f,	0.1f, //S4  112
 0.20409f,	-0.29205f,	0.1f, //TU  113
 0.20643f,	-0.33383f,	0.1f, //U4  114
 0.37288f,	-0.20207f,	0.1f, //V4  115
 0.20877f,	-0.35877f,	0.1f, //W4  116
 0.21150f,	-0.38255f,	0.1f, //Z4  117
 0.37747f,	-0.23286f,	0.1f, //A5  118
 0.38327f,	-0.26363f,	0.1f, //B5  119
 0.39343f,	-0.30252f,	0.1f, //C5  120
 0.21957f,	-0.42385f,	0.1f, //D5  121
 0.22780f,	-0.45669f,	0.1f, //E5  122
 0.40115f,	-0.32502f,	0.1f, //F5  123
 0.41137f,	-0.34848f,	0.1f, //G5  124
 0.41992f,	-0.36421f,	0.1f, //H5  125
 0.23580f,	-0.47712f,	0.1f, //I5  126
 0.24325f,	-0.49451f,	0.1f, //J5  127
 0.25003f,	-0.50709f,	0.1f, //K5  128
 0.43044f,	-0.37813f,	0.1f, //L5  129
 0.44327f,	-0.39308f,	0.1f, //M5  130
 0.26464f,	-0.52906f,	0.1f, //N5  131
 0.28549f,	-0.54754f,	0.1f, //O5  132
 0.30965f,	-0.55891f,	0.1f, //P5  133
 0.32955f,	-0.56318f,	0.1f, //Q5  134
 0.45653f,	-0.40398f,	0.1f, //R5  135
 0.47312f,	-0.41251f,	0.1f, //S5  136
 0.48780f,	-0.41819f,	0.1f, //T5  137
 0.35467f,	-0.56555f,	0.1f, //U5  138
 0.41200f,	-0.56602f,	0.1f, //V5  139
 0.52000f,	-0.42000f,	0.1f, //W5  140
 0.43923f,	-0.56265f,	0.1f, //Z5  141
 0.47315f,	-0.55333f,	0.1f, //A6  142
 0.50558f,	-0.53954f,	0.1f, //B6  143
 0.54000f,	-0.52000f,	0.1f, //C6  144
 0.56969f,	-0.50078f,	0.1f, //D6  145
 0.59429f,	-0.48363f,	0.1f, //E6  146
 0.54000f,	-0.42000f,	0.1f, //F6  147
 0.56596f,	-0.41319f,	0.1f, //G6  148
 0.59056f,	-0.40350f,	0.1f, //H6  149
 0.61852f,	-0.46425f,	0.1f, //I6  150
 0.66101f,	-0.42661f,	0.1f, //J6  151
 0.62485f,	-0.38449f,	0.1f, //K6  152
 0.63939f,	-0.38896f,	0.1f, //L6  153
 0.46843f,	 0.35837f,	0.1f, //M6  154
 0.49611f,	 0.36496f,	0.1f, //N6  155
 0.53871f,	 0.37594f,	0.1f, //O6  156
 0.58263f,	 0.39395f,	0.1f, //P6  157
 0.60767f,	 0.40625f,	0.1f, //Q6  158
 0.63403f,	 0.43436f,	0.1f, //R6  159
 0.65028f,	 0.45720f,	0.1f, //S6  160
 0.66301f,	 0.48619f,	0.1f, //T6  161
 0.48293f,	 0.50068f,	0.1f, //U6  162
 0.51455f,	 0.50639f,	0.1f, //V6  163
 0.54881f,	 0.51957f,	0.1f, //W6  164
 0.58044f,	 0.54548f,	0.1f, //Z6  165
 0.60284f,	 0.57052f,	0.1f, //A7  166
 0.60987f,	 0.58721f,	0.1f, //B7  167
 0.67136f,	 0.52835f,	0.1f, //C7  168
 0.68014f,	 0.57052f,	0.1f, //D7  169
 0.68234f,	 0.58809f,	0.1f, //E7  170

//---------------BACK------------------

-0.38113f,	 0.50066f,	-0.1f, //BC  171 
-0.38113f,	 0.35155f,	-0.1f, //BD  172 
 0.42919f,	 0.35285f,	-0.1f, //BE  173 
 0.42723f,	 0.50132f,	-0.1f, //BF  174 
-0.40000f,	 0.50000f,	-0.1f, //BG  175 
-0.42467f,	 0.49923f,	-0.1f, //BH  176 
-0.44061f,	 0.49690f,	-0.1f, //BI  177 
-0.40250f,	 0.35182f,	-0.1f, //BJ  178 
-0.41961f,	 0.35104f,	-0.1f, //BK  179 
-0.45267f,	 0.49456f,	-0.1f, //BL  180 
-0.47134f,	 0.49067f,	-0.1f, //BM  181 
-0.43478f,	 0.34871f,	-0.1f, //BN  182 
-0.48845f,	 0.48678f,	-0.1f, //BO  183 
-0.50712f,	 0.48212f,	-0.1f, //BP  184 
-0.52346f,	 0.47589f,	-0.1f, //BQ  185 
-0.45034f,	 0.34599f,	-0.1f, //BR  186 
-0.54018f,	 0.46734f,	-0.1f, //BS  187 
-0.55263f,	 0.46034f,	-0.1f, //BT  188 
-0.56430f,	 0.45100f,	-0.1f, //BU  189 
-0.46667f,	 0.34093f,	-0.1f, //BV  190 
-0.47873f,	 0.33665f,	-0.1f, //BW  191 
-0.49156f,	 0.33121f,	-0.1f, //BZ  192 
-0.57363f,	 0.44322f,	-0.1f, //BA1 193 
-0.58413f,	 0.43311f,	-0.1f, //BB1 194 
-0.59019f,	 0.42601f,	-0.1f, //BC1 195 
-0.59635f,	 0.41738f,	-0.1f, //BD1 196 
-0.60252f,	 0.40721f,	-0.1f, //BE1 197 
-0.60745f,	 0.39797f,	-0.1f, //BF1 198 
-0.49990f,	 0.32617f,	-0.1f, //BG1 199 
-0.50853f,	 0.32154f,	-0.1f, //BH1 200 
-0.51593f,	 0.31538f,	-0.1f, //BI1 201 
-0.52394f,	 0.30891f,	-0.1f, //BJ1 202 
-0.61207f,	 0.38780f,	-0.1f, //BK1 203 
-0.53103f,	 0.30213f,	-0.1f, //BL1 204 
-0.61638f,	 0.37917f,	-0.1f, //BM1 205 
-0.53719f,	 0.29535f,	-0.1f, //BN1 206 
-0.54428f,	 0.28672f,	-0.1f, //BO1 207 
-0.62070f,	 0.36530f,	-0.1f, //BP1 208 
-0.55075f,	 0.27933f,	-0.1f, //BQ1 209 
-0.62378f,	 0.35390f,	-0.1f, //BR1 210 
-0.62594f,	 0.34435f,	-0.1f, //BS1 211 
-0.62852f,	 0.33312f,	-0.1f, //BT1 212 
-0.63236f,	 0.31747f,	-0.1f, //BU1 213 
-0.55747f,	 0.26976f,	-0.1f, //BV1 214 
-0.56414f,	 0.25925f,	-0.1f, //BW1 215 
-0.57004f,	 0.24950f,	-0.1f, //BZ1 216 
-0.63801f,	 0.29259f,	-0.1f, //BA2 217 
-0.64442f,	 0.26668f,	-0.1f, //BB2 218 
-0.65109f,	 0.24027f,	-0.1f, //BC2 219 
-0.58184f,	 0.22565f,	-0.1f, //BD2 220 
-0.59261f,	 0.20025f,	-0.1f, //BE2 221 
-0.65783f,	 0.21275f,	-0.1f, //BF2 222 
-0.59777f,	 0.19019f,	-0.1f, //BG2 223 
-0.66191f,	 0.19590f,	-0.1f, //BH2 224 
-0.60538f,	 0.16872f,	-0.1f, //BI2 225 
-0.66735f,	 0.17715f,	-0.1f, //BJ2 226 
-0.68501f,	 0.10458f,	-0.1f, //BK2 227 
-0.63881f,	 0.08420f,	-0.1f, //BL2 228 
-0.19370f,	 0.35185f,	-0.1f, //BM2 229 
-0.19668f,	 0.33542f,	-0.1f, //BN2 230 
-0.10878f,	 0.35199f,	-0.1f, //BO2 231 
-0.11419f,	 0.32893f,	-0.1f, //BP2 232 
-0.20074f,	 0.31487f,	-0.1f, //BQ2 233 
-0.12000f,	 0.30000f,	-0.1f, //BR2 234 
-0.12696f,	 0.26695f,	-0.1f, //BS2 235 
-0.20855f,	 0.28637f,	-0.1f, //BT2 236 
-0.21675f,	 0.25486f,	-0.1f, //BU2 237 
-0.13430f,	 0.23695f,	-0.1f, //BV2 238 
-0.14482f,	 0.19551f,	-0.1f, //BW2 239 
-0.22583f,	 0.22179f,	-0.1f, //BZ2 240 
-0.15212f,	 0.16681f,	-0.1f, //BA3 241 
-0.23970f,	 0.17143f,	-0.1f, //BB3 242 
-0.16216f,	 0.12639f,	-0.1f, //BC3 243 
-0.25321f,	 0.13163f,	-0.1f, //BD3 244 
-0.26542f,	 0.09256f,	-0.1f, //BE3 245 
-0.17437f,	 0.08244f,	-0.1f, //BF3 246 
-0.28042f,	 0.04721f,	-0.1f, //BG3 247 
-0.29193f,	 0.01546f,	-0.1f, //BH3 248 
-0.18763f,	 0.03395f,	-0.1f, //BI3 249 
-0.20158f,	-0.01628f,	-0.1f, //BJ3 250 
-0.21623f,	-0.06198f,	-0.1f, //BK3 251 
-0.30588f,	-0.02361f,	-0.1f, //BL3 252 
-0.32099f,	-0.06379f,	-0.1f, //BM3 253 
-0.23996f,	-0.13701f,	-0.1f, //BN3 254 
-0.35728f,	-0.15452f,	-0.1f, //BO3 255 
-0.37322f,	-0.19207f,	-0.1f, //BP3 256 
-0.26427f,	-0.21445f,	-0.1f, //BQ3 257 
-0.28309f,	-0.26853f,	-0.1f, //BR3 258 
-0.38629f,	-0.22178f,	-0.1f, //BS3 259 
-0.40116f,	-0.25627f,	-0.1f, //BT3 260 
-0.29475f,	-0.30763f,	-0.1f, //BU3 261 
-0.42451f,	-0.30492f,	-0.1f, //BV3 262 
-0.32080f,	-0.38651f,	-0.1f, //BW3 263 
-0.44972f,	-0.35817f,	-0.1f, //BZ3 264 
-0.36287f,	-0.50904f,	-0.1f, //BA4 265 
-0.49094f,	-0.43729f,	-0.1f, //BB4 266 
-0.53368f,	-0.51437f,	-0.1f, //BC4 267 
-0.53114f,	-0.54312f,	-0.1f, //BD4 268 
-0.37705f,	-0.55164f,	-0.1f, //BE4 269 
-0.40531f,	-0.57739f,	-0.1f, //BF4 270 
 0.22638f,	 0.35253f,	-0.1f, //BG4 271 
 0.24000f,	 0.34000f,	-0.1f, //BH4 272 
 0.39435f,	 0.35280f,	-0.1f, //BI4 273 
 0.37552f,	 0.33647f,	-0.1f, //BJ4 274 
 0.22818f,	 0.22977f,	-0.1f, //BK4 275 
 0.36745f,	 0.18524f,	-0.1f, //BL4 276 
 0.21404f,	 0.06773f,	-0.1f, //BM4 277 
 0.36422f,	 0.06890f,	-0.1f, //BN4 278 
 0.20960f,	-0.01181f,	-0.1f, //BO4 279 
 0.36370f,	-0.01554f,	-0.1f, //BP4 280 
 0.36743f,	-0.11910f,	-0.1f, //BQ4 281 
 0.20421f,	-0.13319f,	-0.1f, //BR4 282 
 0.36979f,	-0.15962f,	-0.1f, //BS4 283 
 0.20409f,	-0.29205f,	-0.1f, //B11,284 
 0.20643f,	-0.33383f,	-0.1f, //BU4 285 
 0.37288f,	-0.20207f,	-0.1f, //BV4 286 
 0.20877f,	-0.35877f,	-0.1f, //B116287,
 0.21150f,	-0.38255f,	-0.1f, //BZ4 288 
 0.37747f,	-0.23286f,	-0.1f, //BA5 289 
 0.38327f,	-0.26363f,	-0.1f, //BB5 290 
 0.39343f,	-0.30252f,	-0.1f, //BC5 291 
 0.21957f,	-0.42385f,	-0.1f, //BD5 292 
 0.22780f,	-0.45669f,	-0.1f, //BE5 293 
 0.40115f,	-0.32502f,	-0.1f, //BF5 294 
 0.41137f,	-0.34848f,	-0.1f, //BG5 295 
 0.41992f,	-0.36421f,	-0.1f, //BH5 296 
 0.23580f,	-0.47712f,	-0.1f, //BI5 297 
 0.24325f,	-0.49451f,	-0.1f, //BJ5 298 
 0.25003f,	-0.50709f,	-0.1f, //BK5 299 
 0.43044f,	-0.37813f,	-0.1f, //BL5 300 
 0.44327f,	-0.39308f,	-0.1f, //BM5 301 
 0.26464f,	-0.52906f,	-0.1f, //BN5 302 
 0.28549f,	-0.54754f,	-0.1f, //BO5 303 
 0.30965f,	-0.55891f,	-0.1f, //BP5 304 
 0.32955f,	-0.56318f,	-0.1f, //BQ5 305 
 0.45653f,	-0.40398f,	-0.1f, //BR5 306 
 0.47312f,	-0.41251f,	-0.1f, //BS5 307 
 0.48780f,	-0.41819f,	-0.1f, //BT5 308 
 0.35467f,	-0.56555f,	-0.1f, //BU5 309 
 0.41200f,	-0.56602f,	-0.1f, //BV5 310 
 0.52000f,	-0.42000f,	-0.1f, //BW5 311 
 0.43923f,	-0.56265f,	-0.1f, //BZ5 312 
 0.47315f,	-0.55333f,	-0.1f, //BA6 313 
 0.50558f,	-0.53954f,	-0.1f, //BB6 314 
 0.54000f,	-0.52000f,	-0.1f, //BC6 315 
 0.56969f,	-0.50078f,	-0.1f, //BD6 316 
 0.59429f,	-0.48363f,	-0.1f, //BE6 317 
 0.54000f,	-0.42000f,	-0.1f, //BF6 318 
 0.56596f,	-0.41319f,	-0.1f, //BG6 319 
 0.59056f,	-0.40350f,	-0.1f, //BH6 320 
 0.61852f,	-0.46425f,	-0.1f, //BI6 321 
 0.66101f,	-0.42661f,	-0.1f, //BJ6 322 
 0.62485f,	-0.38449f,	-0.1f, //BK6 323 
 0.63939f,	-0.38896f,	-0.1f, //BL6 324 
 0.46843f,	 0.35837f,	-0.1f, //BM6 325 
 0.49611f,	 0.36496f,	-0.1f, //BN6 326 
 0.53871f,	 0.37594f,	-0.1f, //BO6 327 
 0.58263f,	 0.39395f,	-0.1f, //BP6 328 
 0.60767f,	 0.40625f,	-0.1f, //BQ6 329 
 0.63403f,	 0.43436f,	-0.1f, //BR6 330 
 0.65028f,	 0.45720f,	-0.1f, //BS6 331 
 0.66301f,	 0.48619f,	-0.1f, //BT6 332 
 0.48293f,	 0.50068f,	-0.1f, //BU6 333 
 0.51455f,	 0.50639f,	-0.1f, //BV6 334 
 0.54881f,	 0.51957f,	-0.1f, //BW6 335 
 0.58044f,	 0.54548f,	-0.1f, //BZ6 336 
 0.60284f,	 0.57052f,	-0.1f, //BA7 337 
 0.60987f,	 0.58721f,	-0.1f, //BB7 338 
 0.67136f,	 0.52835f,	-0.1f, //BC7 339 
 0.68014f,	 0.57052f,	-0.1f, //BD7 340 
 0.68234f,	 0.58809f,	-0.1f, //BE7 341 
 
};

const int indices[] = {
    0,	1,	2, //t1
    0,	3,	2, //t2
    0,	4,	1, //t3
    4,	5,	1, //t4
    5,	6,	1, //t5
    1,	7,	6, //t6
    7,	8,	6, //t7
    6,	9,	8, //t8
    9,	10,	8, //t9
    8,	11,	10, //t10
    10,	12,	11, //t11
    12,	13,	11, //t12
    13,	14,	11, //t13
    11,	15,	14, //t14
    14,	16,	15, //t15
    16,	17,	15, //t16
    17,	18,	15, //t17
    15,	19,	18, //t18
    19,	20,	18, //t19
    20,	21,	18, //t20
    18,	22,	21, //t21
    22,	23,	21, //t22
    23,	24,	21, //t23
    24,	25,	21, //t24
    25,	26,	21, //t25
    26,	27,	21, //t26
    21,	28,	27, //t27
    28,	29,	27, //t28
    29,	30,	27, //t29
    30,	31,	27, //t30
    27,	32,	31, //t31
    31,	33,	32, //t32
    32,	34,	33, //t33
    33,	35,	34, //t34
    35,	36,	34, //t35
    34,	37,	36, //t36
    36,	38,	37, //t37
    37,	39,	38, //t38
    39,	40,	38, //t39
    40,	41,	38, //t40
    41,	42,	38, //t41
    38,	43,	42, //t42
    43,	44,	42, //t43
    44,	45,	42, //t44
    42,	46,	45, //t45
    46,	47,	45, //t46
    47,	48,	45, //t47
    48,	49,	45, //t48
    49,	50,	48, //t49
    48,	51,	50, //t50
    50,	52,	51, //t51
    51,	53,	52, //t52
    52,	54,	53, //t53
    53,	55,	54, //t54
    55,	56,	54, //t55
    54,	57,	56, //t56
    58,	59,	60, //t57
    59,	61,	60, //t58
    59,	62,	61, //t59
    62,	63,	61, //t60
    63,	64,	62, //t61
    62,	65,	64, //t62
    65,	66,	64, //t63
    64,	67,	66, //t64
    67,	68,	66, //t65
    66,	69,	68, //t66
    68,	70,	69, //t67
    69,	71,	70, //t68
    70,	72,	71, //t69
    71,	73,	72, //t70
    73,	74,	72, //t71
    74,	75,	72, //t72
    74,	76,	75, //t73
    76,	77,	75, //t74
    75,	78,	77, //t75
    78,	79,	77, //t76
    79,	80,	77, //t77
    77,	81,	80, //t78
    81,	82,	80, //t79
    80,	83,	82, //t80
    82,	84,	83, //t81
    84,	85,	83, //t82
    83,	86,	85, //t83
    86,	87,	85, //t84
    85,	88,	87, //t85
    88,	89,	87, //t86
    87,	90,	89, //t87
    89,	91,	90, //t88
    90,	92,	91, //t89
    91,	93,	92, //t90
    92,	94,	93, //t91
    93,	95,	94, //t92
    95,	96,	94, //t93
    96,	97,	94, //t94
    94,	98,	97, //t95
    97,	99,	98, //t96
    100,	101,	102, //t97
    101,	103,	102, //t98
    101,	104,	103, //t99
    103,	105,	104, //t100
    104,	106,	105, //t101
    105,	107,	106, //t102
    106,	108,	107, //t103
    107,	109,	108, //t104
    109,	110,	108, //t105
    108,	111,	110, //t106
    110,	112,	111, //t107
    111,	113,	112, //t108
    113,	114,	112, //t109
    112,	115,	114, //t110
    114,	116,	115, //t111
    116,	117,	115, //t112
    115,	118,	117, //t113
    118,	119,	117, //t114
    119,	120,	117, //t115
    117,	121,	120, //t116
    121,	122,	120, //t117
    120,	123,	122, //t118
    123,	124,	122, //t119
    124,	125,	122, //t120
    122,	126,	125, //t121
    126,	127,	125, //t122
    127,	128,	125, //t123
    125,	129,	128, //t124
    129,	130,	128, //t125
    128,	131,	130, //t126
    131,	132,	130, //t127
    132,	133,	130, //t128
    133,	134,	130, //t129
    130,	135,	134, //t130
    135,	136,	134, //t131
    136,	137,	134, //t132
    134,	138,	137, //t133
    138,	139,	137, //t134
    137,	140,	139, //t135
    139,	141,	140, //t136
    141,	142,	140, //t137
    142,	143,	140, //t138
    143,	144,	140, //t139
    144,	145,	140, //t140
    145,	146,	140, //t141
    140,	147,	146, //t142
    147,	148,	146, //t143
    148,	149,	146, //t144
    146,	150,	149, //t145
    150,	151,	149, //t146
    149,	152,	151, //t147
    152,	153,	151, //t148
    2,	    154,	3, //t149
    154,	155,	3, //t150
    155,	156,	3, //t151
    156,	157,	3, //t152
    157,	158,	3, //t153
    158,	159,	3, //t154
    159,	160,	3, //t155
    160,	161,	3, //t156
    3,	    162,	161, //t157
    162,	163,	161, //t158
    163,	164,	161, //t159
    164,	165,	161, //t160
    165,	166,	161, //t161
    166,	167,	161, //t162
    161,	168,	167, //t163
    168,	169,	167, //t164
    169,	170,	167, //t165

//--------BACK----------------
    171,   172,  173,//t166
    171,   174,  173,//t167
    171,   175,  172,//t168
    175,   176,  172,//t169
    176,   177,  172,//t170
    172,   178,  177,//t171
    178,   179,  177,//t172
    177,   180,  179,//t173
    180,   181,  179,//t174
    179,   182,  181,//t175
    181,   183,  182,//t176
    183,   184,  182,//t177
    184,   185,  182,//t178
    182,   186,  185,//t179
    185,   187,  186,//t180
    187,   188,  186,//t181
    188,   189,  186,//t182
    186,   190,  189,//t183
    190,   191,  189,//t184
    191,   192,  189,//t185
    189,   193,  192,//t186
    193,   194,  192,//t187
    194,   195,  192,//t188
    195,   196,  192,//t189
    196,   197,  192,//t190
    197,   198,  192,//t191
    192,   199,  198,//t192
    199,   200,  198,//t193
    200,   201,  198,//t194
    201,   202,  198,//t195
    198,   203,  202,//t196
    202,   204,  203,//t197
    203,   205,  204,//t198
    204,   206,  205,//t199
    206,   207,  205,//t200
    205,   208,  207,//t201
    207,   209,  208,//t202
    208,   210,  209,//t203
    210,   211,  209,//t204
    211,   212,  209,//t205
    212,   213,  209,//t206
    209,   214,  213,//t207
    214,   215,  213,//t208
    215,   216,  213,//t209
    213,   217,  216,//t210
    217,   218,  216,//t211
    218,   219,  216,//t212
    219,   220,  216,//t213
    220,   221,  219,//t214
    219,   222,  221,//t215
    221,   223,  222,//t216
    222,   224,  223,//t217
    223,   225,  224,//t218
    224,   226,  225,//t219
    226,   227,  225,//t220
    225,   228,  227,//t221
    229,   230,  231,//t222
    230,   232,  231,//t223
    230,   233,  232,//t224
    233,   234,  232,//t225
    234,   235,  233,//t226
    233,   236,  235,//t227
    236,   237,  235,//t228
    235,   238,  237,//t229
    238,   239,  237,//t230
    237,   240,  239,//t231
    239,   241,  240,//t232
    240,   242,  241,//t233
    241,   243,  242,//t234
    242,   244,  243,//t235
    244,   245,  243,//t236
    245,   246,  243,//t237
    245,   247,  246,//t238
    247,   248,  246,//t239
    246,   249,  248,//t240
    249,   250,  248,//t241
    250,   251,  248,//t242
    248,   252,  251,//t243
    252,   253,  251,//t244
    251,   254,  253,//t245
    253,   255,  254,//t246
    255,   256,  254,//t247
    254,   257,  256,//t248
    257,   258,  256,//t249
    256,   259,  258,//t250
    259,   260,  258,//t251
    258,   261,  260,//t252
    260,   262,  261,//t253
    261,   263,  262,//t254
    262,   264,  263,//t255
    263,   265,  264,//t256
    264,   266,  265,//t257
    266,   267,  265,//t258
    267,   268,  265,//t259
    265,   269,  268,//t260
    268,   270,  269,//t261
    271,   272,  273,//t262
    272,   274,  273,//t263
    272,   275,  274,//t264
    274,   276,  275,//t265
    275,   277,  276,//t266
    276,   278,  277,//t267
    277,   279,  278,//t268
    278,   280,  279,//t269
    280,   281,  279,//t270
    279,   282,  281,//t271
    281,   283,  282,//t272
    282,   284,  283,//t273
    284,   285,  283,//t274
    283,   286,  285,//t275
    285,   287,  286,//t276
    287,   288,  286,//t277
    286,   289,  288,//t278
    289,   290,  288,//t279
    290,   291,  288,//t280
    288,   292,  291,//t281
    292,   293,  291,//t282
    291,   294,  293,//t283
    294,   295,  293,//t284
    295,   296,  293,//t285
    293,   297,  296,//t286
    297,   298,  296,//t287
    298,   299,  296,//t288
    296,   300,  299,//t289
    300,   301,  299,//t290
    299,   302,  301,//t291
    302,   303,  301,//t292
    303,   304,  301,//t293
    304,   305,  301,//t294
    301,   306,  305,//t295
    306,   307,  305,//t296
    307,   308,  305,//t297
    305,   309,  308,//t298
    309,   310,  308,//t299
    308,   311,  310,//t300
    310,   312,  311,//t301
    312,   313,  311,//t302
    313,   314,  311,//t303
    314,   315,  311,//t304
    315,   316,  311,//t305
    316,   317,  311,//t306
    311,   318,  317,//t307
    318,   319,  317,//t308
    319,   320,  317,//t309
    317,   321,  320,//t310
    321,   322,  320,//t311
    320,   323,  322,//t312
    323,   324,  322,//t313
    173,   325,  174,//t314
    325,   326,  174,//t315
    326,   327,  174,//t316
    327,   328,  174,//t317
    328,   329,  174,//t318
    329,   330,  174,//t319
    330,   331,  174,//t320
    331,   332,  174,//t321
    174,   333,  332,//t322
    333,   334,  332,//t323
    334,   335,  332,//t324
    335,   336,  332,//t325
    336,   337,  332,//t326
    337,   338,  332,//t327
    332,   339,  338,//t328
    339,   340,  338,//t329
    340,   341,  338,//t330

//-------DEPTH--------------
    0,   3,      174,
    0,    171,   174,
    3,    174,   162,
    174,  333,   162,
    333,  162,   163,
    334,  163,   333,
    163,  334,   335,
    163,  335,   164,
    164,  335,   336,
    164,  165,   336,
    165,  336,   337,
    165,  166,   337,
    166,  337,   338,
    166,  167,   338,
    167,  338,   341,
    167,  170,   341,
    170,  341,   340,
    170,  169,   340,
    169,  340,   339,
    169,  168,   339,
    168,  339,   332,
    168,  161,   332,
    161,  332,   331,
    161,  160,   331,
    160,  331,   330,
    160,  159,   330,
    159,  330,   329,
    159,  158,   329,
    158,  329,   328,
    158,  157,   328,
    157,  328,   327,
    157,  156,   327,
    156,  327,   326,
    156,  155,   326,
    155,  326,   325,
    155,  154,   325,
    154,  325,   173,
    154,    2,   173,
    2,    173,   273,
    2,    102,   273,
    102,  273,   274,
    102,  103,   274,
    103,  274,   276,
    103,  105,   276,
    105,  276,   278,
    105,  107,   278,
    107,  278,   280,
    107,  109,   280,
    109,  280,   281,
    109,  110,   281,
    110,  281,   283,
    110,  112,   283,
    112,  283,   286,
    112,  115,   286,
    115,  286,   289,
    115,  118,   289,
    118,  289,   290,
    118,  119,   290,
    119,  290,   291,
    119,  120,   291,
    120,  291,   294,
    120,  123,   294,
    123,  294,   295,
    123,  124,   295,
    124,  295,   296,
    124,  125,   296,
    125,  296,   300,
    125,  129,   300,
    129,  300,   301,
    129,  130,   301,
    130,  301,   306,
    130,  135,   306,
    135,  306,   307,
    135,  136,   307,
    136,  307,   308,
    136,  137,   308,
    137,  308,   311,
    137,  140,   311,
    140,  311,   318,
    140,  147,   318,
    147,  318,   319,
    147,  148,   319,
    148,  319,   320,
    148,  149,   320,
    149,  320,   323,
    149,  152,   323,
    152,  323,   324,
    152,  153,   324,
    153,  324,   322,
    153,  151,   322,
    151,  322,   321,
    151,  150,   321,
    150,  321,   317,
    150,  146,   317,
    146,  317,   316,
    146,  145,   316,
    145,  316,   315,
    145,  144,   315,
    144,  315,   314,
    144,  143,   314,
    143,  314,   313,
    143,  142,   313,
    142,  313,   312,
    142,  141,   312,
    141,  312,   310,
    141,  139,   310,
    139,  310,   309,
    139,  138,   309,
    138,  309,   305,
    138,  134,   305,
    134,  305,   304,
    134,  133,   304,
    133,  304,   303,
    133,  132,   303,
    132,  303,   302,
    132,  131,   302,
    131,  302,   299,
    131,  128,   299,
    128,  299,   298,
    128,  127,   298,
    127,  298,   297,
    127,  126,   297,
    126,  297,   293,
    126,  122,   293,
    122,  293,   292,
    122,  121,   292,
    121,  292,   288,
    121,  117,   288,
    117,  288,   287,
    117,  116,   287,
    116,  287,   285,
    116,  114,   285,
    114,  285,   284,
    114,  113,   284,
    113,  284,   282,
    113,  111,   282,
    111,  282,   279,
    111,  108,   279,
    108,  279,   277,
    108,  106,   277,
    106,  277,   275,
    106,  104,   275,
    104,  275,   272,
    104,  101,   272,
    101,  272,   271,
    101,  100,   271,

    100,  271,   231,
    100,  60,   231,
    60,  231,   232,
    60,  61,   232,
    61,  232,   234,
    61,  63,   234,
    63,  234,   235,
    63,  64,   235,
    64,  235,   238,
    64,  67,   238,
    67,  238,   239,
    67,  68,   239,
    68,  239,   241,
    68,  70,   241,
    70,  241,   243,
    70,  72,   243,
    72,  243,   246,
    72,  75,   246,
    75,  246,   249,
    75,  78,   249,
    78,  249,   250,
    78,  79,   250,
    79,  250,   251,
    79,  80,   251,
    80,  251,   254,
    80,  83,   254,
    83,  254,   257,
    83,  86,   257,
    86,  257,   258,
    86,  87,   258,
    87,  258,   261,
    87,  90,   261,
    90,  261,   263,
    90,  92,   263,
    92,  263,   265,
    92,  94,   265,
    94,  265,   269,
    94,  98,   269,
    98,  269,   270,
    98,  99,   270,
    99,  270,   268,
    99,  97,   268,
    97,  268,   267,
    97,  96,   267,
    96,  267,   266,
    96,  95,   266,
    95,  266,   264,
    95,  93,   264,
    93,  264,   262,
    93,  91,   262,
    91,  262,   260,
    91,  89,   260,
    89,  260,   259,
    89,  88,   259,
    88,  259,   256,
    88,  85,   256,
    85,  256,   255,
    85,  84,   255,
    84,  255,   253,
    84,  82,   253,
    82,  253,   252,
    82,  81,   252,
    81,  252,   248,
    81,  77,   248,
    77,  248,   247,
    77,  76,   247,
    76,  247,   245,
    76,  74,   245,
    74,  245,   244,
    74,  73,   244,
    73,  244,   242,
    73,  71,   242,
    71,  242,   240,
    71,  69,   240,
    69,  240,   237,
    69,  66,   237,
    66,  237,   236,
    66,  65,   236,
    65,  236,   233,
    65,  62,   233,
    62,  233,   230,
    62,  59,   230,
    59,  230,   229,
    59,  58,   229,
    58,  229,   172,
    58,  1,   172,
    1,  172,   178,
    1,  7,   178,
    7,  178,   179,
    7,  8,   179,
    8,  179,   182,
    8,  11,   182,
    11,  182,   186,
    11,  15,   186,
    15,  186,   190,
    15,  19,   190,
    19,  190,   191,
    19,  20,   191,
    20,  191,   192,
    20,  21,   192,
    21,  192,   199,
    21,  28,   199,
    28,  199,   200,
    28,  29,   200,
    29,  200,   201,
    29,  30,   201,
    30,  201,   202,
    30,  31,   202,
    31,  202,   204,
    31,  33,   204,
    33,  204,   206,
    33,  35,   206,
    35,  206,   207,
    35,  36,   207,
    36,  207,   209,
    36,  38,   209,
    38,  209,   214,
    38,  43,   214,
    43,  214,   215,
    43,  44,   215,
    44,  215,   216,
    44,  45,   216,
    45,  216,   220,
    45,  49,   220,
    49,  220,   221,
    49,  50,   221,
    50,  221,   223,
    50,  52,   223,
    52,  223,   225,
    52,  54,   225,
    54,  225,   228,
    54,  57,   228,
    57,  228,   227,
    57,  56,   227,
    56,  227,   226,
    56,  55,   226,
    55,  226,   224,
    55,  53,   224,
    53,  224,   222,
    53,  51,   222,
    51,  222,   219,
    51,  48,   219,
    48,  219,   218,
    48,  47,   218,
    47,  218,   217,
    47,  46,   217,
    46,  217,   213,
    46,  42,   213,
    42,  213,   212,
    42,  41,   212,
    41,  212,   211,
    41,  40,   211,
    40,  211,   210,
    40,  39,   210,
    39,  210,   208,
    39,  37,   208,
    37,  208,   205,
    37,  34,   205,
    34,  205,   203,
    34,  32,   203,
    32,  203,   198,
    32,  27,   198,
    27,  198,   197,
    27,  26,   197,
    26,  197,   196,
    26,  25,   196,
    25,  196,   195,
    25,  24,   195,
    24,  195,   194,
    24,  23,   194,
    23,  194,   193,
    23,  22,   193,
    22,  193,   189,
    22,  18,   189,
    18,  189,   188,
    18,  17,   188,
    17,  188,   187,
    17,  16,   187,
    16,  187,   185,
    16,  14,   185,
    14,  185,   184,
    14,  13,   184,
    13,  184,   183,
    13,  12,   183,
    12,  183,   181,
    12,  10,   181,
    10,  181,   180,
    10,  9,   180,
    9,  180,   177,
    9,  6,   177,
    6,  177,   176,
    6,  5,   176,
    5,  176,   175,
    5,  4,   175,
    4,  175,   171,
    4,  0,   171,
};

const int number_of_elements = NTRI(indices);

static const float colors[] = { 
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.855f,  0.139f,  0.576f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
    0.535f,  0.735f,  0.235f,
};