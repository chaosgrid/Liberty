#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d163f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a920);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b480);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bc60);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c770);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d1159e _public_6d1159e
#define public_6d11618 _public_6d11618
#define public_6d11632 _public_6d11632
#define public_6d11679 _public_6d11679
#define public_6d1176b _public_6d1176b
#define public_6d117de _public_6d117de
#define public_6d1186e _public_6d1186e

PROC_DECLARE(0x6d114ea, internal_6d114ea, public_6d114ea);
extern "C" NAKED register_t __cdecl internal_6d114ea()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x20A0
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x209C], eax
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, 4
        mov dword ptr ss : [ebp-0x2098], ecx
        push 0x200
        lea ecx, ss:[ebp-0x2074]
        call public_6d1b480
        push eax
        lea edx, ss:[ebp-0x209C]
        push edx
        lea ecx, ss:[ebp-0x2050]
        call public_6d1a920
        push eax
        lea eax, ss:[ebp-0x207C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2098]
        add ecx, 0x16C
        call public_6d19aa0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2028], ecx
        lea ecx, ss:[ebp-0x204C]
        call public_6d1bc60
        lea ecx, ss:[ebp-0x2074]
        call public_6d1bc60
        mov edx, dword ptr ss : [ebp-0x2028]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x2014], edx
        mov eax, dword ptr ss : [ebp-0x2014]
        xor ecx, ecx
        cmp dword ptr ds : [eax+0x20], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d1159e
        mov eax, dword ptr ss : [ebp-0x2014]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6d1176b
        public_6d1159e : nop
        mov edx, dword ptr ss : [ebp-0x2014]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6d163f0
        add esp, 4
        mov dword ptr ss : [ebp-0x2080], eax
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov edx, dword ptr ss : [ebp-0x2080]
        imul edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x2084], edx
        mov eax, dword ptr ss : [ebp-0x2084]
        mov dword ptr ss : [ebp-0x2020], eax
        mov ecx, dword ptr ss : [ebp-0x2098]
        mov edx, dword ptr ds : [ecx+0x180]
        sub edx, dword ptr ss : [ebp-0x2020]
        mov eax, dword ptr ss : [ebp-0x2098]
        mov dword ptr ds : [eax+0x180], edx
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x2024], edx
        cmp dword ptr ss : [ebp-0x2024], 0
        jne public_6d11618
        mov dword ptr ss : [ebp-0x2024], 0x400
        public_6d11618 : nop
        mov eax, dword ptr ss : [ebp-0x2024]
        cmp eax, dword ptr ss : [ebp+0x10]
        jae public_6d11632
        mov ecx, dword ptr ss : [ebp+0x10]
        add ecx, 0x3FF
        mov dword ptr ss : [ebp-0x2024], ecx
        public_6d11632 : nop
        mov edx, dword ptr ss : [ebp-0x2024]
        shr edx, 0xA
        shl edx, 0xA
        mov dword ptr ss : [ebp-0x201C], edx
        mov eax, dword ptr ss : [ebp-0x209C]
        mov dword ptr ss : [ebp-0x2094], eax
        mov ecx, dword ptr ss : [ebp-0x2098]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x2090], edx
        mov eax, dword ptr ss : [ebp-0x2014]
        cmp dword ptr ds : [eax+0x20], 0
        je public_6d11679
        mov ecx, dword ptr ss : [ebp-0x2014]
        call public_6d1bc60
        public_6d11679 : nop
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov edx, dword ptr ss : [ebp-0x2094]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0x2014]
        mov ecx, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x2014]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp-0x2014]
        mov dword ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        call public_6d163f0
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov edx, dword ptr ds : [ecx+8]
        imul edx, eax
        mov dword ptr ss : [ebp-0x2088], edx
        mov eax, dword ptr ss : [ebp-0x2014]
        add eax, 0x20
        push eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x2094]
        push ecx
        mov edx, dword ptr ss : [ebp-0x2014]
        mov eax, dword ptr ds : [edx]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2088]
        push ecx
        mov edx, dword ptr ss : [ebp-0x2090]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x2090]
        push ecx
        call dword ptr ds : [eax+0x5C]
        mov dword ptr ss : [ebp-0x208C], eax
        mov ecx, dword ptr ss : [ebp-0x2014]
        call public_6d1b4f0
        mov dword ptr ss : [ebp-0x2018], eax
        mov edx, dword ptr ss : [ebp-0x2098]
        mov eax, dword ptr ds : [edx+0x180]
        add eax, dword ptr ss : [ebp-0x2018]
        mov ecx, dword ptr ss : [ebp-0x2098]
        mov dword ptr ds : [ecx+0x180], eax
        mov edx, dword ptr ss : [ebp-0x2098]
        mov eax, dword ptr ss : [ebp-0x2014]
        cmp eax, dword ptr ds : [edx+0x13C]
        jne public_6d1176b
        push 0
        mov ecx, dword ptr ss : [ebp-0x2098]
        add ecx, 0x10
        mov edx, dword ptr ss : [ebp-0x2098]
        mov eax, dword ptr ds : [edx+0x10]
        push ecx
        call dword ptr ds : [eax+0x28]
        public_6d1176b : nop
        push 0
        mov ecx, dword ptr ss : [ebp-0x2014]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x2098]
        add ecx, 0x138
        call public_6d1c770
        mov edx, dword ptr ss : [ebp-0x2014]
        mov dword ptr ss : [ebp-8], edx
        mov dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0x14]
        add ecx, 0xC
        push ecx
        lea edx, ss:[ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0xC
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0xC]
        push ecx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        jl public_6d117de
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_6d117de : nop
        cmp dword ptr ss : [ebp-0xC], 0
        jge public_6d1186e
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d69320 @0x6d117f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69320
        lea eax, ss:[ebp-0x200C]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x20A0], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x2010]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x2010], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x2010]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x2010], ecx
        mov edx, dword ptr ss : [ebp-0x20A0]
        push edx
        push 0xFB2
/*FIXUP push offset public_6d69338 @0x6d11852*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69338
/*FIXUP push offset public_6d69384 @0x6d11857*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69384
        mov eax, dword ptr ss : [ebp-0x2010]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d1186e : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d114ea)
    }
}

#undef public_6d1159e
#undef public_6d11618
#undef public_6d11632
#undef public_6d11679
#undef public_6d1176b
#undef public_6d117de
#undef public_6d1186e
