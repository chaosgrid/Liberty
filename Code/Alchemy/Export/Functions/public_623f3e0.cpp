#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f260);

#define public_623f417 _public_623f417
#define public_623f41e _public_623f41e
#define public_623f445 _public_623f445

PROC_DECLARE(0x623f3e0, internal_623f3e0, public_623f3e0);
extern "C" NAKED register_t __cdecl internal_623f3e0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fsubr dword ptr ds : [public_624bac4]
        fsqrt 
        fld dword ptr ds : [public_624bc38]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x44
        jp public_623f41e
        fld dword ptr ds : [public_624bc38]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_623f417
        fld dword ptr ds : [public_624f7a4]
        ret 
        public_623f417 : nop
        fld dword ptr ds : [public_624f7a0]
        ret 
        public_623f41e : nop
        fdiv dword ptr ss : [esp+4]
        push ecx
        fstp dword ptr ss : [esp]
        call public_623f260
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_624bc38]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_623f445
        fadd dword ptr ds : [public_624f7a8]
        public_623f445 : nop
        ret 
        UNREACHABLE_TRAP(0x623f3e0)
    }
}

#undef public_623f417
#undef public_623f41e
#undef public_623f445
