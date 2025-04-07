#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad8882);
CLANG_FORWARD_PROC_SYMBOL(public_6ad88b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9570);

#define public_6ad8897 _public_6ad8897
#define public_6ad88ac _public_6ad88ac

PROC_DECLARE(0x6ad8882, internal_6ad8882, public_6ad8882);
extern "C" NAKED register_t __cdecl internal_6ad8882()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6ad88b0
        test eax, eax
        pop ecx
        je public_6ad8897
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6ad8897 : nop
        test byte ptr ds : [esi+0xD], 0x40
        je public_6ad88ac
        push dword ptr ds : [esi+0x10]
        call public_6ad9570
        neg eax
        pop ecx
        pop esi
        sbb eax, eax
        ret 
        public_6ad88ac : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad8882)
    }
}

#undef public_6ad8897
#undef public_6ad88ac
