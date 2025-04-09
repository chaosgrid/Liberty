#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459060);
CLANG_FORWARD_PROC_SYMBOL(public_459900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_459925 _public_459925

PROC_DECLARE(0x459900, internal_459900, public_459900);
extern "C" NAKED register_t __cdecl internal_459900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_66d334]
        test esi, esi
        je public_459925
        mov ecx, esi
        call public_459060
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_66d334], 0
        public_459925 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x459900)
    }
}

#undef public_459925
