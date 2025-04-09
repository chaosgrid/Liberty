#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4061a0);
CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_4d7270);
CLANG_FORWARD_PROC_SYMBOL(public_507e70);
CLANG_FORWARD_PROC_SYMBOL(public_5513b0);
CLANG_FORWARD_PROC_SYMBOL(public_551500);
CLANG_FORWARD_PROC_SYMBOL(public_552420);
CLANG_FORWARD_PROC_SYMBOL(public_552440);
CLANG_FORWARD_PROC_SYMBOL(public_552480);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1381);

#define public_551541 _public_551541
#define public_5515a7 _public_5515a7
#define public_55179d _public_55179d
#define public_5517c0 _public_5517c0
#define public_5518f0 _public_5518f0
#define public_551909 _public_551909
#define public_551960 _public_551960
#define public_551998 _public_551998
#define public_551a06 _public_551a06
#define public_551b64 _public_551b64
#define public_551bab _public_551bab
#define public_551cc1 _public_551cc1
#define public_551d6b _public_551d6b
#define public_551dee _public_551dee
#define public_551e07 _public_551e07
#define public_551e20 _public_551e20
#define public_551e9a _public_551e9a
#define public_551ef4 _public_551ef4
#define public_551f4f _public_551f4f
#define public_551f97 _public_551f97
#define public_551fd8 _public_551fd8
#define public_552014 _public_552014
#define public_5522d4 _public_5522d4
#define public_5522d8 _public_5522d8
#define public_55233d _public_55233d
#define public_5523b5 _public_5523b5
#define public_5523f7 _public_5523f7
#define public_552410 _public_552410

PROC_DECLARE(0x551500, internal_551500, public_551500);
extern "C" NAKED register_t __cdecl internal_551500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1381 @0x551502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1381
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1D0
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1E8]
        mov al, byte ptr ds : [esi+0xBC]
        test al, al
        mov ebx, ecx
        mov dword ptr ss : [esp+0x3C], ebx
        je public_551541
        mov eax, dword ptr ss : [esp+0x1EC]
        push eax
        call public_5513b0
        public_551541 : nop
        mov al, byte ptr ds : [ebx+0xEC]
        test al, al
        je public_5523f7
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        je public_5523f7
        mov eax, dword ptr ds : [ebx+0x28]
        test eax, eax
        je public_5523f7
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_679860]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x1AC]
        rep movsd
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0x3F800000
        jne public_5515a7
        call public_5b73e0
        mov dword ptr ds : [public_679860], eax
        public_5515a7 : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x1B4]
        push ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [ebx+0x6C]
        lea ebp, ds:[ebx+0x6C]
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        fmul dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0xBC]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [ebp+8]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [ebp]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [ebp+4]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [ebp+8]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0xC0]
        lea ecx, ss:[esp+0x6C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0xBC]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0xC4]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0xC4]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0xC0]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, ebp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp+4]
        push ecx
        fld dword ptr ss : [ebp]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_507e70
        fld st(0)
        add esp, 4
        fmul dword ptr ss : [ebp]
        fstp dword ptr ss : [ebp]
        fld st(0)
        xor esi, esi
        fmul dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], 0xC
        fstp dword ptr ss : [ebp+4]
        fmul dword ptr ss : [ebp+8]
        fstp dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ebx+0x100]
        fld dword ptr ds : [ebx+0xB8]
        mov eax, dword ptr ds : [ebx+0xC]
        fmul dword ptr ds : [public_5d8d40]
        lea eax, ds:[eax+eax*2]
        mov dword ptr ss : [esp+0x1C], ecx
        shl eax, 1
        fstp dword ptr ss : [esp+0xF0]
        xor ecx, ecx
        fld dword ptr ds : [ebx+0x100]
        mov dword ptr ss : [esp+0xF4], eax
        fmul dword ptr ds : [public_5d8e80]
        mov dword ptr ss : [esp+0x78], ecx
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x1E8], ecx
        mov dword ptr ss : [esp+0x80], ecx
        mov dword ptr ss : [esp+0x84], 4
        xor edi, edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], 8
        mov eax, dword ptr ds : [ebx+0x28]
        cmp dword ptr ds : [eax+4], ecx
        mov byte ptr ss : [esp+0x1E8], 2
        mov byte ptr ss : [esp+0x17], 0
        mov dword ptr ss : [esp+0x20], eax
        jge public_55179d
        push ecx
        call public_5b7010
        mov edx, dword ptr ds : [public_5c6d4c]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [edx]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        lea ecx, ss:[esp+0x18]
        call public_552420
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x44]
        movzx eax, al
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax+4]
        xor ecx, ecx
        cmp edx, ecx
        public_55179d : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], eax
        setne byte ptr ss : [esp+0x27]
        mov dword ptr ss : [esp+0x20], offset public_5e09c8
        mov eax, 0x8D
        nop 
        lea esp, ss:[esp]
        public_5517c0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ss : [esp+0x20]
        add eax, 8
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_5517c0
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xE4]
        push ecx
        push 0x89
        push eax
        call dword ptr ds : [edx+0xF4]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xE0]
        push edx
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        lea ecx, ss:[esp+0x180]
        call public_4215b0
        lea edx, ss:[esp+0x180]
        push edx
        push 0
        mov dword ptr ss : [esp+0x1B4], 0
        mov dword ptr ss : [esp+0x1B0], 0
        mov dword ptr ss : [esp+0x1AC], 0
        call public_422690
        mov al, byte ptr ss : [esp+0x2F]
        add esp, 8
        test al, al
        je public_5518f0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 6
        push 0x14
        jmp public_551909
        public_5518f0 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 4
        push 0x13
        public_551909 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x28]
        push 0
        mov dword ptr ss : [esp+0x54], eax
        call public_425640
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x54]
        push 0
        push edx
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov ebx, offset public_5e09f0
        mov eax, 1
        lea ecx, ds:[ecx]
        public_551960 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ebx+8]
        add ebx, 8
        test eax, eax
        jne public_551960
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        mov ebx, offset public_5e0a28
        mov eax, 1
        public_551998 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [ebx+8]
        add ebx, 8
        test eax, eax
        jne public_551998
        mov ecx, dword ptr ds : [public_5c6de0]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x90], ebx
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x90]
        push ecx
        push 0x18
        push eax
        call dword ptr ds : [edx+0xF4]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_679860]
        cmp eax, ebx
        jne public_551a06
        call public_5b73e0
        mov dword ptr ds : [public_679860], eax
        public_551a06 : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        lea ecx, ss:[esp+0x1B4]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        push ecx
        mov dword ptr ss : [esp+0x70], edx
        faddp 
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], ecx
        fstp dword ptr ss : [esp]
        call public_507e70
        fld dword ptr ss : [esp+0x30]
        sub esp, 8
        fmul st, st(1)
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x7C]
        fmul dword ptr ds : [public_5c7474]
        fst dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ds : [public_5c7474]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x78]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_422b80
        fld dword ptr ss : [esp+0x58]
        push ecx
        fmul dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        faddp 
        fstp dword ptr ss : [esp]
        call public_507e70
        fld dword ptr ss : [esp+0x58]
        mov ebp, dword ptr ss : [esp+0x48]
        fmul st, st(1)
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x5C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x7C]
        fsub dword ptr ss : [esp+0x88]
        fdivr dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x50], ebx
        fstp dword ptr ss : [esp+0xF8]
        fld dword ptr ss : [ebp+0xE8]
        fsub dword ptr ss : [ebp+0xE4]
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0xE8]
        jle public_55233d
        mov ebx, dword ptr ss : [esp+0x80]
        public_551b64 : nop
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [ebp+0xB4]
        mov ecx, dword ptr ds : [eax]
        fmul dword ptr ss : [ebp+0xE0]
        mov al, byte ptr ds : [ecx+0x50]
        test al, al
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        je public_5522d8
        mov al, byte ptr ds : [ecx+0x51]
        test al, al
        jne public_5522d8
        mov eax, dword ptr ds : [public_679860]
        test eax, eax
        jne public_551bab
        call public_5b73e0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [public_679860], eax
        public_551bab : nop
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x1B4]
        push ecx
        lea ecx, ss:[esp+0x68]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        fld dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x60]
        fchs 
        mov eax, dword ptr ss : [esp+0x64]
        fld st(0)
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x94], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x98], eax
        mov dword ptr ss : [esp+0x9C], ecx
        fstp dword ptr ds : [edx+0x54]
        fcom dword ptr ss : [ebp+0xE4]
        fnstsw ax
        test ah, 5
        jnp public_552410
        fcomp dword ptr ss : [esp+0xF0]
        fnstsw ax
        test ah, 0x41
        jne public_551cc1
        fld dword ptr ss : [ebp+0xB8]
        lea eax, ss:[esp+0x94]
        push eax
        fchs 
        lea ecx, ss:[esp+0x130]
        push ecx
        lea edx, ss:[esp+0xC4]
        fstp dword ptr ss : [esp+0x13C]
        push edx
        mov dword ptr ss : [esp+0x138], 0
        mov dword ptr ss : [esp+0x13C], 0
        call public_423b60
        fld dword ptr ss : [esp+0xD0]
        fmul dword ptr ss : [esp+0xD0]
        add esp, 0xC
        fld dword ptr ss : [esp+0xC0]
        fmul dword ptr ss : [esp+0xC0]
        faddp 
        fld dword ptr ss : [esp+0xBC]
        fmul dword ptr ss : [esp+0xBC]
        faddp 
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x7C]
        fnstsw ax
        test ah, 0x41
        je public_5522d8
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x88]
        fnstsw ax
        test ah, 0x41
        jne public_551cc1
        fld dword ptr ss : [esp+0x7C]
        fsub dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0xF8]
        fstp dword ptr ss : [esp+0x10]
        public_551cc1 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5e0e08]
        fnstsw ax
        test ah, 5
        jnp public_5522d8
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x3C]
        push ecx
        lea ecx, ss:[ebp+0x90]
        fstp dword ptr ss : [esp]
        push ecx
        lea edx, ss:[esp+0x158]
        push edx
        call public_411d60
        fld dword ptr ss : [ebp+0xDC]
        add esp, 8
        lea eax, ss:[esp+0x154]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x164]
        push ecx
        call public_411d60
        mov ecx, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [ecx+0x18]
        fcomp dword ptr ss : [ebp+0xE4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x98], eax
        add esp, 0xC
        mov dword ptr ss : [esp+0x28], edx
        fnstsw ax
        test ah, 0x41
        jnp public_5522d8
        fld dword ptr ds : [ecx+0x54]
        fcomp dword ptr ss : [ebp+0xE8]
        fnstsw ax
        test ah, 5
        jp public_551d6b
        fld dword ptr ds : [ecx+0x54]
        fsub dword ptr ss : [ebp+0xE4]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0xE8]
        fstp dword ptr ss : [esp+0x28]
        public_551d6b : nop
        fld dword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_5e0e08]
        fnstsw ax
        test ah, 5
        jnp public_5522d8
        lea edx, ds:[ecx+0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [ebp+0x124]
        test eax, eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x34], edx
        jne public_551e20
        fld dword ptr ss : [ebp+0xDC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_551e20
        fld dword ptr ds : [ecx+0x38]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_551e20
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_4d7270
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_551dee
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        public_551dee : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_551e07
        mov dword ptr ss : [esp+0x30], 0x3F800000
        public_551e07 : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_551e20
        mov dword ptr ss : [esp+0x34], 0x3F800000
        public_551e20 : nop
        mov al, byte ptr ss : [esp+0x27]
        fld dword ptr ss : [esp+0x2C]
        test al, al
        je public_551e9a
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c75d8]
        and eax, 0xFF
        mov dword ptr ss : [esp+0x10], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c75d8]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        shl ecx, 8
        or eax, ecx
        shl eax, 8
        mov dword ptr ss : [esp+0x10], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_5c75d8]
        mov edx, eax
        mov eax, dword ptr ss : [esp+0x10]
        and edx, 0xFF
        or eax, edx
        shl eax, 8
        mov dword ptr ss : [esp+0x10], eax
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_551ef4
        public_551e9a : nop
        fmul dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x28]
        or eax, 0xFFFFFF00
        shl eax, 8
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x28]
        mov edx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        and edx, 0xFF
        or eax, edx
        fmul dword ptr ds : [public_5c75d8]
        shl eax, 8
        mov dword ptr ss : [esp+0x1C], eax
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_551ef4 : nop
        and eax, 0xFF
        or ecx, eax
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        mov dword ptr ss : [esp+0x10], ecx
        jne public_552014
        mov edx, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA0]
        push edx
        mov edx, dword ptr ss : [esp+0xF8]
        push edx
        push 0x142
        push eax
        mov byte ptr ss : [esp+0x27], 1
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_552014
        mov eax, dword ptr ss : [esp+0xA4]
        xor edi, edi
        test al, 0x10
        mov esi, eax
        je public_551f4f
        mov edi, 0xC
        public_551f4f : nop
        push eax
        call public_552480
        push esi
        mov ebx, eax
        call public_552440
        add eax, edi
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call public_4061a0
        mov esi, dword ptr ss : [esp+0xB8]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x28]
        add eax, ebx
        add ebp, eax
        mov eax, dword ptr ss : [esp+0xB0]
        add esp, 0xC
        xor edi, edi
        test al, 0x10
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], ebp
        je public_551f97
        mov edi, 0xC
        public_551f97 : nop
        push eax
        call public_552440
        mov edx, dword ptr ss : [esp+0xB0]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0xA8]
        add ebx, edi
        add ebx, edx
        add esp, 4
        test al, 0x10
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebp
        mov edi, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_551fd8
        mov dword ptr ss : [esp+0x1C], 0xC
        public_551fd8 : nop
        push eax
        call public_552480
        push edi
        mov dword ptr ss : [esp+0xF4], eax
        call public_552440
        mov ecx, dword ptr ss : [esp+0xF4]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add eax, ecx
        add edi, eax
        mov eax, dword ptr ss : [esp+0xB4]
        add esp, 8
        add edi, eax
        mov dword ptr ss : [esp+0x3C], ebp
        mov ebp, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], edi
        public_552014 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov ebp, dword ptr ss : [ebp+ecx*4+0x28]
        test ebp, ebp
        je public_5522d4
        mov edx, dword ptr ss : [esp+0x8C]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x104]
        push ecx
        call public_411d60
        mov edx, dword ptr ss : [esp+0x98]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x11C]
        push ecx
        call public_411d60
        lea edx, ss:[esp+0x120]
        push edx
        lea eax, ss:[esp+0xB0]
        push eax
        lea ecx, ss:[esp+0x158]
        push ecx
        call public_423b60
        lea edx, ss:[esp+0x120]
        push edx
        lea eax, ss:[esp+0x160]
        push eax
        lea ecx, ss:[esp+0xF4]
        push ecx
        call public_423b60
        lea edx, ss:[esp+0x138]
        push edx
        lea eax, ss:[esp+0xC8]
        push eax
        lea ecx, ss:[esp+0x1AC]
        push ecx
        call public_423b30
        lea edx, ss:[esp+0x138]
        push edx
        lea eax, ss:[esp+0x1B4]
        push eax
        lea ecx, ss:[esp+0x158]
        push ecx
        call public_423b60
        add esp, 0x48
        lea edx, ss:[esp+0x108]
        push edx
        lea eax, ss:[esp+0x98]
        push eax
        lea ecx, ss:[esp+0x170]
        push ecx
        call public_423b30
        lea edx, ss:[esp+0x108]
        push edx
        lea eax, ss:[esp+0x178]
        push eax
        lea ecx, ss:[esp+0xE8]
        push ecx
        call public_423b30
        lea edx, ss:[esp+0x120]
        push edx
        lea eax, ss:[esp+0xB0]
        push eax
        lea ecx, ss:[esp+0x164]
        push ecx
        call public_423b60
        lea edx, ss:[esp+0x120]
        push edx
        lea eax, ss:[esp+0x16C]
        push eax
        lea ecx, ss:[esp+0x14C]
        push ecx
        call public_423b30
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ss : [esp+0xF8]
        mov eax, dword ptr ss : [esp+0x6C]
        add esp, 0x30
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ss : [esp+0xCC]
        add edi, eax
        mov dword ptr ds : [esi+4], edx
        mov ecx, dword ptr ss : [esp+0xD0]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], edx
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+4], edx
        mov edx, dword ptr ss : [esp+0x114]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [esi+ecx], edx
        mov edx, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [esi+ecx+4], edx
        mov edx, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [esi+ecx+8], edx
        mov edx, dword ptr ss : [esp+0x4C]
        add esi, ecx
        mov ecx, dword ptr ss : [esp+0x84]
        add esi, edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+ecx], edx
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi+eax], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edi+eax+4], edx
        mov edx, dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ss : [esp+0xD8]
        mov dword ptr ds : [esi+4], edx
        mov edx, dword ptr ss : [esp+0xDC]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x4C]
        add ebx, ecx
        add edi, eax
        add esi, edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+ecx], edx
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi+eax], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edi+eax+4], edx
        mov edx, dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ss : [esp+0xD8]
        mov dword ptr ds : [esi+4], edx
        mov edx, dword ptr ss : [esp+0xDC]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x4C]
        add ebx, ecx
        add edi, eax
        add esi, edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+ecx], edx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+eax], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edi+eax+4], edx
        mov edx, dword ptr ss : [esp+0x120]
        add ebx, ecx
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ss : [esp+0x124]
        add edi, eax
        mov dword ptr ds : [esi+4], edx
        mov edx, dword ptr ss : [esp+0x128]
        mov dword ptr ds : [esi+8], edx
        add esi, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+ecx], edx
        mov edx, dword ptr ss : [ebp+8]
        add ebx, ecx
        add edi, eax
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+4], edx
        add ebx, ecx
        add edi, eax
        mov eax, dword ptr ss : [esp+0xC8]
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [esp+0xCC]
        mov ebp, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [public_679864]
        add ebx, ecx
        mov ecx, dword ptr ss : [esp+0x78]
        add esi, ebp
        add ecx, 6
        inc eax
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ds : [public_679864], eax
        public_5522d4 : nop
        mov ebp, dword ptr ss : [esp+0x44]
        public_5522d8 : nop
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        add edx, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x18], edx
        jl public_551b64
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        je public_55233d
        mov eax, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0xB0]
        push edx
        mov edx, dword ptr ss : [esp+0xAC]
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0x11C]
        public_55233d : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x19
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0xE4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0xE0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5e09e0
        mov eax, 0x8D
        pop ebp
        public_5523b5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_5523b5
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        pop edi
        public_5523f7 : nop
        mov ecx, dword ptr ss : [esp+0x1D8]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1DC
        ret 8
        public_552410 : nop
        fstp st(0)
        jmp public_5522d8
        UNREACHABLE_TRAP(0x551500)
    }
}

#undef public_551541
#undef public_5515a7
#undef public_55179d
#undef public_5517c0
#undef public_5518f0
#undef public_551909
#undef public_551960
#undef public_551998
#undef public_551a06
#undef public_551b64
#undef public_551bab
#undef public_551cc1
#undef public_551d6b
#undef public_551dee
#undef public_551e07
#undef public_551e20
#undef public_551e9a
#undef public_551ef4
#undef public_551f4f
#undef public_551f97
#undef public_551fd8
#undef public_552014
#undef public_5522d4
#undef public_5522d8
#undef public_55233d
#undef public_5523b5
#undef public_5523f7
#undef public_552410
