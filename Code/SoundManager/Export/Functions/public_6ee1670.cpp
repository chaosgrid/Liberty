#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8dd6);

#define public_6ee168b _public_6ee168b
#define public_6ee16a4 _public_6ee16a4

PROC_DECLARE(0x6ee1670, internal_6ee1670, public_6ee1670);
extern "C" NAKED register_t __cdecl internal_6ee1670()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_6ee9220]
        fnstsw ax
        test ah, 5
        jp public_6ee168b
        mov dword ptr ss : [esp+4], 0xC2C80000
        jmp public_6ee16a4
        public_6ee168b : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_6ee9250]
        fnstsw ax
        test ah, 0x41
        jne public_6ee16a4
        mov dword ptr ss : [esp+4], 0x42C80000
        public_6ee16a4 : nop
        fld qword ptr ds : [public_6ee9248]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_6ee9240]
        call public_6ee8dd6
        ret 
        UNREACHABLE_TRAP(0x6ee1670)
    }
}

#undef public_6ee168b
#undef public_6ee16a4
