#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_633444b _public_633444b

PROC_DECLARE(0x6334430, internal_6334430, public_6334430);
extern "C" NAKED register_t __cdecl internal_6334430()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_633444b
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_633444b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6334430)
    }
}

#undef public_633444b
