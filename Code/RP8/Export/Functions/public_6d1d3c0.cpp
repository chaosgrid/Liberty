#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1d3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d1d3d1 _public_6d1d3d1
#define public_6d1d3d7 _public_6d1d3d7
#define public_6d1d43d _public_6d1d43d
#define public_6d1d459 _public_6d1d459
#define public_6d1d46e _public_6d1d46e
#define public_6d1d47f _public_6d1d47f

PROC_DECLARE(0x6d1d3c0, internal_6d1d3c0, public_6d1d3c0);
extern "C" NAKED register_t __cdecl internal_6d1d3c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d1d3d7
        public_6d1d3d1 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], ecx
        public_6d1d3d7 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1d47f
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x10]
        call public_6d1d3c0
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0xC
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 4
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+0x20], 0
        je public_6d1d459
        mov edx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [edx+0x10], 0
        je public_6d1d43d
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x30]
        public_6d1d43d : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+0x20], 0
        public_6d1d459 : nop
        xor eax, eax
        and eax, 1
        test eax, eax
        je public_6d1d46e
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        call public_6d2f249
        add esp, 4
        public_6d1d46e : nop
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6d2f249
        add esp, 4
        jmp public_6d1d3d1
        public_6d1d47f : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1d3c0)
    }
}

#undef public_6d1d3d1
#undef public_6d1d3d7
#undef public_6d1d43d
#undef public_6d1d459
#undef public_6d1d46e
#undef public_6d1d47f
