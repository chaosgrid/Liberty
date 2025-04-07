#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d010cf);
CLANG_FORWARD_PROC_SYMBOL(public_6d04138);
CLANG_FORWARD_PROC_SYMBOL(public_6d16310);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d109f5 _public_6d109f5
#define public_6d10a50 _public_6d10a50
#define public_6d10a7f _public_6d10a7f
#define public_6d10aad _public_6d10aad
#define public_6d10ac9 _public_6d10ac9
#define public_6d10ae3 _public_6d10ae3
#define public_6d10b06 _public_6d10b06
#define public_6d10b29 _public_6d10b29
#define public_6d10b44 _public_6d10b44
#define public_6d10c80 _public_6d10c80
#define public_6d10c83 _public_6d10c83

PROC_DECLARE(0x6d1097d, internal_6d1097d, public_6d1097d);
extern "C" NAKED register_t __cdecl internal_6d1097d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2030
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d109f5
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x10]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x10]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x10], eax
/*FIXUP push offset public_6d68db0 @0x6d109ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68db0
        push 0xEEB
/*FIXUP push offset public_6d68e00 @0x6d109d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68e00
/*FIXUP push offset public_6d68e4c @0x6d109d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68e4c
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d10c83
        public_6d109f5 : nop
        mov dword ptr ss : [ebp-8], 0x80004005
        mov eax, dword ptr ss : [ebp+0x20]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6d010cf
        add esp, 8
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jle public_6d10c80
        mov dword ptr ss : [ebp-0x201C], 0
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x138
        mov dword ptr ss : [ebp-0x2018], edx
        mov eax, dword ptr ss : [ebp-0x2018]
        mov ecx, dword ptr ss : [ebp-0x201C]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d10a50
        mov edx, dword ptr ss : [ebp-0x2018]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ds : [edx]
        je public_6d10a7f
        public_6d10a50 : nop
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov dl, byte ptr ds : [ecx+0x10]
        or dl, 1
        mov eax, dword ptr ss : [ebp-0x2018]
        mov byte ptr ds : [eax+0x10], dl
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov edx, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0x2018]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        public_6d10a7f : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d04138
        mov dword ptr ss : [ebp-0x2020], 0
        mov edx, dword ptr ss : [ebp+0x10]
        and edx, 0xC
        cmp edx, 0xC
        jne public_6d10aad
        mov eax, dword ptr ss : [ebp-0x2020]
        add eax, 0x1C
        mov dword ptr ss : [ebp-0x2020], eax
        jmp public_6d10ae3
        public_6d10aad : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        and ecx, 4
        cmp ecx, 4
        jne public_6d10ac9
        mov edx, dword ptr ss : [ebp-0x2020]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x2020], edx
        jmp public_6d10ae3
        public_6d10ac9 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        and eax, 2
        cmp eax, 2
        jne public_6d10ae3
        mov ecx, dword ptr ss : [ebp-0x2020]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x2020], ecx
        public_6d10ae3 : nop
        mov dword ptr ss : [ebp-0x2024], 0
        mov edx, dword ptr ss : [ebp+0x10]
        and edx, 0x10
        test edx, edx
        je public_6d10b06
        mov eax, dword ptr ss : [ebp-0x2024]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x2024], eax
        public_6d10b06 : nop
        mov dword ptr ss : [ebp-0x2028], 0
        mov ecx, dword ptr ss : [ebp+0x10]
        and ecx, 0x40
        test ecx, ecx
        je public_6d10b29
        mov edx, dword ptr ss : [ebp-0x2028]
        add edx, 4
        mov dword ptr ss : [ebp-0x2028], edx
        public_6d10b29 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        and eax, 0x80
        test eax, eax
        je public_6d10b44
        mov ecx, dword ptr ss : [ebp-0x2028]
        add ecx, 4
        mov dword ptr ss : [ebp-0x2028], ecx
        public_6d10b44 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        call public_6d16310
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2020]
        add ecx, dword ptr ss : [ebp-0x2024]
        add ecx, dword ptr ss : [ebp-0x2028]
        add ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        push 0x65
        mov ecx, dword ptr ss : [ebp+0x1C]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        push 0
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x124]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x138
        mov dword ptr ss : [ebp-0x202C], ecx
        mov edx, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [edx], 0
        mov eax, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [edx+0xC], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [eax+0x10], 0
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d10c80
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d68e68 @0x6d10c07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68e68
        lea edx, ss:[ebp-0x2010]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2030], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2014]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2014], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2014]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2014], eax
        mov ecx, dword ptr ss : [ebp-0x2030]
        push ecx
        push 0xF04
/*FIXUP push offset public_6d68e88 @0x6d10c65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68e88
/*FIXUP push offset public_6d68ed4 @0x6d10c6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68ed4
        mov edx, dword ptr ss : [ebp-0x2014]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d10c80 : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d10c83 : nop
        mov esp, ebp
        pop ebp
        ret 0x20
        UNREACHABLE_TRAP(0x6d1097d)
    }
}

#undef public_6d109f5
#undef public_6d10a50
#undef public_6d10a7f
#undef public_6d10aad
#undef public_6d10ac9
#undef public_6d10ae3
#undef public_6d10b06
#undef public_6d10b29
#undef public_6d10b44
#undef public_6d10c80
#undef public_6d10c83
