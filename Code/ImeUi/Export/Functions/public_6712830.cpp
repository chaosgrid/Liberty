#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712610);
CLANG_FORWARD_PROC_SYMBOL(public_6712830);
CLANG_FORWARD_PROC_SYMBOL(public_6712be0);

#define public_671284b _public_671284b

PROC_DECLARE(0x6712830, internal_6712830, public_6712830);
extern "C" NAKED register_t __cdecl internal_6712830()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+0x7C], 1
        call public_6712be0
        lea ecx, ds:[esi+4]
        pop esi
        test ecx, ecx
        je public_671284b
        push 1
        call public_6712610
        public_671284b : nop
        ret 
        UNREACHABLE_TRAP(0x6712830)
    }
}

#undef public_671284b
