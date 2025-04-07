#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5373);

#define public_6ad5387 _public_6ad5387

PROC_DECLARE(0x6ad5373, internal_6ad5373, public_6ad5373);
extern "C" NAKED register_t __cdecl internal_6ad5373()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+8]
        call dword ptr ds : [public_6ada0ac]
        test eax, eax
        je public_6ad5387
        xor esi, esi
        public_6ad5387 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad5373)
    }
}

#undef public_6ad5387
