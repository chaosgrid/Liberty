#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_634cd00);

#define public_634cd1a _public_634cd1a

PROC_DECLARE(0x634cd00, internal_634cd00, public_634cd00);
extern "C" NAKED register_t __cdecl internal_634cd00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_634cd1a
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x28], 0
        public_634cd1a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x634cd00)
    }
}

#undef public_634cd1a
