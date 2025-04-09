#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b37e0);

#define public_5b37ff _public_5b37ff

PROC_DECLARE(0x5b37e0, internal_5b37e0, public_5b37e0);
extern "C" NAKED register_t __cdecl internal_5b37e0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov byte ptr ds : [public_615c68], 1
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        je public_5b37ff
        mov byte ptr ds : [public_615c68], 0
        public_5b37ff : nop
        ret 
        UNREACHABLE_TRAP(0x5b37e0)
    }
}

#undef public_5b37ff
