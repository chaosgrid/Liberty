#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3840);

#define public_5b385f _public_5b385f

PROC_DECLARE(0x5b3840, internal_5b3840, public_5b3840);
extern "C" NAKED register_t __cdecl internal_5b3840()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov byte ptr ds : [public_67ed46], 1
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        je public_5b385f
        mov byte ptr ds : [public_67ed46], 0
        public_5b385f : nop
        ret 
        UNREACHABLE_TRAP(0x5b3840)
    }
}

#undef public_5b385f
