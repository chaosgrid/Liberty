#include "Freelancer-PCH.h"


#define public_42934b _public_42934b
#define public_429366 _public_429366

PROC_DECLARE(0x429330, internal_429330, public_429330);
extern "C" NAKED register_t __cdecl internal_429330()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5ca210]
        fnstsw ax
        test ah, 5
        jp public_42934b
        mov dword ptr ds : [ecx+0x1C], 0xC2C00000
        ret 4
        public_42934b : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_429366
        mov dword ptr ds : [ecx+0x1C], 0
        ret 4
        public_429366 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x1C], eax
        ret 4
        UNREACHABLE_TRAP(0x429330)
    }
}

#undef public_42934b
#undef public_429366
