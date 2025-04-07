#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6352620);

#define public_635263f _public_635263f

PROC_DECLARE(0x6352620, internal_6352620, public_6352620);
extern "C" NAKED register_t __cdecl internal_6352620()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_635263f
        test eax, eax
        je public_635263f
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0xC], 0
        public_635263f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6352620)
    }
}

#undef public_635263f
