#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5357);

#define public_6ad536f _public_6ad536f

PROC_DECLARE(0x6ad5357, internal_6ad5357, public_6ad5357);
extern "C" NAKED register_t __cdecl internal_6ad5357()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6ada0b8]
        test eax, eax
        je public_6ad536f
        xor esi, esi
        public_6ad536f : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad5357)
    }
}

#undef public_6ad536f
