#include "Alchemy-PCH.h"


#define public_623f0ab _public_623f0ab
#define public_623f0cd _public_623f0cd
#define public_623f0e4 _public_623f0e4

PROC_DECLARE(0x623f080, internal_623f080, public_623f080);
extern "C" NAKED register_t __cdecl internal_623f080()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_624f798]
        fnstsw ax
        and eax, 0x4100
        jne public_623f0ab
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_624f794]
        fnstsw ax
        test ah, 5
        jp public_623f0ab
        fld dword ptr ds : [public_624bc38]
        ret 
        public_623f0ab : nop
        fld dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp+8]
        fcom dword ptr ds : [public_624c368]
        fnstsw ax
        test ah, 5
        jp public_623f0cd
        fstp st(0)
        fld dword ptr ds : [public_624c368]
        fmul dword ptr ss : [esp+0xC]
        ret 
        public_623f0cd : nop
        fcom dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_623f0e4
        fstp st(0)
        fld dword ptr ds : [public_624bac4]
        public_623f0e4 : nop
        fmul dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x623f080)
    }
}

#undef public_623f0ab
#undef public_623f0cd
#undef public_623f0e4
