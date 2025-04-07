#include "Freelancer-PCH.h"


#define public_42938b _public_42938b
#define public_4293a6 _public_4293a6

PROC_DECLARE(0x429370, internal_429370, public_429370);
extern "C" NAKED register_t __cdecl internal_429370()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ca21c]
        fnstsw ax
        test ah, 5
        jp public_42938b
        mov dword ptr ds : [ecx+0x20], 0xC61C4000
        ret 4
        public_42938b : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ca218]
        fnstsw ax
        test ah, 0x41
        jne public_4293a6
        mov dword ptr ds : [ecx+0x20], 0x461C4000
        ret 4
        public_4293a6 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x20], eax
        ret 4
        UNREACHABLE_TRAP(0x429370)
    }
}

#undef public_42938b
#undef public_4293a6
