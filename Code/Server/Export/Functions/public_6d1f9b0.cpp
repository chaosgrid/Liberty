#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f9b0);

#define public_6d1f9d1 _public_6d1f9d1
#define public_6d1f9e4 _public_6d1f9e4
#define public_6d1f9f4 _public_6d1f9f4
#define public_6d1fa06 _public_6d1fa06
#define public_6d1fa15 _public_6d1fa15
#define public_6d1fa20 _public_6d1fa20
#define public_6d1fa43 _public_6d1fa43
#define public_6d1fa49 _public_6d1fa49
#define public_6d1fa52 _public_6d1fa52
#define public_6d1fa71 _public_6d1fa71
#define public_6d1fa85 _public_6d1fa85
#define public_6d1fa9a _public_6d1fa9a
#define public_6d1fab0 _public_6d1fab0
#define public_6d1fac2 _public_6d1fac2
#define public_6d1fad9 _public_6d1fad9
#define public_6d1fae0 _public_6d1fae0
#define public_6d1fafa _public_6d1fafa
#define public_6d1fb0d _public_6d1fb0d
#define public_6d1fb31 _public_6d1fb31
#define public_6d1fb45 _public_6d1fb45
#define public_6d1fb5a _public_6d1fb5a
#define public_6d1fb70 _public_6d1fb70
#define public_6d1fb82 _public_6d1fb82
#define public_6d1fb99 _public_6d1fb99
#define public_6d1fba0 _public_6d1fba0
#define public_6d1fbba _public_6d1fbba
#define public_6d1fbcd _public_6d1fbcd
#define public_6d1fbf1 _public_6d1fbf1
#define public_6d1fc05 _public_6d1fc05
#define public_6d1fc1a _public_6d1fc1a
#define public_6d1fc30 _public_6d1fc30
#define public_6d1fc42 _public_6d1fc42
#define public_6d1fc59 _public_6d1fc59
#define public_6d1fc60 _public_6d1fc60
#define public_6d1fc7a _public_6d1fc7a
#define public_6d1fc8d _public_6d1fc8d
#define public_6d1fcb1 _public_6d1fcb1
#define public_6d1fcc5 _public_6d1fcc5
#define public_6d1fcda _public_6d1fcda
#define public_6d1fcf0 _public_6d1fcf0
#define public_6d1fd02 _public_6d1fd02
#define public_6d1fd1b _public_6d1fd1b
#define public_6d1fd20 _public_6d1fd20
#define public_6d1fd3a _public_6d1fd3a
#define public_6d1fd4f _public_6d1fd4f
#define public_6d1fd75 _public_6d1fd75
#define public_6d1fd86 _public_6d1fd86
#define public_6d1fd90 _public_6d1fd90

PROC_DECLARE(0x6d1f9b0, internal_6d1f9b0, public_6d1f9b0);
extern "C" NAKED register_t __cdecl internal_6d1f9b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6d64c18]
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        test ah, 2
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        je public_6d1fa43
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d1fa49
        public_6d1f9d1 : nop
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d1f9e4
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fa43
        public_6d1f9e4 : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d1fa15
        public_6d1f9f4 : nop
        cmp eax, edi
        je public_6d1fa49
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d1f9f4
        public_6d1fa06 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6d1f9d1
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d1fa15 : nop
        cmp eax, edi
        je public_6d1fa49
        lea esp, ss:[esp]
        public_6d1fa20 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fa06
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d1fa20
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d1fa43 : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, edi
        jne public_6d1fa52
        public_6d1fa49 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d1fa52 : nop
        movzx edx, word ptr ds : [ecx]
        add edx, 0xFFFFFFD6
        xor eax, eax
        cmp edx, 0x53
        ja public_6d1fd90
/*FIXUP movzx edx, byte ptr ds : [edx+public_6d1fdb4] @0x6d1fa63*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6d1fd98] @0x6d1fa6a*/
  JMPTB cmp edx, 0
  JMPTB jne public_4c00000000003389
  JMPTB mov edx, 0
  JMPTB public_4c00000000003389 : nop
        je public_6d1fa71
  JMPTB cmp edx, 1
  JMPTB jne public_4c00000000003385
  JMPTB mov edx, 1
  JMPTB public_4c00000000003385 : nop
        je public_6d1fb31
  JMPTB cmp edx, 2
  JMPTB jne public_4c00000000003381
  JMPTB mov edx, 2
  JMPTB public_4c00000000003381 : nop
        je public_6d1fd86
  JMPTB cmp edx, 3
  JMPTB jne public_4c0000000000337d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000337d : nop
        je public_6d1fd90
  JMPTB cmp edx, 4
  JMPTB jne public_4c00000000003379
  JMPTB mov edx, 6
  JMPTB public_4c00000000003379 : nop
        je public_6d1fd90
  JMPTB cmp edx, 5
  JMPTB jne public_4c00000000003375
  JMPTB mov edx, 6
  JMPTB public_4c00000000003375 : nop
        je public_6d1fd90
  JMPTB cmp edx, 6
  JMPTB jne public_4c00000000003371
  JMPTB mov edx, 6
  JMPTB public_4c00000000003371 : nop
        je public_6d1fd90
  JMPTB cmp edx, 7
  JMPTB jne public_4c0000000000336d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000336d : nop
        je public_6d1fd90
  JMPTB cmp edx, 8
  JMPTB jne public_4c00000000003369
  JMPTB mov edx, 6
  JMPTB public_4c00000000003369 : nop
        je public_6d1fd90
  JMPTB cmp edx, 9
  JMPTB jne public_4c00000000003365
  JMPTB mov edx, 6
  JMPTB public_4c00000000003365 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0xA
  JMPTB jne public_4c00000000003361
  JMPTB mov edx, 6
  JMPTB public_4c00000000003361 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0xB
  JMPTB jne public_4c0000000000335d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000335d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0xC
  JMPTB jne public_4c00000000003359
  JMPTB mov edx, 6
  JMPTB public_4c00000000003359 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0xD
  JMPTB jne public_4c00000000003355
  JMPTB mov edx, 6
  JMPTB public_4c00000000003355 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0xE
  JMPTB jne public_4c00000000003351
  JMPTB mov edx, 6
  JMPTB public_4c00000000003351 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0xF
  JMPTB jne public_4c0000000000334d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000334d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x10
  JMPTB jne public_4c00000000003349
  JMPTB mov edx, 6
  JMPTB public_4c00000000003349 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x11
  JMPTB jne public_4c00000000003345
  JMPTB mov edx, 6
  JMPTB public_4c00000000003345 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x12
  JMPTB jne public_4c00000000003341
  JMPTB mov edx, 6
  JMPTB public_4c00000000003341 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x13
  JMPTB jne public_4c0000000000333d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000333d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x14
  JMPTB jne public_4c00000000003339
  JMPTB mov edx, 6
  JMPTB public_4c00000000003339 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x15
  JMPTB jne public_4c00000000003335
  JMPTB mov edx, 3
  JMPTB public_4c00000000003335 : nop
        je public_6d1fbf1
  JMPTB cmp edx, 0x16
  JMPTB jne public_4c00000000003331
  JMPTB mov edx, 6
  JMPTB public_4c00000000003331 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x17
  JMPTB jne public_4c0000000000332d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000332d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x18
  JMPTB jne public_4c00000000003329
  JMPTB mov edx, 6
  JMPTB public_4c00000000003329 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x19
  JMPTB jne public_4c00000000003325
  JMPTB mov edx, 6
  JMPTB public_4c00000000003325 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x1A
  JMPTB jne public_4c00000000003321
  JMPTB mov edx, 6
  JMPTB public_4c00000000003321 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x1B
  JMPTB jne public_4c0000000000331d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000331d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x1C
  JMPTB jne public_4c00000000003319
  JMPTB mov edx, 6
  JMPTB public_4c00000000003319 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x1D
  JMPTB jne public_4c00000000003315
  JMPTB mov edx, 6
  JMPTB public_4c00000000003315 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x1E
  JMPTB jne public_4c00000000003311
  JMPTB mov edx, 6
  JMPTB public_4c00000000003311 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x1F
  JMPTB jne public_4c0000000000330d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000330d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x20
  JMPTB jne public_4c00000000003309
  JMPTB mov edx, 6
  JMPTB public_4c00000000003309 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x21
  JMPTB jne public_4c00000000003305
  JMPTB mov edx, 6
  JMPTB public_4c00000000003305 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x22
  JMPTB jne public_4c00000000003301
  JMPTB mov edx, 6
  JMPTB public_4c00000000003301 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x23
  JMPTB jne public_4c000000000032fd
  JMPTB mov edx, 6
  JMPTB public_4c000000000032fd : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x24
  JMPTB jne public_4c000000000032f9
  JMPTB mov edx, 6
  JMPTB public_4c000000000032f9 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x25
  JMPTB jne public_4c000000000032f5
  JMPTB mov edx, 6
  JMPTB public_4c000000000032f5 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x26
  JMPTB jne public_4c000000000032f1
  JMPTB mov edx, 6
  JMPTB public_4c000000000032f1 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x27
  JMPTB jne public_4c000000000032ed
  JMPTB mov edx, 6
  JMPTB public_4c000000000032ed : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x28
  JMPTB jne public_4c000000000032e9
  JMPTB mov edx, 6
  JMPTB public_4c000000000032e9 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x29
  JMPTB jne public_4c000000000032e5
  JMPTB mov edx, 6
  JMPTB public_4c000000000032e5 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x2A
  JMPTB jne public_4c000000000032e1
  JMPTB mov edx, 6
  JMPTB public_4c000000000032e1 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x2B
  JMPTB jne public_4c000000000032dd
  JMPTB mov edx, 6
  JMPTB public_4c000000000032dd : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x2C
  JMPTB jne public_4c000000000032d9
  JMPTB mov edx, 6
  JMPTB public_4c000000000032d9 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x2D
  JMPTB jne public_4c000000000032d5
  JMPTB mov edx, 6
  JMPTB public_4c000000000032d5 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x2E
  JMPTB jne public_4c000000000032d1
  JMPTB mov edx, 6
  JMPTB public_4c000000000032d1 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x2F
  JMPTB jne public_4c000000000032cd
  JMPTB mov edx, 6
  JMPTB public_4c000000000032cd : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x30
  JMPTB jne public_4c000000000032c9
  JMPTB mov edx, 6
  JMPTB public_4c000000000032c9 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x31
  JMPTB jne public_4c000000000032c5
  JMPTB mov edx, 6
  JMPTB public_4c000000000032c5 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x32
  JMPTB jne public_4c000000000032c1
  JMPTB mov edx, 6
  JMPTB public_4c000000000032c1 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x33
  JMPTB jne public_4c000000000032bd
  JMPTB mov edx, 6
  JMPTB public_4c000000000032bd : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x34
  JMPTB jne public_4c000000000032b9
  JMPTB mov edx, 6
  JMPTB public_4c000000000032b9 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x35
  JMPTB jne public_4c000000000032b5
  JMPTB mov edx, 6
  JMPTB public_4c000000000032b5 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x36
  JMPTB jne public_4c000000000032b1
  JMPTB mov edx, 6
  JMPTB public_4c000000000032b1 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x37
  JMPTB jne public_4c000000000032ad
  JMPTB mov edx, 6
  JMPTB public_4c000000000032ad : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x38
  JMPTB jne public_4c000000000032a9
  JMPTB mov edx, 6
  JMPTB public_4c000000000032a9 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x39
  JMPTB jne public_4c000000000032a5
  JMPTB mov edx, 6
  JMPTB public_4c000000000032a5 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x3A
  JMPTB jne public_4c000000000032a1
  JMPTB mov edx, 6
  JMPTB public_4c000000000032a1 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x3B
  JMPTB jne public_4c0000000000329d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000329d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x3C
  JMPTB jne public_4c00000000003299
  JMPTB mov edx, 6
  JMPTB public_4c00000000003299 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x3D
  JMPTB jne public_4c00000000003295
  JMPTB mov edx, 6
  JMPTB public_4c00000000003295 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x3E
  JMPTB jne public_4c00000000003291
  JMPTB mov edx, 6
  JMPTB public_4c00000000003291 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x3F
  JMPTB jne public_4c0000000000328d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000328d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x40
  JMPTB jne public_4c00000000003289
  JMPTB mov edx, 6
  JMPTB public_4c00000000003289 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x41
  JMPTB jne public_4c00000000003285
  JMPTB mov edx, 6
  JMPTB public_4c00000000003285 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x42
  JMPTB jne public_4c00000000003281
  JMPTB mov edx, 6
  JMPTB public_4c00000000003281 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x43
  JMPTB jne public_4c0000000000327d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000327d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x44
  JMPTB jne public_4c00000000003279
  JMPTB mov edx, 6
  JMPTB public_4c00000000003279 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x45
  JMPTB jne public_4c00000000003275
  JMPTB mov edx, 6
  JMPTB public_4c00000000003275 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x46
  JMPTB jne public_4c00000000003271
  JMPTB mov edx, 6
  JMPTB public_4c00000000003271 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x47
  JMPTB jne public_4c0000000000326d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000326d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x48
  JMPTB jne public_4c00000000003269
  JMPTB mov edx, 6
  JMPTB public_4c00000000003269 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x49
  JMPTB jne public_4c00000000003265
  JMPTB mov edx, 6
  JMPTB public_4c00000000003265 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x4A
  JMPTB jne public_4c00000000003261
  JMPTB mov edx, 6
  JMPTB public_4c00000000003261 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x4B
  JMPTB jne public_4c0000000000325d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000325d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x4C
  JMPTB jne public_4c00000000003259
  JMPTB mov edx, 6
  JMPTB public_4c00000000003259 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x4D
  JMPTB jne public_4c00000000003255
  JMPTB mov edx, 6
  JMPTB public_4c00000000003255 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x4E
  JMPTB jne public_4c00000000003251
  JMPTB mov edx, 6
  JMPTB public_4c00000000003251 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x4F
  JMPTB jne public_4c0000000000324d
  JMPTB mov edx, 6
  JMPTB public_4c0000000000324d : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x50
  JMPTB jne public_4c00000000003249
  JMPTB mov edx, 6
  JMPTB public_4c00000000003249 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x51
  JMPTB jne public_4c00000000003245
  JMPTB mov edx, 4
  JMPTB public_4c00000000003245 : nop
        je public_6d1fd75
  JMPTB cmp edx, 0x52
  JMPTB jne public_4c00000000003241
  JMPTB mov edx, 6
  JMPTB public_4c00000000003241 : nop
        je public_6d1fd90
  JMPTB cmp edx, 0x53
  JMPTB jne public_4c0000000000323d
  JMPTB mov edx, 5
  JMPTB public_4c0000000000323d : nop
        je public_6d1fcb1
  JMPTB int 3
        public_6d1fa71 : nop
        lea eax, ds:[ecx+2]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx]
        test ch, 2
        je public_6d1fb0d
        cmp eax, edi
        je public_6d1fafa
        public_6d1fa85 : nop
        mov eax, dword ptr ds : [esi]
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d1fa9a
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fb0d
        public_6d1fa9a : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d1fad9
        lea ebx, ds:[ebx]
        public_6d1fab0 : nop
        cmp eax, edi
        je public_6d1fafa
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d1fab0
        public_6d1fac2 : nop
        cmp dword ptr ds : [esi], edi
        jne public_6d1fa85
        xor al, al
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 0xA
        ret 8
        public_6d1fad9 : nop
        cmp eax, edi
        je public_6d1fafa
        lea ecx, ds:[ecx]
        public_6d1fae0 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fac2
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d1fae0
        public_6d1fafa : nop
        xor al, al
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 0xA
        ret 8
        public_6d1fb0d : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d1fafa
        cmp word ptr ds : [eax], 0x3F
        jne public_6d1fafa
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov al, 1
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 0xA
        ret 8
        public_6d1fb31 : nop
        lea eax, ds:[ecx+2]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx]
        test ch, 2
        je public_6d1fbcd
        cmp eax, edi
        je public_6d1fbba
        public_6d1fb45 : nop
        mov eax, dword ptr ds : [esi]
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d1fb5a
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fbcd
        public_6d1fb5a : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d1fb99
        lea ebx, ds:[ebx]
        public_6d1fb70 : nop
        cmp eax, edi
        je public_6d1fbba
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d1fb70
        public_6d1fb82 : nop
        cmp dword ptr ds : [esi], edi
        jne public_6d1fb45
        xor al, al
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 9
        ret 8
        public_6d1fb99 : nop
        cmp eax, edi
        je public_6d1fbba
        lea ecx, ds:[ecx]
        public_6d1fba0 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fb82
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d1fba0
        public_6d1fbba : nop
        xor al, al
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 9
        ret 8
        public_6d1fbcd : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d1fbba
        cmp word ptr ds : [eax], 0x3F
        jne public_6d1fbba
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov al, 1
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 9
        ret 8
        public_6d1fbf1 : nop
        lea eax, ds:[ecx+2]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx]
        test ch, 2
        je public_6d1fc8d
        cmp eax, edi
        je public_6d1fc7a
        public_6d1fc05 : nop
        mov eax, dword ptr ds : [esi]
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d1fc1a
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fc8d
        public_6d1fc1a : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d1fc59
        lea ebx, ds:[ebx]
        public_6d1fc30 : nop
        cmp eax, edi
        je public_6d1fc7a
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d1fc30
        public_6d1fc42 : nop
        cmp dword ptr ds : [esi], edi
        jne public_6d1fc05
        xor al, al
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 0xB
        ret 8
        public_6d1fc59 : nop
        cmp eax, edi
        je public_6d1fc7a
        lea ecx, ds:[ecx]
        public_6d1fc60 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fc42
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d1fc60
        public_6d1fc7a : nop
        xor al, al
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 0xB
        ret 8
        public_6d1fc8d : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d1fc7a
        cmp word ptr ds : [eax], 0x3F
        jne public_6d1fc7a
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov al, 1
        neg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        sbb eax, eax
        and eax, 3
        add eax, 0xB
        ret 8
        public_6d1fcb1 : nop
        lea eax, ds:[ecx+2]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx]
        test ch, 2
        je public_6d1fd4f
        cmp eax, edi
        je public_6d1fd3a
        public_6d1fcc5 : nop
        mov eax, dword ptr ds : [esi]
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d1fcda
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fd4f
        public_6d1fcda : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d1fd1b
        lea ebx, ds:[ebx]
        public_6d1fcf0 : nop
        cmp eax, edi
        je public_6d1fd3a
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d1fcf0
        public_6d1fd02 : nop
        cmp dword ptr ds : [esi], edi
        jne public_6d1fcc5
        xor al, al
        xor ecx, ecx
        test al, al
        setne cl
        pop edi
        pop esi
        pop ebp
        pop ebx
        add ecx, 0x11
        mov eax, ecx
        ret 8
        public_6d1fd1b : nop
        cmp eax, edi
        je public_6d1fd3a
        nop 
        public_6d1fd20 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d1fd02
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d1fd20
        public_6d1fd3a : nop
        xor al, al
        xor ecx, ecx
        test al, al
        setne cl
        pop edi
        pop esi
        pop ebp
        pop ebx
        add ecx, 0x11
        mov eax, ecx
        ret 8
        public_6d1fd4f : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d1fd3a
        cmp word ptr ds : [eax], 0x3F
        jne public_6d1fd3a
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov al, 1
        xor ecx, ecx
        test al, al
        setne cl
        pop edi
        pop esi
        pop ebp
        pop ebx
        add ecx, 0x11
        mov eax, ecx
        ret 8
        public_6d1fd75 : nop
        pop edi
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov eax, 0xF
        pop ebx
        ret 8
        public_6d1fd86 : nop
        add ecx, 2
        mov eax, 0x10
        mov dword ptr ds : [esi], ecx
        public_6d1fd90 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d1f9b0)
        ASM_EXPORT_ENTRY_FIRST(0x6d1fa71, public_6d1fa71)
        ASM_EXPORT_ENTRY(0x6d1fb31, public_6d1fb31)
        ASM_EXPORT_ENTRY(0x6d1fbf1, public_6d1fbf1)
        ASM_EXPORT_ENTRY(0x6d1fcb1, public_6d1fcb1)
        ASM_EXPORT_ENTRY(0x6d1fd75, public_6d1fd75)
        ASM_EXPORT_ENTRY(0x6d1fd86, public_6d1fd86)
        ASM_EXPORT_ENTRY_LAST(0x6d1fd90, public_6d1fd90)
    }
}

#undef public_6d1f9d1
#undef public_6d1f9e4
#undef public_6d1f9f4
#undef public_6d1fa06
#undef public_6d1fa15
#undef public_6d1fa20
#undef public_6d1fa43
#undef public_6d1fa49
#undef public_6d1fa52
#undef public_6d1fa71
#undef public_6d1fa85
#undef public_6d1fa9a
#undef public_6d1fab0
#undef public_6d1fac2
#undef public_6d1fad9
#undef public_6d1fae0
#undef public_6d1fafa
#undef public_6d1fb0d
#undef public_6d1fb31
#undef public_6d1fb45
#undef public_6d1fb5a
#undef public_6d1fb70
#undef public_6d1fb82
#undef public_6d1fb99
#undef public_6d1fba0
#undef public_6d1fbba
#undef public_6d1fbcd
#undef public_6d1fbf1
#undef public_6d1fc05
#undef public_6d1fc1a
#undef public_6d1fc30
#undef public_6d1fc42
#undef public_6d1fc59
#undef public_6d1fc60
#undef public_6d1fc7a
#undef public_6d1fc8d
#undef public_6d1fcb1
#undef public_6d1fcc5
#undef public_6d1fcda
#undef public_6d1fcf0
#undef public_6d1fd02
#undef public_6d1fd1b
#undef public_6d1fd20
#undef public_6d1fd3a
#undef public_6d1fd4f
#undef public_6d1fd75
#undef public_6d1fd86
#undef public_6d1fd90

#pragma init_seg(compiler)
extern "C" void const* const public_6d1fa71 = __AsmFindLabelExport(&internal_6d1f9b0, 0x6d1fa71);
extern "C" void const* const public_6d1fb31 = __AsmFindLabelExport(&internal_6d1f9b0, 0x6d1fb31);
extern "C" void const* const public_6d1fbf1 = __AsmFindLabelExport(&internal_6d1f9b0, 0x6d1fbf1);
extern "C" void const* const public_6d1fcb1 = __AsmFindLabelExport(&internal_6d1f9b0, 0x6d1fcb1);
extern "C" void const* const public_6d1fd75 = __AsmFindLabelExport(&internal_6d1f9b0, 0x6d1fd75);
extern "C" void const* const public_6d1fd86 = __AsmFindLabelExport(&internal_6d1f9b0, 0x6d1fd86);
extern "C" void const* const public_6d1fd90 = __AsmFindLabelExport(&internal_6d1f9b0, 0x6d1fd90);
