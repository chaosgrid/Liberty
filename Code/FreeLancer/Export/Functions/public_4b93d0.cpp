#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b93f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c55d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4b93ed _public_4b93ed

PROC_DECLARE(0x4b93d0, internal_4b93d0, public_4b93d0);
extern "C" NAKED register_t __cdecl internal_4b93d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a17b0
        call public_4c55d0
        cmp eax, dword ptr ds : [esi+0x420]
        je public_4b93ed
        mov ecx, esi
        pop esi
        jmp public_4b93f0
        public_4b93ed : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4b93d0)
    }
}

#undef public_4b93ed
