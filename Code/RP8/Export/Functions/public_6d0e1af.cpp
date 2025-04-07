#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d0e21d _public_6d0e21d
#define public_6d0e233 _public_6d0e233
#define public_6d0e253 _public_6d0e253
#define public_6d0e26c _public_6d0e26c
#define public_6d0e274 _public_6d0e274
#define public_6d0e293 _public_6d0e293
#define public_6d0e2a5 _public_6d0e2a5
#define public_6d0e2ad _public_6d0e2ad
#define public_6d0e2cc _public_6d0e2cc
#define public_6d0e35d _public_6d0e35d
#define public_6d0e38e _public_6d0e38e
#define public_6d0e393 _public_6d0e393
#define public_6d0e3d0 _public_6d0e3d0
#define public_6d0e3d3 _public_6d0e3d3

PROC_DECLARE(0x6d0e1af, internal_6d0e1af, public_6d0e1af);
extern "C" NAKED register_t __cdecl internal_6d0e1af()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2030
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0e21d
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
/*FIXUP push offset public_6d67950 @0x6d0e1f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67950
        push 0xCD6
/*FIXUP push offset public_6d67988 @0x6d0e1fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67988
/*FIXUP push offset public_6d679d4 @0x6d0e202*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d679d4
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0e3d3
        public_6d0e21d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        cmp dword ptr ss : [ebp-8], 0
        jne public_6d0e233
        mov eax, 0xFFFFFFFE
        jmp public_6d0e3d3
        public_6d0e233 : nop
        mov dword ptr ss : [ebp-4], 0
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0e253
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d0e253 : nop
        mov dword ptr ss : [ebp-0x20], 0x80004005
        mov edx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [edx+4], 0
        je public_6d0e26c
        mov dword ptr ss : [ebp-0x1C], 0
        jmp public_6d0e274
        public_6d0e26c : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x1C], ecx
        public_6d0e274 : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        je public_6d0e293
        lea edx, ss:[ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp-0x20], eax
        jmp public_6d0e2cc
        public_6d0e293 : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+4], 1
        je public_6d0e2a5
        mov dword ptr ss : [ebp-0x24], 0
        jmp public_6d0e2ad
        public_6d0e2a5 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x24], eax
        public_6d0e2ad : nop
        cmp dword ptr ss : [ebp-0x24], 0
        je public_6d0e2cc
        lea ecx, ss:[ebp-4]
        push ecx
        push 0
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x24]
        push edx
        call dword ptr ds : [ecx+0x3C]
        mov dword ptr ss : [ebp-0x20], eax
        public_6d0e2cc : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jge public_6d0e35d
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6affc @0x6d0e2e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6affc
        lea ecx, ss:[ebp-0x2024]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x202C], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x2028]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x2028], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x2028]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x2028], edx
        mov eax, dword ptr ss : [ebp-0x202C]
        push eax
        push 0xAB
/*FIXUP push offset public_6d6ae00 @0x6d0e341*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0e346*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov ecx, dword ptr ss : [ebp-0x2028]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0e35d : nop
        xor eax, eax
        cmp dword ptr ss : [ebp-0x20], 0
        setge al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0e393
        mov dword ptr ss : [ebp-0x14], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0e38e
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d0e38e : nop
        mov eax, dword ptr ss : [ebp-0x14]
        jmp public_6d0e3d3
        public_6d0e393 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x2030], edx
        mov eax, dword ptr ss : [ebp-0x2030]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x2030]
        push edx
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0e3d0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d0e3d0 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        public_6d0e3d3 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0e1af)
    }
}

#undef public_6d0e21d
#undef public_6d0e233
#undef public_6d0e253
#undef public_6d0e26c
#undef public_6d0e274
#undef public_6d0e293
#undef public_6d0e2a5
#undef public_6d0e2ad
#undef public_6d0e2cc
#undef public_6d0e35d
#undef public_6d0e38e
#undef public_6d0e393
#undef public_6d0e3d0
#undef public_6d0e3d3
