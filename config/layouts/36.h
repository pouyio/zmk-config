 /*       36 KEY MATRIX / LAYOUT MAPPING
  ╭-─────────────────────┬────────────────────╮
  │  0   1   2   3   4   │   5   6   7   8   9│
  │ 10  11  12  13  14   │  15  16  17  18  19│
  │ 20  21  22  23  24   │  25  26  27  28  29│
  ╰──────────╮  30 31 32 │ 33  34  35  ╭──────╯
             ╰───────────┴─────────────╯        */

#define LAYOUT_MAP( \
    k01, k02, k03, k04, k05,    k06, k07, k08, k09, k10, \
    k11, k12, k13, k14, k15,    k16, k17, k18, k19, k20, \
    k21, k22, k23, k24, k25,    k26, k27, k28, k29, k30, \
              k31, k32, k33,    k34, k35, k36 \
) \
    k01 k02 k03 k04 k05    k06 k07 k08 k09 k10 \
    k11 k12 k13 k14 k15    k16 k17 k18 k19 k20 \
    k21 k22 k23 k24 k25    k26 k27 k28 k29 k30 \
              k31 k32 k33    k34 k35 k36

#define GUI_LEFT 3 13
#define GUI_RIGHT 6 16
#define SWAP_W_IGNORED 12
#define SWAP_T_IGNORED 22