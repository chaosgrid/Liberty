#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67155a0);

#define public_67155b2 _public_67155b2

PROC_DECLARE(0x67155a0, internal_67155a0, public_67155a0);
extern "C" NAKED register_t __cdecl internal_67155a0()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_67155b2
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_67190a5], al
        public_67155b2 : nop
        ret 
        UNREACHABLE_TRAP(0x67155a0)
    }
}

#undef public_67155b2
