#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad533b);

#define public_6ad5353 _public_6ad5353

PROC_DECLARE(0x6ad533b, internal_6ad533b, public_6ad533b);
extern "C" NAKED register_t __cdecl internal_6ad533b()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6ada0b0]
        test eax, eax
        je public_6ad5353
        xor esi, esi
        public_6ad5353 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad533b)
    }
}

#undef public_6ad5353
