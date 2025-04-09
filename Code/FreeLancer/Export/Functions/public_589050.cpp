#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);

#define public_589076 _public_589076
#define public_58909b _public_58909b
#define public_5890e2 _public_5890e2
#define public_5890fc _public_5890fc
#define public_589237 _public_589237
#define public_589261 _public_589261
#define public_5892b0 _public_5892b0
#define public_5892f0 _public_5892f0
#define public_58934d _public_58934d
#define public_58936a _public_58936a
#define public_589379 _public_589379
#define public_5893c2 _public_5893c2
#define public_589402 _public_589402
#define public_58945f _public_58945f
#define public_58947c _public_58947c
#define public_58948b _public_58948b
#define public_5894d4 _public_5894d4
#define public_589514 _public_589514
#define public_589571 _public_589571
#define public_58958e _public_58958e
#define public_58959d _public_58959d
#define public_589603 _public_589603
#define public_58960e _public_58960e

PROC_DECLARE(0x589050, internal_589050, public_589050);
extern "C" NAKED register_t __cdecl internal_589050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x48
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x50]
        lea eax, ds:[ecx-0xC]
        cmp eax, 0x41
        push esi
        push edi
        ja public_58960e
/*FIXUP movzx eax, byte ptr ds : [eax+public_589660] @0x589068*/
/*FIXUP jmp dword ptr ds : [eax*4+public_58962c] @0x58906f*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000d23e
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d23e : nop
        je public_5890e2
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000d23a
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d23a : nop
        je public_589261
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000d236
  JMPTB mov eax, 2
  JMPTB public_4c0000000000d236 : nop
        je public_58936a
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000d232
  JMPTB mov eax, 3
  JMPTB public_4c0000000000d232 : nop
        je public_589379
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000d22e
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d22e : nop
        je public_58947c
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000d22a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d22a : nop
        je public_58948b
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000d226
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d226 : nop
        je public_58958e
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000d222
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d222 : nop
        je public_58960e
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000d21e
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d21e : nop
        je public_58960e
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000d21a
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d21a : nop
        je public_58960e
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000d216
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d216 : nop
        je public_58960e
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000d212
  JMPTB mov eax, 7
  JMPTB public_4c0000000000d212 : nop
        je public_5890fc
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000d20e
  JMPTB mov eax, 8
  JMPTB public_4c0000000000d20e : nop
        je public_589237
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000d20a
  JMPTB mov eax, 9
  JMPTB public_4c0000000000d20a : nop
        je public_58909b
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000d206
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d206 : nop
        je public_58960e
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000d202
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d202 : nop
        je public_58960e
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000d1fe
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000d1fe : nop
        je public_58959d
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000d1fa
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1fa : nop
        je public_58960e
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000d1f6
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1f6 : nop
        je public_58960e
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000d1f2
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1f2 : nop
        je public_58960e
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000d1ee
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1ee : nop
        je public_58960e
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000d1ea
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1ea : nop
        je public_58960e
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000d1e6
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1e6 : nop
        je public_58960e
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000d1e2
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1e2 : nop
        je public_58960e
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000d1de
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1de : nop
        je public_58960e
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000d1da
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1da : nop
        je public_58960e
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000d1d6
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1d6 : nop
        je public_58960e
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000d1d2
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1d2 : nop
        je public_58960e
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000d1ce
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1ce : nop
        je public_58960e
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000d1ca
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1ca : nop
        je public_58960e
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000d1c6
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1c6 : nop
        je public_58960e
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000d1c2
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1c2 : nop
        je public_58960e
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000d1be
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1be : nop
        je public_58960e
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000d1ba
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1ba : nop
        je public_58960e
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000d1b6
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1b6 : nop
        je public_58960e
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000d1b2
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1b2 : nop
        je public_58960e
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000d1ae
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1ae : nop
        je public_58960e
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000d1aa
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1aa : nop
        je public_58960e
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000d1a6
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1a6 : nop
        je public_58960e
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000d1a2
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d1a2 : nop
        je public_58960e
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000d19e
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d19e : nop
        je public_58960e
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000d19a
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d19a : nop
        je public_58960e
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000d196
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d196 : nop
        je public_58960e
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000d192
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d192 : nop
        je public_58960e
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000d18e
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d18e : nop
        je public_58960e
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000d18a
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d18a : nop
        je public_58960e
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000d186
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d186 : nop
        je public_58960e
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000d182
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d182 : nop
        je public_58960e
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000d17e
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d17e : nop
        je public_58960e
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000d17a
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d17a : nop
        je public_58960e
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000d176
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d176 : nop
        je public_58960e
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000d172
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d172 : nop
        je public_58960e
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000d16e
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d16e : nop
        je public_58960e
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000d16a
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d16a : nop
        je public_58960e
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000d166
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d166 : nop
        je public_58960e
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000d162
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d162 : nop
        je public_58960e
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000d15e
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d15e : nop
        je public_58960e
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000d15a
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d15a : nop
        je public_58960e
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c0000000000d156
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d156 : nop
        je public_58960e
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000d152
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d152 : nop
        je public_58960e
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000d14e
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d14e : nop
        je public_58960e
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c0000000000d14a
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d14a : nop
        je public_58960e
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c0000000000d146
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d146 : nop
        je public_58960e
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c0000000000d142
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d142 : nop
        je public_58960e
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c0000000000d13e
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d13e : nop
        je public_58960e
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c0000000000d13a
  JMPTB mov eax, 0xB
  JMPTB public_4c0000000000d13a : nop
        je public_589076
  JMPTB int 3
        public_589076 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        pop edi
        pop esi
        fstp dword ptr ds : [ebx+0x418]
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_58909b : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test ax, ax
        setne dl
        shr eax, 0x10
        test eax, eax
        setne al
        mov byte ptr ds : [ebx+0x345], al
        mov eax, dword ptr ss : [esp+0x60]
        test ax, ax
        setne cl
        shr eax, 0x10
        test eax, eax
        mov byte ptr ds : [ebx+0x344], dl
        pop edi
        setne dl
        pop esi
        mov byte ptr ds : [ebx+0x2D1], cl
        mov byte ptr ds : [ebx+0x346], dl
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5890e2 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        pop edi
        setne al
        mov byte ptr ds : [ebx+0x347], al
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5890fc : nop
        lea ecx, ds:[ebx+0x80]
        call public_59eee0
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [ebx+0x84], ecx
        lea ecx, ss:[esp+0x24]
        call public_4215b0
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_4215b0
        mov esi, dword ptr ds : [ebx+0x84]
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[ebx+0x338]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ds : [ebx+0x32C], 0
        mov dword ptr ds : [ebx+0x330], 0
        mov dword ptr ds : [ebx+0x334], 0
        mov dword ptr ds : [edx+8], eax
        je public_589603
        fld dword ptr ds : [ebx+0xB0]
        sub esp, 0xC
        fadd dword ptr ds : [ebx+0x68]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0xAC]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0xA8]
        fadd dword ptr ds : [ebx+0x60]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_589237 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x60]
        mov byte ptr ds : [ebx+0x348], 1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x410], ecx
        mov eax, dword ptr ds : [edx]
        pop edi
        mov dword ptr ds : [ebx+0x414], eax
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_589261 : nop
        mov ecx, dword ptr ds : [ebx+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_58934d
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        fld dword ptr ds : [ebx+0x32C]
        fchs 
        mov esi, eax
        fld st(0)
        mov ecx, 0xC
        fcos 
        lea edi, ss:[esp+0x24]
        rep movsd
        lea eax, ss:[esp+0x28]
        mov ecx, 3
        fstp dword ptr ss : [esp+0x60]
        fsin 
        lea ebx, ds:[ebx]
        public_5892b0 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_5892b0
        fstp st(0)
        lea eax, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x5C]
        mov ecx, 3
        fcos 
        fld dword ptr ss : [esp+0x5C]
        fsin 
        public_5892f0 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_5892f0
        mov eax, dword ptr ds : [public_5c6d90]
        fstp st(0)
        mov eax, dword ptr ds : [eax]
        fstp st(0)
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ds : [ebx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_58934d : nop
        mov eax, dword ptr ss : [esp+0x5C]
        pop edi
        mov ecx, eax
        mov dword ptr ds : [ebx+0x32C], eax
        pop esi
        mov dword ptr ds : [ebx+0x340], ecx
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_58936a : nop
        mov eax, dword ptr ds : [ebx+0x32C]
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 0xC
        public_589379 : nop
        mov ecx, dword ptr ds : [ebx+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_58945f
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        fld dword ptr ds : [ebx+0x330]
        fchs 
        mov esi, eax
        fld st(0)
        mov ecx, 0xC
        fcos 
        lea edi, ss:[esp+0x24]
        rep movsd
        lea eax, ss:[esp+0x2C]
        mov ecx, 3
        fstp dword ptr ss : [esp+0x60]
        fsin 
        public_5893c2 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_5893c2
        fstp st(0)
        lea eax, ss:[esp+0x2C]
        fld dword ptr ss : [esp+0x5C]
        mov ecx, 3
        fcos 
        fld dword ptr ss : [esp+0x5C]
        fsin 
        public_589402 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_589402
        mov eax, dword ptr ds : [public_5c6d90]
        fstp st(0)
        mov eax, dword ptr ds : [eax]
        fstp st(0)
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ds : [ebx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_58945f : nop
        mov eax, dword ptr ss : [esp+0x5C]
        pop edi
        mov ecx, eax
        mov dword ptr ds : [ebx+0x330], eax
        pop esi
        mov dword ptr ds : [ebx+0x33C], ecx
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_58947c : nop
        mov eax, dword ptr ds : [ebx+0x330]
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 0xC
        public_58948b : nop
        mov ecx, dword ptr ds : [ebx+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_589571
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        fld dword ptr ds : [ebx+0x334]
        fchs 
        mov esi, eax
        fld st(0)
        mov ecx, 0xC
        fcos 
        lea edi, ss:[esp+0x24]
        rep movsd
        lea eax, ss:[esp+0x2C]
        mov ecx, 3
        fstp dword ptr ss : [esp+0x60]
        fsin 
        public_5894d4 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0x60]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_5894d4
        fstp st(0)
        lea eax, ss:[esp+0x2C]
        fld dword ptr ss : [esp+0x5C]
        mov ecx, 3
        fcos 
        fld dword ptr ss : [esp+0x5C]
        fsin 
        public_589514 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_589514
        mov eax, dword ptr ds : [public_5c6d90]
        fstp st(0)
        mov eax, dword ptr ds : [eax]
        fstp st(0)
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ds : [ebx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_589571 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        pop edi
        mov ecx, eax
        mov dword ptr ds : [ebx+0x334], eax
        pop esi
        mov dword ptr ds : [ebx+0x338], ecx
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_58958e : nop
        mov eax, dword ptr ds : [ebx+0x334]
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 0xC
        public_58959d : nop
        cmp dword ptr ss : [esp+0x5C], 1
        sete al
        test al, al
        mov byte ptr ds : [ebx+0x349], al
        jne public_589603
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [edx+0x1C]
        public_589603 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_58960e : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        push edx
        push eax
        push ecx
        mov ecx, ebx
        call public_5a13c0
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x589050)
        ASM_EXPORT_ENTRY_SINGLE(0x58960e, public_58960e)
    }
}

#undef public_589076
#undef public_58909b
#undef public_5890e2
#undef public_5890fc
#undef public_589237
#undef public_589261
#undef public_5892b0
#undef public_5892f0
#undef public_58934d
#undef public_58936a
#undef public_589379
#undef public_5893c2
#undef public_589402
#undef public_58945f
#undef public_58947c
#undef public_58948b
#undef public_5894d4
#undef public_589514
#undef public_589571
#undef public_58958e
#undef public_58959d
#undef public_589603
#undef public_58960e

#pragma init_seg(compiler)
extern "C" void const* const public_58960e = __AsmFindLabelExport(&internal_589050, 0x58960e);
