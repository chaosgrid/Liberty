#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e0a0);

#define public_6f4e0ad _public_6f4e0ad

PROC_DECLARE(0x6f4e0a0, internal_6f4e0a0, public_6f4e0a0);
extern "C" NAKED register_t __cdecl internal_6f4e0a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea edx, ds:[eax+eax*8]
        xor ecx, ecx
        push esi
        shl edx, 5
        public_6f4e0ad : nop
        mov esi, dword ptr ds : [public_6f61e28]
        mov esi, dword ptr ds : [esi+0x64]
        mov eax, ecx
        sub eax, edx
        add ecx, 0x10
        cmp ecx, 0x120
        mov dword ptr ds : [esi+eax], 0xFFFFFFFA
        jl public_6f4e0ad
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e0a0)
    }
}

#undef public_6f4e0ad
