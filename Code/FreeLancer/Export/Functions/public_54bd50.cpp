#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bd50);

#define public_54bd60 _public_54bd60

PROC_DECLARE(0x54bd50, internal_54bd50, public_54bd50);
extern "C" NAKED register_t __cdecl internal_54bd50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_679738]
        test eax, eax
        je public_54bd60
        mov byte ptr ds : [eax+0xBC], 1
        public_54bd60 : nop
        ret 
        UNREACHABLE_TRAP(0x54bd50)
    }
}

#undef public_54bd60
