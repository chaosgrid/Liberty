#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d1355a _public_6d1355a
#define public_6d13575 _public_6d13575
#define public_6d1357b _public_6d1357b
#define public_6d13595 _public_6d13595
#define public_6d1359c _public_6d1359c
#define public_6d135cd _public_6d135cd
#define public_6d135e4 _public_6d135e4
#define public_6d13652 _public_6d13652
#define public_6d13670 _public_6d13670
#define public_6d136d7 _public_6d136d7
#define public_6d136f1 _public_6d136f1
#define public_6d136fa _public_6d136fa
#define public_6d1378b _public_6d1378b
#define public_6d1378e _public_6d1378e

PROC_DECLARE(0x6d134ec, internal_6d134ec, public_6d134ec);
extern "C" NAKED register_t __cdecl internal_6d134ec()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2030
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x124], 0
        jne public_6d1355a
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x10]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x10]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
/*FIXUP push offset public_6d69b28 @0x6d13530*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69b28
        push 0x1143
/*FIXUP push offset public_6d69b58 @0x6d1353a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69b58
/*FIXUP push offset public_6d69ba4 @0x6d1353f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69ba4
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d1378e
        public_6d1355a : nop
        mov dword ptr ss : [ebp-8], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d13575
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x140
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d1357b
        public_6d13575 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], edx
        public_6d1357b : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1378b
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d13595
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d1359c
        public_6d13595 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d1359c : nop
        mov edx, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [edx+0x11C]
        shr al, 1
        and al, 1
        mov byte ptr ss : [ebp-0x2029], al
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x2028], ecx
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d135cd
        mov dword ptr ss : [ebp-8], 0x80004005
        jmp public_6d136fa
        public_6d135cd : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp ecx, dword ptr ds : [eax+0x18]
        jbe public_6d135e4
        mov dword ptr ss : [ebp-8], 0x80004005
        jmp public_6d136fa
        public_6d135e4 : nop
        movzx edx, byte ptr ss : [ebp-0x2029]
        neg edx
        sbb edx, edx
        and edx, 0xFFFFF800
        add edx, 0x800
        mov dword ptr ss : [ebp-0x2018], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        and ecx, 0x200
        neg ecx
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d13670
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x14]
        add ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ds : [edx+0x18]
        jbe public_6d13652
        mov eax, dword ptr ss : [ebp-0x2018]
        or eax, 0x2000
        mov dword ptr ss : [ebp-0x2018], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x14], 0
        mov dword ptr ss : [ebp-0x2028], 0
        jmp public_6d13670
        public_6d13652 : nop
        mov edx, dword ptr ss : [ebp-0x2018]
        or edx, 0x1000
        mov dword ptr ss : [ebp-0x2018], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x2028], ecx
        public_6d13670 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        shl edx, 1
        mov dword ptr ss : [ebp-0x201C], edx
        mov eax, dword ptr ss : [ebp-0x2028]
        shl eax, 1
        mov dword ptr ss : [ebp-0x2024], eax
        mov ecx, dword ptr ss : [ebp-0x2018]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 8
        push edx
        mov eax, dword ptr ss : [ebp-0x201C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2024]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [ebp-0x2020], eax
        cmp dword ptr ss : [ebp-0x2020], 0
        jl public_6d136f1
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d136d7
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-0x2028]
        mov dword ptr ds : [ecx], edx
        public_6d136d7 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-0x2028]
        add eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x14], eax
        public_6d136f1 : nop
        mov edx, dword ptr ss : [ebp-0x2020]
        mov dword ptr ss : [ebp-8], edx
        public_6d136fa : nop
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d1378b
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d69bc0 @0x6d13711*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69bc0
        lea ecx, ss:[ebp-0x2010]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2030], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x2014]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x2014], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x2014]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x2014], edx
        mov eax, dword ptr ss : [ebp-0x2030]
        push eax
        push 0x115A
/*FIXUP push offset public_6d69bd0 @0x6d1376f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69bd0
/*FIXUP push offset public_6d69c1c @0x6d13774*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69c1c
        mov ecx, dword ptr ss : [ebp-0x2014]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d1378b : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d1378e : nop
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d134ec)
    }
}

#undef public_6d1355a
#undef public_6d13575
#undef public_6d1357b
#undef public_6d13595
#undef public_6d1359c
#undef public_6d135cd
#undef public_6d135e4
#undef public_6d13652
#undef public_6d13670
#undef public_6d136d7
#undef public_6d136f1
#undef public_6d136fa
#undef public_6d1378b
#undef public_6d1378e
