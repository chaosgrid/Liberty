#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67155c0);

#define public_67155d6 _public_67155d6

PROC_DECLARE(0x67155c0, internal_67155c0, public_67155c0);
extern "C" NAKED register_t __cdecl internal_67155c0()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_67155d6
        cmp word ptr ds : [public_671b7c0], 0
        je public_67155d6
        xor eax, eax
        ret 
        public_67155d6 : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x67155c0)
    }
}

#undef public_67155d6
