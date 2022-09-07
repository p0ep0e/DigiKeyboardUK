#include <avr/pgmspace.h>
// Lookup table to convert ascii characters in to keyboard scan codes
// Format: most signifficant bit indicates if scan code should be sent with shift modifier
// remaining 7 bits are to be used as scan code number.

const unsigned char ascii_to_scan_code_table[] PROGMEM = {
  // /* ASCII:   0 */ 0,
  // /* ASCII:   1 */ 0,
  // /* ASCII:   2 */ 0,
  // /* ASCII:   3 */ 0,
  // /* ASCII:   4 */ 0,
  // /* ASCII:   5 */ 0,
  // /* ASCII:   6 */ 0,
  // /* ASCII:   7 */ 0,
/* ASCII (BACKSPACE):  8 */ 42,
/* ASCII (TAB):  9 */ 43,
/* ASCII (LINEFEED):  10 */ 40,
/* ASCII ():  11 */ 0,
/* ASCII ():  12 */ 0,
/* ASCII ():  13 */ 0,
/* ASCII ():  14 */ 0,
/* ASCII ():  15 */ 0,
/* ASCII ():  16 */ 0,
/* ASCII ():  17 */ 0,
/* ASCII ():  18 */ 0,
/* ASCII ():  19 */ 0,
/* ASCII ():  20 */ 0,
/* ASCII ():  21 */ 0,
/* ASCII ():  22 */ 0,
/* ASCII ():  23 */ 0,
/* ASCII ():  24 */ 0,
/* ASCII ():  25 */ 0,
/* ASCII ():  26 */ 0,
/* ASCII (ESC):  27 */ 41,
/* ASCII ():  28 */ 0,
/* ASCII ():  29 */ 0,
/* ASCII ():  30 */ 0,
/* ASCII ():  31 */ 0,
/* ASCII (SPACE):  32 */ 44,
/* ASCII (!):  33 */ 158,
/* ASCII ("):  34 */ 159,
/* ASCII (#):  35 */ 49,
/* ASCII ($):  36 */ 161,
/* ASCII (%):  37 */ 162,
/* ASCII (&):  38 */ 164,
/* ASCII ():  39 */ 52,
/* ASCII (():  40 */ 166,
/* ASCII ()):  41 */ 167,
/* ASCII (*):  42 */ 165,
/* ASCII (+):  43 */ 174,
/* ASCII (,):  44 */ 54,
/* ASCII (-):  45 */ 45,
/* ASCII (.):  46 */ 55,
/* ASCII (/):  47 */ 84, 
/* ASCII (0):  48 */ 39,
/* ASCII (1):  49 */ 30,
/* ASCII (2):  50 */ 31,
/* ASCII (3):  51 */ 32,
/* ASCII (4):  52 */ 33,
/* ASCII (5):  53 */ 34,
/* ASCII (6):  54 */ 35,
/* ASCII (7):  55 */ 36,
/* ASCII (8):  56 */ 37,
/* ASCII (9):  57 */ 38,
/* ASCII (:):  58 */ 179,
/* ASCII (;):  59 */ 51,
/* ASCII (<):  60 */ 182,
/* ASCII (=):  61 */ 46,
/* ASCII (>):  62 */ 183,
/* ASCII (?):  63 */ 184,
/* ASCII (@):  64 */ 180,
/* ASCII (A):  65 */ 132,
/* ASCII (B):  66 */ 133,
/* ASCII (C):  67 */ 134,
/* ASCII (D):  68 */ 135,
/* ASCII (E):  69 */ 136,
/* ASCII (F):  70 */ 137,
/* ASCII (G):  71 */ 138,
/* ASCII (H):  72 */ 139,
/* ASCII (I):  73 */ 140,
/* ASCII (J):  74 */ 141,
/* ASCII (K):  75 */ 142,
/* ASCII (L):  76 */ 143,
/* ASCII (M):  77 */ 144,
/* ASCII (N):  78 */ 145,
/* ASCII (O):  79 */ 146,
/* ASCII (P):  80 */ 147,
/* ASCII (Q):  81 */ 148,
/* ASCII (R):  82 */ 149,
/* ASCII (S):  83 */ 150,
/* ASCII (T):  84 */ 151,
/* ASCII (U):  85 */ 152,
/* ASCII (V):  86 */ 153,
/* ASCII (W):  87 */ 154,
/* ASCII (X):  88 */ 155,
/* ASCII (Y):  89 */ 156,
/* ASCII (Z):  90 */ 157,
/* ASCII ([):  91 */ 47,
/* ASCII (\):  92 */ 100,
/* ASCII (]):  93 */ 48,
/* ASCII (^):  94 */ 163,
/* ASCII (_):  95 */ 173,
/* ASCII (`):  96 */ 53,
/* ASCII (a):  97 */ 4,
/* ASCII (b):  98 */ 5,
/* ASCII (c):  99 */ 6,
/* ASCII (d):  100 */ 7,
/* ASCII (e):  101 */ 8,
/* ASCII (f):  102 */ 9,
/* ASCII (g):  103 */ 10,
/* ASCII (h):  104 */ 11,
/* ASCII (i):  105 */ 12,
/* ASCII (j):  106 */ 13,
/* ASCII (k):  107 */ 14,
/* ASCII (l):  108 */ 15,
/* ASCII (m):  109 */ 16,
/* ASCII (n):  110 */ 17,
/* ASCII (o):  111 */ 18,
/* ASCII (p):  112 */ 19,
/* ASCII (q):  113 */ 20,
/* ASCII (r):  114 */ 21,
/* ASCII (s):  115 */ 22,
/* ASCII (t):  116 */ 23,
/* ASCII (u):  117 */ 24,
/* ASCII (v):  118 */ 25,
/* ASCII (w):  119 */ 26,
/* ASCII (x):  120 */ 27,
/* ASCII (y):  121 */ 28,
/* ASCII (z):  122 */ 29,
/* ASCII ({):  123 */ 175,
/* ASCII (|):  124 */ 228,
/* ASCII (}):  125 */ 176,
/* ASCII (~):  126 */ 177
};