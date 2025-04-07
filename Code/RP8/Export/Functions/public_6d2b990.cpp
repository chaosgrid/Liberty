#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b990);

#define public_6d2b9ad _public_6d2b9ad
#define public_6d2b9ee _public_6d2b9ee

PROC_DECLARE(0x6d2b990, internal_6d2b990, public_6d2b990);
extern "C" NAKED register_t __cdecl internal_6d2b990()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0xC], 0x100
        mov dword ptr ss : [ebp-8], 0x10
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], eax
        public_6d2b9ad : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        sub ecx, 1
        mov dword ptr ss : [ebp-0xC], ecx
        cmp dword ptr ss : [ebp-0xC], 0
        jl public_6d2b9ee
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], 0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0xC], 1
        mov eax, dword ptr ss : [ebp-4]
        add eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d2b9ad
        public_6d2b9ee : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+0x1404], 0
        mov eax, dword ptr ss : [ebp-0x10]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2b990)
    }
}

#undef public_6d2b9ad
#undef public_6d2b9ee
