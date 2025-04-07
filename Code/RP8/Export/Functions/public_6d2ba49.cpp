#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ba49);

#define public_6d2ba91 _public_6d2ba91

PROC_DECLARE(0x6d2ba49, internal_6d2ba49, public_6d2ba49);
extern "C" NAKED register_t __cdecl internal_6d2ba49()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [eax+0xC8]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jl public_6d2ba91
        mov edx, dword ptr ss : [ebp+0xC]
        shl edx, 4
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+edx+4], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        shl edx, 4
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+edx], ecx
        public_6d2ba91 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d2ba49)
    }
}

#undef public_6d2ba91
