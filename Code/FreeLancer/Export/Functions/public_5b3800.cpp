#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3800);

#define public_5b381f _public_5b381f

PROC_DECLARE(0x5b3800, internal_5b3800, public_5b3800);
extern "C" NAKED register_t __cdecl internal_5b3800()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov byte ptr ds : [public_615c69], 1
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        je public_5b381f
        mov byte ptr ds : [public_615c69], 0
        public_5b381f : nop
        ret 
        UNREACHABLE_TRAP(0x5b3800)
    }
}

#undef public_5b381f
