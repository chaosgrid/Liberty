#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6362f70);

#define public_6362f8a _public_6362f8a

PROC_DECLARE(0x6362f70, internal_6362f70, public_6362f70);
extern "C" NAKED register_t __cdecl internal_6362f70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6362f8a
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_6362f8a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6362f70)
    }
}

#undef public_6362f8a
