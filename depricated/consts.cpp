#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

/*
.white_pawns =   0b0000000000000000000000000000000000000000000000001111111100000000,
.white_rooks =   0b0000000000000000000000000000000000000000000000000000000010000001,
.white_knights = 0b0000000000000000000000000000000000000000000000000000000001000010,
.white_bishops = 0b0000000000000000000000000000000000000000000000000000000000100100,
.white_queens =  0b0000000000000000000000000000000000000000000000000000000000001000,
.white_king =    0b0000000000000000000000000000000000000000000000000000000000010000,

// The black piece positions
.black_pawns =   0b0000000011111111000000000000000000000000000000000000000000000000,
.black_rooks =   0b1000000100000000000000000000000000000000000000000000000000000000,
.black_knights = 0b0100001000000000000000000000000000000000000000000000000000000000,
.black_bishops = 0b0010010000000000000000000000000000000000000000000000000000000000,
.black_queens =  0b0000100000000000000000000000000000000000000000000000000000000000,
.black_king =    0b0001000000000000000000000000000000000000000000000000000000000000,

// Commonly derived positions
.white_pieces = 0b0000000000000000000000000000000000000000000000001111111111111111,
.black_pieces = 0b1111111111111111000000000000000000000000000000000000000000000000,
.all_pieces =   0b1111111111111111000000000000000000000000000000001111111111111111,
*/


/* The white piece positions */
extern const uint64_t white_pawns_start = 65280U;
extern const uint64_t white_rooks_start = 129U;
extern const uint64_t white_knights_start = 66U;
extern const uint64_t white_bishops_start = 36U;
extern const uint64_t white_queens_start = 8U;
extern const uint64_t white_king_start = 16U;

/* The black piece positions */
extern const uint64_t black_pawns_start = 71776119061217280U;
extern const uint64_t black_rooks_start = 9295429630892703744U;
extern const uint64_t black_knights_start = 4755801206503243776U;
extern const uint64_t black_bishops_start = 2594073385365405696U;
extern const uint64_t black_queens_start = 576460752303423488U;
extern const uint64_t black_king_start = 1152921504606846976U;

/* Commonly derived positions */
extern const uint64_t white_pieces_start = 65535U;
extern const uint64_t black_pieces_start = 18446462598732840960U;
extern const uint64_t all_pieces_start = 18446462598732906495U;

//set index values for ranksU;
extern const uint64_t RANK_1 = 0U;
extern const uint64_t RANK_2 = 1U;
extern const uint64_t RANK_3 = 2U;
extern const uint64_t RANK_4 = 3U;
extern const uint64_t RANK_5 = 4U;
extern const uint64_t RANK_6 = 5U;
extern const uint64_t RANK_7 = 6U;
extern const uint64_t RANK_8 = 7U;

//set index values for files
extern const uint64_t FILE_A = 0U;
extern const uint64_t FILE_B = 1U;
extern const uint64_t FILE_C = 2U;
extern const uint64_t FILE_D = 3U;
extern const uint64_t FILE_E = 4U;
extern const uint64_t FILE_F = 5U;
extern const uint64_t FILE_G = 6U;
extern const uint64_t FILE_H = 7U;

//board positionsU;
extern const uint64_t A1 = 1U;
extern const uint64_t B1 = 2U;
extern const uint64_t C1 = 4U;
extern const uint64_t D1 = 8U;
extern const uint64_t E1 = 16U;
extern const uint64_t F1 = 32U;
extern const uint64_t G1 = 64U;
extern const uint64_t H1 = 128U;
extern const uint64_t A2 = 256U;
extern const uint64_t B2 = 512U;
extern const uint64_t C2 = 1024U;
extern const uint64_t D2 = 2048U;
extern const uint64_t E2 = 4096U;
extern const uint64_t F2 = 8192U;
extern const uint64_t G2 = 16384U;
extern const uint64_t H2 = 32768U;
extern const uint64_t A3 = 65536U;
extern const uint64_t B3 = 131072U;
extern const uint64_t C3 = 262144U;
extern const uint64_t D3 = 524288U;
extern const uint64_t E3 = 1048576U;
extern const uint64_t F3 = 2097152U;
extern const uint64_t G3 = 4194304U;
extern const uint64_t H3 = 8388608U;
extern const uint64_t A4 = 16777216U;
extern const uint64_t B4 = 33554432U;
extern const uint64_t C4 = 67108864U;
extern const uint64_t D4 = 134217728U;
extern const uint64_t E4 = 268435456U;
extern const uint64_t F4 = 536870912U;
extern const uint64_t G4 = 1073741824U;
extern const uint64_t H4 = 2147483648U;
extern const uint64_t A5 = 4294967296U;
extern const uint64_t B5 = 8589934592U;
extern const uint64_t C5 = 17179869184U;
extern const uint64_t D5 = 34359738368U;
extern const uint64_t E5 = 68719476736U;
extern const uint64_t F5 = 137438953472U;
extern const uint64_t G5 = 274877906944U;
extern const uint64_t H5 = 549755813888U;
extern const uint64_t A6 = 1099511627776U;
extern const uint64_t B6 = 2199023255552U;
extern const uint64_t C6 = 4398046511104U;
extern const uint64_t D6 = 8796093022208U;
extern const uint64_t E6 = 17592186044416U;
extern const uint64_t F6 = 35184372088832U;
extern const uint64_t G6 = 70368744177664U;
extern const uint64_t H6 = 140737488355328U;
extern const uint64_t A7 = 281474976710656U;
extern const uint64_t B7 = 562949953421312U;
extern const uint64_t C7 = 1125899906842624U;
extern const uint64_t D7 = 2251799813685248U;
extern const uint64_t E7 = 4503599627370496U;
extern const uint64_t F7 = 9007199254740992U;
extern const uint64_t G7 = 18014398509481984U;
extern const uint64_t H7 = 36028797018963968U;
extern const uint64_t A8 = 72057594037927936U;
extern const uint64_t B8 = 144115188075855872U;
extern const uint64_t C8 = 288230376151711744U;
extern const uint64_t D8 = 576460752303423488U;
extern const uint64_t E8 = 1152921504606846976U;
extern const uint64_t F8 = 2305843009213693952U;
extern const uint64_t G8 = 4611686018427387904U;
extern const uint64_t H8 = 9223372036854775808U;

extern const uint64_t MASK_1 = 18374686479671623680U;
extern const uint64_t MASK_2 = 71776119061217280U;
extern const uint64_t MASK_3 = 280375465082880U;
extern const uint64_t MASK_4 = 1095216660480U;
extern const uint64_t MASK_5 = 4278190080U;
extern const uint64_t MASK_6 = 16711680U;
extern const uint64_t MASK_7 = 65280U;
extern const uint64_t MASK_8 = 255U;

extern const uint64_t MASK_A = 72340172838076673U;
extern const uint64_t MASK_B = 144680345676153346U;
extern const uint64_t MASK_C = 289360691352306692U;
extern const uint64_t MASK_D = 578721382704613384U;
extern const uint64_t MASK_E = 1157442765409226768U;
extern const uint64_t MASK_F = 2314885530818453536U;
extern const uint64_t MASK_G = 4629771061636907072U;
extern const uint64_t MASK_H = 9259542123273814144U;

extern const uint64_t CLEAR_1 = 72057594037927935U;
extern const uint64_t CLEAR_2 = 18374967954648334335U;
extern const uint64_t CLEAR_3 = 18446463698244468735U;
extern const uint64_t CLEAR_4 = 18446742978492891135U;
extern const uint64_t CLEAR_5 = 18446744069431361535U;
extern const uint64_t CLEAR_6 = 18446744073692839935U;
extern const uint64_t CLEAR_7 = 18446744073709486335U;
extern const uint64_t CLEAR_8 = 18446744073709551360U;

extern const uint64_t CLEAR_A = 18374403900871474942U;
extern const uint64_t CLEAR_B = 18302063728033398269U;
extern const uint64_t CLEAR_C = 18157383382357244923U;
extern const uint64_t CLEAR_D = 17868022691004938231U;
extern const uint64_t CLEAR_E = 17289301308300324847U;
extern const uint64_t CLEAR_F = 16131858542891098079U;
extern const uint64_t CLEAR_G = 13816973012072644543U;
extern const uint64_t CLEAR_H = 9187201950435737471U;