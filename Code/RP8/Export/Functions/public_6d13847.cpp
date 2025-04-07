#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d138b7 _public_6d138b7
#define public_6d138d2 _public_6d138d2
#define public_6d138d8 _public_6d138d8
#define public_6d1392c _public_6d1392c
#define public_6d13946 _public_6d13946
#define public_6d139b4 _public_6d139b4
#define public_6d139d2 _public_6d139d2
#define public_6d13a3e _public_6d13a3e
#define public_6d13a59 _public_6d13a59
#define public_6d13a65 _public_6d13a65
#define public_6d13ab6 _public_6d13ab6
#define public_6d13b50 _public_6d13b50
#define public_6d13b5e _public_6d13b5e
#define public_6d13b61 _public_6d13b61

PROC_DECLARE(0x6d13847, internal_6d13847, public_6d13847);
extern "C" NAKED register_t __cdecl internal_6d13847()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2040
        call public_6d2f270
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x124], 0
        jne public_6d138b7
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
/*FIXUP push offset public_6d69cd0 @0x6d1388d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69cd0
        push 0x1178
/*FIXUP push offset public_6d69d08 @0x6d13897*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69d08
/*FIXUP push offset public_6d69d54 @0x6d1389c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69d54
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d13b61
        public_6d138b7 : nop
        mov dword ptr ss : [ebp-8], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d138d2
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x140
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d138d8
        public_6d138d2 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], edx
        public_6d138d8 : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6d13b5e
        mov dword ptr ss : [ebp-0xC], 0
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x11C]
        shr cl, 1
        and cl, 1
        mov byte ptr ss : [ebp-0x2039], cl
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x2038], eax
        mov ecx, dword ptr ss : [ebp-0x2038]
        mov dword ptr ss : [ebp-0x2034], ecx
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d1392c
        mov dword ptr ss : [ebp-0x201C], 0x80004005
        jmp public_6d13a65
        public_6d1392c : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp ecx, dword ptr ds : [eax+0x18]
        jbe public_6d13946
        mov dword ptr ss : [ebp-0x201C], 0x80004005
        jmp public_6d13a65
        public_6d13946 : nop
        movzx edx, byte ptr ss : [ebp-0x2039]
        neg edx
        sbb edx, edx
        and edx, 0xFFFFF800
        add edx, 0x800
        mov dword ptr ss : [ebp-0x2024], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        and ecx, 0x200
        neg ecx
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d139d2
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x14]
        add ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ds : [edx+0x18]
        jbe public_6d139b4
        mov eax, dword ptr ss : [ebp-0x2024]
        or eax, 0x2000
        mov dword ptr ss : [ebp-0x2024], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x14], 0
        mov dword ptr ss : [ebp-0x2034], 0
        jmp public_6d139d2
        public_6d139b4 : nop
        mov edx, dword ptr ss : [ebp-0x2024]
        or edx, 0x1000
        mov dword ptr ss : [ebp-0x2024], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x2034], ecx
        public_6d139d2 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        shl edx, 1
        mov dword ptr ss : [ebp-0x2028], edx
        mov eax, dword ptr ss : [ebp-0x2034]
        shl eax, 1
        mov dword ptr ss : [ebp-0x2030], eax
        mov ecx, dword ptr ss : [ebp-0x2024]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 8
        push edx
        mov eax, dword ptr ss : [ebp-0x2028]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2030]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [ebp-0x202C], eax
        cmp dword ptr ss : [ebp-0x202C], 0
        jl public_6d13a59
        lea ecx, ss:[ebp-0x2020]
        test ecx, ecx
        je public_6d13a3e
        mov edx, dword ptr ss : [ebp-0x2034]
        mov dword ptr ss : [ebp-0x2020], edx
        public_6d13a3e : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x2018], ecx
        mov edx, dword ptr ss : [ebp-0x2034]
        add edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x14], edx
        public_6d13a59 : nop
        mov ecx, dword ptr ss : [ebp-0x202C]
        mov dword ptr ss : [ebp-0x201C], ecx
        public_6d13a65 : nop
        cmp dword ptr ss : [ebp-0x201C], 0
        jl public_6d13ab6
        mov ecx, dword ptr ss : [ebp+0x18]
        shl ecx, 1
        mov esi, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ss : [ebp-0x2018]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x30]
        lea eax, ss:[ebp-0xC]
        test eax, eax
        je public_6d13ab6
        mov ecx, dword ptr ss : [ebp-0x2020]
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d13ab6 : nop
        mov edx, dword ptr ss : [ebp-0x201C]
        mov dword ptr ss : [ebp-8], edx
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d13b50
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d69d70 @0x6d13ad6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69d70
        lea ecx, ss:[ebp-0x2010]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2040], eax
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
        mov eax, dword ptr ss : [ebp-0x2040]
        push eax
        push 0x1188
/*FIXUP push offset public_6d69d88 @0x6d13b34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69d88
/*FIXUP push offset public_6d69dd4 @0x6d13b39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69dd4
        mov ecx, dword ptr ss : [ebp-0x2014]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d13b50 : nop
        cmp dword ptr ss : [ebp-8], 0
        jl public_6d13b5e
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax], ecx
        public_6d13b5e : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d13b61 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d13847)
    }
}

#undef public_6d138b7
#undef public_6d138d2
#undef public_6d138d8
#undef public_6d1392c
#undef public_6d13946
#undef public_6d139b4
#undef public_6d139d2
#undef public_6d13a3e
#undef public_6d13a59
#undef public_6d13a65
#undef public_6d13ab6
#undef public_6d13b50
#undef public_6d13b5e
#undef public_6d13b61
