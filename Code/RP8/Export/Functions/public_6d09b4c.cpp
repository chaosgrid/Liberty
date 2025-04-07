#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d09bc4 _public_6d09bc4
#define public_6d09be5 _public_6d09be5
#define public_6d09c1c _public_6d09c1c
#define public_6d09c2f _public_6d09c2f
#define public_6d09d1f _public_6d09d1f
#define public_6d09d22 _public_6d09d22

PROC_DECLARE(0x6d09b4c, internal_6d09b4c, public_6d09b4c);
extern "C" NAKED register_t __cdecl internal_6d09b4c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2028
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d09bc4
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
/*FIXUP push offset public_6d65850 @0x6d09b99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65850
        push 0x962
/*FIXUP push offset public_6d65898 @0x6d09ba3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65898
/*FIXUP push offset public_6d658e4 @0x6d09ba8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d658e4
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d09d22
        public_6d09bc4 : nop
        mov dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-8], 0x3F800000
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 1
        test eax, eax
        je public_6d09be5
        mov ecx, dword ptr ss : [ebp-4]
        or ecx, 1
        mov dword ptr ss : [ebp-4], ecx
        public_6d09be5 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 2
        test edx, edx
        je public_6d09c1c
        mov eax, dword ptr ss : [ebp-4]
        or eax, 2
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x3C0]
        mov dword ptr ss : [ebp-0x2018], edx
        mov eax, dword ptr ss : [ebp-0x2018]
        mov dword ptr ss : [ebp-0x201C], eax
        mov ecx, dword ptr ss : [ebp-0x201C]
        mov dword ptr ss : [ebp-8], ecx
        public_6d09c1c : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 4
        test edx, edx
        je public_6d09c2f
        mov eax, dword ptr ss : [ebp-4]
        or eax, 4
        mov dword ptr ss : [ebp-4], eax
        public_6d09c2f : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x3CC]
        mov dword ptr ss : [ebp-0x2020], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x3B4]
        mov dword ptr ss : [ebp-0x2024], ecx
        mov edx, dword ptr ss : [ebp-0x2020]
        push edx
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2024]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        xor ecx, ecx
        cmp dword ptr ss : [ebp+0x10], 0
        setne cl
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x90]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        jge public_6d09d1f
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65900 @0x6d09ca6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65900
        lea edx, ss:[ebp-0x2010]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2028], eax
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
        mov ecx, dword ptr ss : [ebp-0x2028]
        push ecx
        push 0x983
/*FIXUP push offset public_6d65910 @0x6d09d04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65910
/*FIXUP push offset public_6d6595c @0x6d09d09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6595c
        mov edx, dword ptr ss : [ebp-0x2014]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d09d1f : nop
        mov eax, dword ptr ss : [ebp-0xC]
        public_6d09d22 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d09b4c)
    }
}

#undef public_6d09bc4
#undef public_6d09be5
#undef public_6d09c1c
#undef public_6d09c2f
#undef public_6d09d1f
#undef public_6d09d22
