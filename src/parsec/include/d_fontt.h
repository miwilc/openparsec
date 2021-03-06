/*
 * PARSEC HEADER: dg_fontt.h
 */

#ifndef _DG_FONTT_H_
#define _DG_FONTT_H_


// ----------------------------------------------------------------------------
//
dword Char16x16Geom[ 91 ] = {

	32*320 +  5*16	,    // ' '
	16*320 + 17*16	,    // !
	16*320 + 18*16	,    // "
	32*320 +  3*16	,    // #
	32*320 +  4*16	,    // $ -> (c)
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +    16	,    // ,
	32*320 +    32	,    // -
	32*320 			,    // .
	16*320 + 19*16	,    // /

	16*320 + 16*16	,    // 0
	16*320 +  7*16	,    // 1
	16*320 +  8*16	,    // 2
	16*320 +  9*16	,    // 3
	16*320 + 10*16	,    // 4
	16*320 + 11*16	,    // 5
	16*320 + 12*16	,    // 6
	16*320 + 13*16	,    // 7
	16*320 + 14*16	,    // 8
	16*320 + 15*16	,    // 9
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
		 	    0	,    // @
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
	32*320 +  5*16	,
		 	    16	,    // a
		 	    32	,    // b
		 	    3*16	,    // c
		 	    4*16	,    // d
		 	    5*16	,    // e
		 	    6*16	,    // f
		 	    7*16	,    // g
		 	    8*16	,    // h
		 	    9*16	,    // i
		 	10*16	,    // j
		 	11*16	,    // k
		 	12*16	,    // l
		 	13*16	,    // m
		 	14*16	,    // n
		 	15*16	,    // o
		 	16*16	,    // p
		 	17*16	,    // q
		 	18*16	,    // r
		 	19*16	,    // s
	16*320			,    // t
	16*320 +    16	,    // u
	16*320 +    32	,    // v
	16*320 +  3*16	,    // w
	16*320 +  4*16	,    // x
	16*320 +  5*16	,    // y
	16*320 +  6*16	,    // z
};


// ----------------------------------------------------------------------------
//
struct char_dat {

	word location;
	byte width;
	byte height;
};

#define MAKE_CHARDAT(a,b,c) SWAP_32(((dword)(a))|(((dword)(b))<<16)|(((dword)(c))<<24))


// ----------------------------------------------------------------------------
//
dword CharGoldGeom[ 95 ] = {

	MAKE_CHARDAT( 17429-10881,  9, 16 ),    	// ' '
	MAKE_CHARDAT( 17424-10881,  6, 16 ),    	// !
	MAKE_CHARDAT(           0,  0,  0 ), 		// "
	MAKE_CHARDAT(           0,  0,  0 ), 		// #
	MAKE_CHARDAT(           0,  0,  0 ), 		// $
	MAKE_CHARDAT(           0,  0,  0 ), 		// %
	MAKE_CHARDAT(           0,  0,  0 ), 		// &
	MAKE_CHARDAT(           0,  0,  0 ), 		// '
	MAKE_CHARDAT(           0,  0,  0 ), 		// (
	MAKE_CHARDAT(           0,  0,  0 ), 		// )
	MAKE_CHARDAT( 17409-10881, 14, 16 ),    	// *
	MAKE_CHARDAT(           0,  0,  0 ), 		// +
	MAKE_CHARDAT( 17393-10881,  6, 18 ),    	// ,
	MAKE_CHARDAT(       12800, 17, 16 ), 		// -
	MAKE_CHARDAT( 17377-10881,  6, 16 ),    	// .
	MAKE_CHARDAT( 23824-10881,  9, 16 ),    	// /
	MAKE_CHARDAT( 17438-10881, 16, 16 ),    	// 0
	MAKE_CHARDAT( 17456-10881, 10, 16 ),    	// 1
	MAKE_CHARDAT( 17471-10881, 14, 16 ),    	// 2
	MAKE_CHARDAT( 17487-10881, 14, 16 ),    	// 3
	MAKE_CHARDAT( 17503-10881, 14, 16 ),    	// 4
	MAKE_CHARDAT( 17519-10881, 14, 16 ),    	// 5
	MAKE_CHARDAT( 17535-10881, 14, 16 ),    	// 6
	MAKE_CHARDAT( 17552-10881, 14, 16 ),    	// 7
	MAKE_CHARDAT( 17568-10881, 14, 16 ),    	// 8
	MAKE_CHARDAT( 17584-10881, 14, 16 ),    	// 9
	MAKE_CHARDAT( 17385-10881,  6, 13 ),    	// :
	MAKE_CHARDAT( 17400-10881,  6, 18 ),    	// ;
	MAKE_CHARDAT(           0,  0,  0 ), 		// <
	MAKE_CHARDAT(           0,  0,  0 ), 		// =
	MAKE_CHARDAT(           0,  0,  0 ), 		// >,
	MAKE_CHARDAT(           0,  0,  0 ), 		// ?
	MAKE_CHARDAT(       12820, 20, 16 ), 	 	// @
	MAKE_CHARDAT( 10881-10881, 15, 16 ),    	// A
	MAKE_CHARDAT( 10897-10881, 14, 16 ),    	// B
	MAKE_CHARDAT( 10913-10881, 15, 16 ),    	// C
	MAKE_CHARDAT( 10928-10881, 14, 16 ),    	// D
	MAKE_CHARDAT( 10945-10881, 14, 16 ),    	// E
	MAKE_CHARDAT( 10961-10881, 14, 16 ),    	// F
	MAKE_CHARDAT( 10977-10881, 15, 16 ),    	// G
	MAKE_CHARDAT( 10993-10881, 14, 16 ),    	// H
	MAKE_CHARDAT( 11012-10881,  8, 16 ),     	// I
	MAKE_CHARDAT( 11025-10881, 14, 16 ),    	// J
	MAKE_CHARDAT( 11042-10881, 14, 16 ),    	// K
	MAKE_CHARDAT( 11058-10881, 14, 16 ),    	// L
	MAKE_CHARDAT( 11074-10881, 16, 16 ),    	// M
	MAKE_CHARDAT( 11090-10881, 14, 16 ),    	// N
	MAKE_CHARDAT( 11106-10881, 16, 16 ),    	// O
	MAKE_CHARDAT( 11122-10881, 14, 16 ),    	// P
	MAKE_CHARDAT( 11138-10881, 16, 16 ),    	// Q
	MAKE_CHARDAT( 11154-10881, 14, 16 ),    	// R
	MAKE_CHARDAT( 11170-10881, 14, 16 ),    	// S
	MAKE_CHARDAT( 11186-10881, 14, 16 ),    	// T
	MAKE_CHARDAT( 17281-10881, 14, 16 ),    	// U
	MAKE_CHARDAT( 17297-10881, 14, 16 ),    	// V
	MAKE_CHARDAT( 17313-10881, 16, 16 ),    	// W
	MAKE_CHARDAT( 17329-10881, 14, 16 ),    	// X
	MAKE_CHARDAT( 17345-10881, 14, 16 ),    	// Y
	MAKE_CHARDAT( 17361-10881, 14, 16 ),    	// Z
	MAKE_CHARDAT(           0,  0,  0 ), 		// [
	MAKE_CHARDAT(           0,  0,  0 ), 		// '\'
	MAKE_CHARDAT(           0,  0,  0 ), 		// ]
	MAKE_CHARDAT(           0,  0,  0 ), 		// ^
	MAKE_CHARDAT(           0,  0,  0 ), 		// _
	MAKE_CHARDAT(           0,  0,  0 ), 		// `
	MAKE_CHARDAT( 10881-10881, 15, 16 ),    	// a
	MAKE_CHARDAT( 10897-10881, 14, 16 ),    	// b
	MAKE_CHARDAT( 10913-10881, 15, 16 ),    	// c
	MAKE_CHARDAT( 10928-10881, 14, 16 ),    	// d
	MAKE_CHARDAT( 10945-10881, 14, 16 ),    	// e
	MAKE_CHARDAT( 10961-10881, 14, 16 ),    	// f
	MAKE_CHARDAT( 10977-10881, 15, 16 ),    	// g
	MAKE_CHARDAT( 10993-10881, 14, 16 ),    	// h
	MAKE_CHARDAT( 11012-10881,  8, 16 ),     	// i
	MAKE_CHARDAT( 11025-10881, 14, 16 ),    	// j
	MAKE_CHARDAT( 11042-10881, 14, 16 ),    	// k
	MAKE_CHARDAT( 11058-10881, 14, 16 ),    	// l
	MAKE_CHARDAT( 11074-10881, 16, 16 ),    	// m
	MAKE_CHARDAT( 11090-10881, 14, 16 ),    	// n
	MAKE_CHARDAT( 11106-10881, 16, 16 ),    	// o
	MAKE_CHARDAT( 11122-10881, 14, 16 ),    	// p
	MAKE_CHARDAT( 11138-10881, 16, 16 ),    	// q
	MAKE_CHARDAT( 11154-10881, 14, 16 ),    	// r
	MAKE_CHARDAT( 11170-10881, 14, 16 ),    	// s
	MAKE_CHARDAT( 11186-10881, 14, 16 ),    	// t
	MAKE_CHARDAT( 17281-10881, 14, 16 ),    	// u
	MAKE_CHARDAT( 17297-10881, 14, 16 ),    	// v
	MAKE_CHARDAT( 17313-10881, 16, 16 ),    	// w
	MAKE_CHARDAT( 17329-10881, 14, 16 ),    	// x
	MAKE_CHARDAT( 17345-10881, 14, 16 ),    	// y
	MAKE_CHARDAT( 17361-10881, 14, 16 ),    	// z
	MAKE_CHARDAT(           0,  0,  0 ), 		// {
	MAKE_CHARDAT(           0,  0,  0 ), 		// |
	MAKE_CHARDAT(           0,  0,  0 ), 		// }
	MAKE_CHARDAT(           0,  0,  0 ) 		// ~
};


// ----------------------------------------------------------------------------
//
dword Char04x09Geom[ 96 ] = {

	3200 + 26*4	,      // space	(0x20)
	40*4		,      // !
	41*4		,      // "
	42*4		,      // #
	43*4		,      // $
	44*4		,	   // %
	3200 + 26*4	,	   // &
	54*4		,	   // '
	46*4		,	   // (
	47*4		,	   // )
	55*4		,	   // *
	49*4		,	   // +
	38*4		,      // ,
	50*4		,      // -
	39*4		,      // .
	45*4		,      // /
 	26*4		,      // 0
	27*4		,      // 1
	28*4		,      // 2
	29*4		,      // 3
	30*4		,      // 4
	31*4		,      // 5
	32*4		,      // 6
	33*4		,      // 7
	34*4		,      // 8
	35*4		,      // 9
	36*4		,	   // :
	37*4		,	   // ;
	52*4		,	   // <
	51*4		,	   // =
	53*4		,	   // >
	3200 + 26*4	,	   // ?
	48*4		,      // @
	3200       	 ,     // A
	3200 +  1*4	 ,     // B
	3200 +  2*4	 ,     // C
	3200 +  3*4	 ,     // D
	3200 +  4*4	 ,     // E
	3200 +  5*4	 ,     // F
	3200 +  6*4	 ,     // G
	3200 +  7*4	 ,     // H
	3200 +  8*4	 ,     // I
	3200 +  9*4	 ,     // J
	3200 + 10*4	 ,     // K
	3200 + 11*4	 ,     // L
	3200 + 12*4	 ,     // M
	3200 + 13*4	 ,     // N
	3200 + 14*4	 ,     // O
	3200 + 15*4	 ,     // P
	3200 + 16*4	 ,     // Q
	3200 + 17*4	 ,     // R
	3200 + 18*4	 ,     // S
	3200 + 19*4	 ,     // T
	3200 + 20*4	 ,     // U
	3200 + 21*4	 ,     // V
	3200 + 22*4	 ,     // W
	3200 + 23*4	 ,     // X
	3200 + 24*4	 ,     // Y
	3200 + 25*4	 ,     // Z
	56*4 		 ,	   // [
	3200 + 26*4	 ,
	57*4		 ,	   // ]
	3200 + 26*4	 ,
	58*4	 	 ,	   // _
	3200 + 26*4  ,
	0		,		// a
	1*4		,		// b
	2*4		,		// c
	3*4		,		// d
	4*4		,		// e
	5*4		,		// f
	6*4		,		// g
	7*4		,		// h
	8*4		,		// i
	9*4		,		// j
	10*4	,		// k
	11*4	,		// l
	12*4	,		// m
	13*4	,		// n
	14*4	,		// o
	15*4	,		// p
	16*4	,		// q
	17*4	,		// r
	18*4	,		// s
	19*4	,		// t
	20*4	,		// u
	21*4	,		// v
	22*4	,		// w
	23*4	,     	// x
	24*4	,     	// y
	25*4	,		// z
	3200 + 26*4	,	// {
	59*4	,		// |
	3200 + 26*4	,	// }
	3200 + 26*4	,	// ~
	3200 + 26*4	,	//		(0x7f)
};


// geometry of small 8x8 font used mainly for console -------------------------
//
dword	Char08x08Geom[ 96 ] = {

	8*320 +	23*8,	// space	(0x20)
	8*320 +	10*8,	// !
	8*320 +	11*8,	// "
	8*320 +	12*8,	// #
	8*320 +	13*8,	// $
	8*320 +	14*8,	// %
			   0,	// &
	8*320 + 16*8,	// '
	8*320 +	 4*8,	// (
	8*320 +	 5*8,	// )
	8*320 +	22*8,	// *
	8*320 +	 3*8,	// +
			36*8,	// ,
			39*8,   // -
			37*8,   // .
			38*8,   // /

			26*8,   // 0		(0x30)
			27*8,   // 1
			28*8,   // 2
			29*8,   // 3
			30*8,   // 4
			31*8,   // 5
			32*8,   // 6
			33*8,   // 7
			34*8,   // 8
			35*8,   // 9
	8*320 +	 1*8,   // :
	8*320 +	 0*8,   // ;
	8*320 +	17*8,   // <
	8*320 +	15*8,   // =
	8*320 +	18*8,   // >
	8*320 +	19*8,   // ?

	8*320 +	 9*8,	// @		(0x40)
			 0*8,   // A
			 1*8,   // B
			 2*8,   // C
			 3*8,   // D
			 4*8,   // E
			 5*8,   // F
			 6*8,   // G
			 7*8,   // H
			 8*8,   // I
			 9*8,   // J
			10*8,   // K
			11*8,   // L
			12*8,   // M
			13*8,   // N
			14*8,   // O

			15*8,   // P		(0x50)
			16*8,   // Q
			17*8,   // R
			18*8,   // S
			19*8,   // T
			20*8,   // U
			21*8,   // V
			22*8,   // W
			23*8,   // X
			24*8,   // Y
			25*8,   // Z
	8*320 +  6*8,   // [
			38*8,   // backslash
	8*320 +  7*8,   // ]
	8*320 +	 8*8,	// ^		(0x5e) == block cursor
	8*320 +  2*8,   // _

			   0,	// `		(0x60)
			 0*8,   // a
			 1*8,   // b
			 2*8,   // c
			 3*8,   // d
			 4*8,   // e
			 5*8,   // f
			 6*8,   // g
			 7*8,   // h
			 8*8,   // i
			 9*8,   // j
			10*8,   // k
			11*8,   // l
			12*8,   // m
			13*8,   // n
			14*8,   // o

			15*8,   // p		(0x70)
			16*8,   // q
			17*8,   // r
			18*8,   // s
			19*8,   // t
			20*8,   // u
			21*8,   // v
			22*8,   // w
			23*8,   // x
			24*8,   // y
			25*8,   // z
			   0,	// {
	8*320 +	20*8,	// |
			   0,	// }
			   0,	// ~
			   0,	//			(0x7f)
};


#endif // _DG_FONTT_H_


