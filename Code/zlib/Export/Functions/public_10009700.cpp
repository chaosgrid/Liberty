#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10009700);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);

#define public_10009705 _public_10009705
#define public_10009717 _public_10009717

PROC_DECLARE(0x10009700, internal_10009700, public_10009700);
extern "C" NAKED register_t __cdecl internal_10009700()
{
    __asm
    {
        test eax, eax
        je public_10009717
        push esi
        public_10009705 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_1000a418
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_10009705
        pop esi
        public_10009717 : nop
        ret 
        UNREACHABLE_TRAP(0x10009700)
    }
}

#undef public_10009705
#undef public_10009717
