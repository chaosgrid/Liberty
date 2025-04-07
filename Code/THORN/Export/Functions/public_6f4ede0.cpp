#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4edfc _public_6f4edfc

PROC_DECLARE(0x6f4ede0, internal_6f4ede0, public_6f4ede0);
extern "C" NAKED register_t __cdecl internal_6f4ede0()
{
    __asm
    {
        push esi
        push 0x2E8
        xor esi, esi
        push esi
        call public_6f4fe10
        mov ecx, dword ptr ds : [public_6f61e28]
        add esp, 8
        mov dword ptr ds : [ecx+0x60], eax
        xor eax, eax
        public_6f4edfc : nop
        mov edx, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ds : [ecx+eax], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ds : [ecx+eax+4], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ds : [ecx+eax+8], esi
        add eax, 0xC
        cmp eax, 0x2E8
        jl public_6f4edfc
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4ede0)
    }
}

#undef public_6f4edfc
