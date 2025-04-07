#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd80);

#define public_6d2b70d _public_6d2b70d
#define public_6d2b748 _public_6d2b748
#define public_6d2b761 _public_6d2b761
#define public_6d2b769 _public_6d2b769
#define public_6d2b782 _public_6d2b782
#define public_6d2b7c5 _public_6d2b7c5
#define public_6d2b7de _public_6d2b7de
#define public_6d2b7e6 _public_6d2b7e6
#define public_6d2b812 _public_6d2b812
#define public_6d2b81b _public_6d2b81b
#define public_6d2b876 _public_6d2b876
#define public_6d2b87c _public_6d2b87c
#define public_6d2b87e _public_6d2b87e
#define public_6d2b8a5 _public_6d2b8a5
#define public_6d2b8c2 _public_6d2b8c2
#define public_6d2b8d4 _public_6d2b8d4
#define public_6d2b8f3 _public_6d2b8f3
#define public_6d2b90c _public_6d2b90c
#define public_6d2b90f _public_6d2b90f

PROC_DECLARE(0x6d2b6e0, internal_6d2b6e0, public_6d2b6e0);
extern "C" NAKED register_t __cdecl internal_6d2b6e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        mov dword ptr ss : [ebp-0x20], 0
        mov dword ptr ss : [ebp-0x14], 0
        cmp dword ptr ss : [ebp-0x20], 0
        je public_6d2b70d
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x20], 0
        public_6d2b70d : nop
        push 0
/*FIXUP push offset public_6d6278c @0x6d2b70f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6278c
        lea eax, ss:[ebp-0x20]
        push eax
        push 0
        call public_6d5cd80
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d2b769
        mov dword ptr ss : [ebp-0x48], 0
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d2b748
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x14], 0
        public_6d2b748 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        je public_6d2b761
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x20], 0
        public_6d2b761 : nop
        mov eax, dword ptr ss : [ebp-0x48]
        jmp public_6d2b90f
        public_6d2b769 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d2b782
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x14], 0
        public_6d2b782 : nop
        lea ecx, ss:[ebp-0x14]
        push ecx
/*FIXUP push offset public_6d6277c @0x6d2b786*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6277c
        mov edx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x54], edx
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x54]
        push edx
        call dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d2b7e6
        mov dword ptr ss : [ebp-0x4C], 0
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d2b7c5
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x14], 0
        public_6d2b7c5 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        je public_6d2b7de
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x20], 0
        public_6d2b7de : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        jmp public_6d2b90f
        public_6d2b7e6 : nop
        mov dword ptr ss : [ebp-0x24], 0
        mov dword ptr ss : [ebp-0x10], 0x10007000
        mov dword ptr ss : [ebp-0xC], 0x10005000
        mov dword ptr ss : [ebp-8], 0x10004040
        mov dword ptr ss : [ebp-4], 3
        mov dword ptr ss : [ebp-0x1C], 0
        jmp public_6d2b81b
        public_6d2b812 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 1
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d2b81b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        cmp ecx, dword ptr ss : [ebp-4]
        jge public_6d2b87e
        xor edx, edx
        mov dword ptr ss : [ebp-0x44], edx
        mov dword ptr ss : [ebp-0x40], edx
        mov dword ptr ss : [ebp-0x3C], edx
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp+eax*4-0x10]
        mov dword ptr ss : [ebp-0x44], ecx
        lea edx, ss:[ebp-0x2C]
        push edx
        lea eax, ss:[ebp-0x30]
        push eax
        lea ecx, ss:[ebp-0x44]
        push ecx
        mov edx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x58], edx
        mov eax, dword ptr ss : [ebp-0x58]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x58]
        push edx
        call dword ptr ds : [ecx+0x5C]
        mov dword ptr ss : [ebp-0x34], eax
        cmp dword ptr ss : [ebp-0x34], 0
        jl public_6d2b87c
        cmp dword ptr ss : [ebp-0x30], 0
        je public_6d2b87c
        cmp dword ptr ss : [ebp-0x24], 0
        je public_6d2b876
        mov eax, dword ptr ss : [ebp-0x30]
        cmp eax, dword ptr ss : [ebp-0x24]
        jae public_6d2b87c
        public_6d2b876 : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d2b87c : nop
        jmp public_6d2b812
        public_6d2b87e : nop
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x28], edx
        cmp dword ptr ss : [ebp-0x28], 0
        je public_6d2b8d4
        cmp dword ptr ss : [ebp-0x28], 0x1000000
        ja public_6d2b8a5
        mov eax, dword ptr ss : [ebp-0x28]
        add eax, 0x7FFFFF
        and eax, 0xFF800000
        mov dword ptr ss : [ebp-0x28], eax
        jmp public_6d2b8d4
        public_6d2b8a5 : nop
        cmp dword ptr ss : [ebp-0x28], 0x4000000
        ja public_6d2b8c2
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x1FFFFFF
        and ecx, 0xFE000000
        mov dword ptr ss : [ebp-0x28], ecx
        jmp public_6d2b8d4
        public_6d2b8c2 : nop
        mov edx, dword ptr ss : [ebp-0x28]
        add edx, 0x3FFFFFF
        and edx, 0xFC000000
        mov dword ptr ss : [ebp-0x28], edx
        public_6d2b8d4 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x50], eax
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d2b8f3
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x14], 0
        public_6d2b8f3 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        je public_6d2b90c
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x20], 0
        public_6d2b90c : nop
        mov eax, dword ptr ss : [ebp-0x50]
        public_6d2b90f : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2b6e0)
    }
}

#undef public_6d2b70d
#undef public_6d2b748
#undef public_6d2b761
#undef public_6d2b769
#undef public_6d2b782
#undef public_6d2b7c5
#undef public_6d2b7de
#undef public_6d2b7e6
#undef public_6d2b812
#undef public_6d2b81b
#undef public_6d2b876
#undef public_6d2b87c
#undef public_6d2b87e
#undef public_6d2b8a5
#undef public_6d2b8c2
#undef public_6d2b8d4
#undef public_6d2b8f3
#undef public_6d2b90c
#undef public_6d2b90f
