#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41ddb0);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4c7c40);
CLANG_FORWARD_PROC_SYMBOL(public_51d7f0);
CLANG_FORWARD_PROC_SYMBOL(public_576240);

#define public_51d83b _public_51d83b
#define public_51d844 _public_51d844
#define public_51d866 _public_51d866
#define public_51d885 _public_51d885
#define public_51d8a7 _public_51d8a7
#define public_51d8c3 _public_51d8c3
#define public_51d8e2 _public_51d8e2
#define public_51d8fe _public_51d8fe
#define public_51d925 _public_51d925
#define public_51d92a _public_51d92a
#define public_51d946 _public_51d946
#define public_51d948 _public_51d948
#define public_51d960 _public_51d960

PROC_DECLARE(0x51d7f0, internal_51d7f0, public_51d7f0);
extern "C" NAKED register_t __cdecl internal_51d7f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x28
        push esi
        mov esi, ecx
        call public_45a740
        test al, al
        jne public_51d960
        push edi
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+8]
        rep stosd
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+8], eax
        lea eax, ds:[ecx-0x2A]
        cmp eax, 0x9E
        mov byte ptr ss : [esp+0x2E], 1
        pop edi
        ja public_51d960
/*FIXUP movzx eax, byte ptr ds : [eax+public_51d994] @0x51d82d*/
/*FIXUP jmp dword ptr ds : [eax*4+public_51d96c] @0x51d834*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000c302
  JMPTB mov eax, 0
  JMPTB public_4c0000000000c302 : nop
        je public_51d844
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000c2fe
  JMPTB mov eax, 1
  JMPTB public_4c0000000000c2fe : nop
        je public_51d866
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000c2fa
  JMPTB mov eax, 2
  JMPTB public_4c0000000000c2fa : nop
        je public_51d885
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000c2f6
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c2f6 : nop
        je public_51d8a7
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000c2f2
  JMPTB mov eax, 4
  JMPTB public_4c0000000000c2f2 : nop
        je public_51d8c3
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000c2ee
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c2ee : nop
        je public_51d8e2
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000c2ea
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2ea : nop
        je public_51d960
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000c2e6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2e6 : nop
        je public_51d960
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000c2e2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2e2 : nop
        je public_51d960
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000c2de
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2de : nop
        je public_51d960
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000c2da
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2da : nop
        je public_51d960
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000c2d6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2d6 : nop
        je public_51d960
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000c2d2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2d2 : nop
        je public_51d960
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000c2ce
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2ce : nop
        je public_51d960
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000c2ca
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2ca : nop
        je public_51d960
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000c2c6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2c6 : nop
        je public_51d960
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000c2c2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2c2 : nop
        je public_51d960
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000c2be
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2be : nop
        je public_51d960
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000c2ba
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2ba : nop
        je public_51d960
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000c2b6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2b6 : nop
        je public_51d960
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000c2b2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2b2 : nop
        je public_51d960
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000c2ae
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2ae : nop
        je public_51d960
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000c2aa
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2aa : nop
        je public_51d960
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000c2a6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2a6 : nop
        je public_51d960
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000c2a2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c2a2 : nop
        je public_51d960
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000c29e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c29e : nop
        je public_51d960
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000c29a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c29a : nop
        je public_51d960
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000c296
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c296 : nop
        je public_51d960
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000c292
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c292 : nop
        je public_51d960
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000c28e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c28e : nop
        je public_51d960
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000c28a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c28a : nop
        je public_51d960
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000c286
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c286 : nop
        je public_51d960
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000c282
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c282 : nop
        je public_51d960
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000c27e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c27e : nop
        je public_51d960
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000c27a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c27a : nop
        je public_51d960
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000c276
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c276 : nop
        je public_51d960
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000c272
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c272 : nop
        je public_51d960
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000c26e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c26e : nop
        je public_51d960
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000c26a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c26a : nop
        je public_51d960
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000c266
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c266 : nop
        je public_51d960
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000c262
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c262 : nop
        je public_51d960
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000c25e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c25e : nop
        je public_51d960
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000c25a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c25a : nop
        je public_51d960
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000c256
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c256 : nop
        je public_51d960
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000c252
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c252 : nop
        je public_51d960
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000c24e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c24e : nop
        je public_51d960
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000c24a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c24a : nop
        je public_51d960
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000c246
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c246 : nop
        je public_51d960
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000c242
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c242 : nop
        je public_51d960
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000c23e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c23e : nop
        je public_51d960
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000c23a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000c23a : nop
        je public_51d83b
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000c236
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c236 : nop
        je public_51d960
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000c232
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c232 : nop
        je public_51d960
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000c22e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c22e : nop
        je public_51d960
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000c22a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c22a : nop
        je public_51d960
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000c226
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c226 : nop
        je public_51d960
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000c222
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c222 : nop
        je public_51d960
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000c21e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c21e : nop
        je public_51d960
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c0000000000c21a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c21a : nop
        je public_51d960
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000c216
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c216 : nop
        je public_51d960
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000c212
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c212 : nop
        je public_51d960
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c0000000000c20e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c20e : nop
        je public_51d960
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c0000000000c20a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c20a : nop
        je public_51d960
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c0000000000c206
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c206 : nop
        je public_51d960
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c0000000000c202
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c202 : nop
        je public_51d960
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c0000000000c1fe
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1fe : nop
        je public_51d960
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c0000000000c1fa
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1fa : nop
        je public_51d960
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c0000000000c1f6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1f6 : nop
        je public_51d960
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c0000000000c1f2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1f2 : nop
        je public_51d960
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c0000000000c1ee
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1ee : nop
        je public_51d960
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c0000000000c1ea
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1ea : nop
        je public_51d960
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c0000000000c1e6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1e6 : nop
        je public_51d960
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c0000000000c1e2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1e2 : nop
        je public_51d960
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c0000000000c1de
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1de : nop
        je public_51d960
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c0000000000c1da
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1da : nop
        je public_51d960
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c0000000000c1d6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1d6 : nop
        je public_51d960
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c0000000000c1d2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1d2 : nop
        je public_51d960
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c0000000000c1ce
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1ce : nop
        je public_51d960
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c0000000000c1ca
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1ca : nop
        je public_51d960
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c0000000000c1c6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1c6 : nop
        je public_51d960
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c0000000000c1c2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1c2 : nop
        je public_51d960
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c0000000000c1be
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1be : nop
        je public_51d960
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c0000000000c1ba
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1ba : nop
        je public_51d960
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c0000000000c1b6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1b6 : nop
        je public_51d960
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c0000000000c1b2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1b2 : nop
        je public_51d960
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c0000000000c1ae
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1ae : nop
        je public_51d960
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c0000000000c1aa
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1aa : nop
        je public_51d960
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c0000000000c1a6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1a6 : nop
        je public_51d960
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c0000000000c1a2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c1a2 : nop
        je public_51d960
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c0000000000c19e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c19e : nop
        je public_51d960
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c0000000000c19a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c19a : nop
        je public_51d960
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c0000000000c196
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c196 : nop
        je public_51d960
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c0000000000c192
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c192 : nop
        je public_51d960
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c0000000000c18e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c18e : nop
        je public_51d960
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c0000000000c18a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c18a : nop
        je public_51d960
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c0000000000c186
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c186 : nop
        je public_51d960
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c0000000000c182
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c182 : nop
        je public_51d960
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c0000000000c17e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c17e : nop
        je public_51d960
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c0000000000c17a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c17a : nop
        je public_51d960
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c0000000000c176
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c176 : nop
        je public_51d960
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c0000000000c172
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c172 : nop
        je public_51d960
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c0000000000c16e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c16e : nop
        je public_51d960
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c0000000000c16a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c16a : nop
        je public_51d960
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c0000000000c166
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c166 : nop
        je public_51d960
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c0000000000c162
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c162 : nop
        je public_51d960
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c0000000000c15e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c15e : nop
        je public_51d960
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c0000000000c15a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c15a : nop
        je public_51d960
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c0000000000c156
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c156 : nop
        je public_51d960
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c0000000000c152
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c152 : nop
        je public_51d960
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c0000000000c14e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c14e : nop
        je public_51d960
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c0000000000c14a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c14a : nop
        je public_51d960
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c0000000000c146
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c146 : nop
        je public_51d960
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c0000000000c142
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c142 : nop
        je public_51d960
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c0000000000c13e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c13e : nop
        je public_51d960
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c0000000000c13a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c13a : nop
        je public_51d960
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c0000000000c136
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c136 : nop
        je public_51d960
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c0000000000c132
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c132 : nop
        je public_51d960
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c0000000000c12e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c12e : nop
        je public_51d960
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c0000000000c12a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c12a : nop
        je public_51d960
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c0000000000c126
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c126 : nop
        je public_51d960
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c0000000000c122
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c122 : nop
        je public_51d960
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c0000000000c11e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c11e : nop
        je public_51d960
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c0000000000c11a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c11a : nop
        je public_51d960
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c0000000000c116
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c116 : nop
        je public_51d960
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c0000000000c112
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c112 : nop
        je public_51d960
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c0000000000c10e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c10e : nop
        je public_51d960
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c0000000000c10a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c10a : nop
        je public_51d960
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c0000000000c106
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c106 : nop
        je public_51d960
  JMPTB cmp eax, 0x80
  JMPTB jne public_4c0000000000c102
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c102 : nop
        je public_51d960
  JMPTB cmp eax, 0x81
  JMPTB jne public_4c0000000000c0fe
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0fe : nop
        je public_51d960
  JMPTB cmp eax, 0x82
  JMPTB jne public_4c0000000000c0fa
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0fa : nop
        je public_51d960
  JMPTB cmp eax, 0x83
  JMPTB jne public_4c0000000000c0f6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0f6 : nop
        je public_51d960
  JMPTB cmp eax, 0x84
  JMPTB jne public_4c0000000000c0f2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0f2 : nop
        je public_51d960
  JMPTB cmp eax, 0x85
  JMPTB jne public_4c0000000000c0ee
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0ee : nop
        je public_51d960
  JMPTB cmp eax, 0x86
  JMPTB jne public_4c0000000000c0ea
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0ea : nop
        je public_51d960
  JMPTB cmp eax, 0x87
  JMPTB jne public_4c0000000000c0e6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0e6 : nop
        je public_51d960
  JMPTB cmp eax, 0x88
  JMPTB jne public_4c0000000000c0e2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0e2 : nop
        je public_51d960
  JMPTB cmp eax, 0x89
  JMPTB jne public_4c0000000000c0de
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0de : nop
        je public_51d960
  JMPTB cmp eax, 0x8A
  JMPTB jne public_4c0000000000c0da
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0da : nop
        je public_51d960
  JMPTB cmp eax, 0x8B
  JMPTB jne public_4c0000000000c0d6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0d6 : nop
        je public_51d960
  JMPTB cmp eax, 0x8C
  JMPTB jne public_4c0000000000c0d2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0d2 : nop
        je public_51d960
  JMPTB cmp eax, 0x8D
  JMPTB jne public_4c0000000000c0ce
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0ce : nop
        je public_51d960
  JMPTB cmp eax, 0x8E
  JMPTB jne public_4c0000000000c0ca
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0ca : nop
        je public_51d960
  JMPTB cmp eax, 0x8F
  JMPTB jne public_4c0000000000c0c6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0c6 : nop
        je public_51d960
  JMPTB cmp eax, 0x90
  JMPTB jne public_4c0000000000c0c2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0c2 : nop
        je public_51d960
  JMPTB cmp eax, 0x91
  JMPTB jne public_4c0000000000c0be
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0be : nop
        je public_51d960
  JMPTB cmp eax, 0x92
  JMPTB jne public_4c0000000000c0ba
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0ba : nop
        je public_51d960
  JMPTB cmp eax, 0x93
  JMPTB jne public_4c0000000000c0b6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0b6 : nop
        je public_51d960
  JMPTB cmp eax, 0x94
  JMPTB jne public_4c0000000000c0b2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0b2 : nop
        je public_51d960
  JMPTB cmp eax, 0x95
  JMPTB jne public_4c0000000000c0ae
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0ae : nop
        je public_51d960
  JMPTB cmp eax, 0x96
  JMPTB jne public_4c0000000000c0aa
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0aa : nop
        je public_51d960
  JMPTB cmp eax, 0x97
  JMPTB jne public_4c0000000000c0a6
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0a6 : nop
        je public_51d960
  JMPTB cmp eax, 0x98
  JMPTB jne public_4c0000000000c0a2
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c0a2 : nop
        je public_51d960
  JMPTB cmp eax, 0x99
  JMPTB jne public_4c0000000000c09e
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c09e : nop
        je public_51d960
  JMPTB cmp eax, 0x9A
  JMPTB jne public_4c0000000000c09a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c09a : nop
        je public_51d960
  JMPTB cmp eax, 0x9B
  JMPTB jne public_4c0000000000c096
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c096 : nop
        je public_51d960
  JMPTB cmp eax, 0x9C
  JMPTB jne public_4c0000000000c092
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c092 : nop
        je public_51d960
  JMPTB cmp eax, 0x9D
  JMPTB jne public_4c0000000000c08e
  JMPTB mov eax, 7
  JMPTB public_4c0000000000c08e : nop
        je public_51d8fe
  JMPTB cmp eax, 0x9E
  JMPTB jne public_4c0000000000c08a
  JMPTB mov eax, 8
  JMPTB public_4c0000000000c08a : nop
        je public_51d925
  JMPTB int 3
        public_51d83b : nop
        mov dword ptr ss : [esp+4], ecx
        jmp public_51d92a
        public_51d844 : nop
        call public_576240
        mov dl, byte ptr ds : [eax+0x18]
        xor ecx, ecx
        test dl, dl
        setne cl
        mov dword ptr ss : [esp+0x30], ecx
        fild dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [public_675278]
        jmp public_51d92a
        public_51d866 : nop
        call public_576240
        mov dl, byte ptr ds : [eax+0x18]
        neg dl
        sbb edx, edx
        mov dword ptr ss : [esp+0x30], edx
        fild dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [public_67526c]
        jmp public_51d92a
        public_51d885 : nop
        call public_576240
        mov dl, byte ptr ds : [eax+0x18]
        xor ecx, ecx
        test dl, dl
        setne cl
        mov dword ptr ss : [esp+0x30], ecx
        fild dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [public_67527c]
        jmp public_51d92a
        public_51d8a7 : nop
        call public_576240
        mov dl, byte ptr ds : [eax+0x18]
        neg dl
        sbb edx, edx
        mov dword ptr ss : [esp+0x30], edx
        fild dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [public_675270]
        jmp public_51d92a
        public_51d8c3 : nop
        call public_576240
        mov dl, byte ptr ds : [eax+0x18]
        xor ecx, ecx
        test dl, dl
        setne cl
        mov dword ptr ss : [esp+0x30], ecx
        fild dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [public_675280]
        jmp public_51d92a
        public_51d8e2 : nop
        call public_576240
        mov dl, byte ptr ds : [eax+0x18]
        neg dl
        sbb edx, edx
        mov dword ptr ss : [esp+0x30], edx
        fild dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [public_675274]
        jmp public_51d92a
        public_51d8fe : nop
        call public_41ddb0
        test al, al
        jne public_51d92a
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        setne al
        mov byte ptr ds : [public_67529c], al
        mov dword ptr ds : [public_6752a0], 1
        jmp public_51d92a
        public_51d925 : nop
        call public_4c7c40
        public_51d92a : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_51d960
        mov eax, dword ptr ds : [esi-0x38]
        test eax, eax
        je public_51d946
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51d946
        cmp dword ptr ds : [eax+0x1C], 1
        je public_51d948
        public_51d946 : nop
        xor eax, eax
        public_51d948 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x1CC]
        mov al, 1
        pop esi
        add esp, 0x28
        ret 4
        public_51d960 : nop
        xor al, al
        pop esi
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x51d7f0)
        ASM_EXPORT_ENTRY_SINGLE(0x51d960, public_51d960)
    }
}

#undef public_51d83b
#undef public_51d844
#undef public_51d866
#undef public_51d885
#undef public_51d8a7
#undef public_51d8c3
#undef public_51d8e2
#undef public_51d8fe
#undef public_51d925
#undef public_51d92a
#undef public_51d946
#undef public_51d948
#undef public_51d960

#pragma init_seg(compiler)
extern "C" void const* const public_51d960 = __AsmFindLabelExport(&internal_51d7f0, 0x51d960);
