#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f260);

#define public_623f329 _public_623f329
#define public_623f330 _public_623f330
#define public_623f35b _public_623f35b

PROC_DECLARE(0x623f300, internal_623f300, public_623f300);
extern "C" NAKED register_t __cdecl internal_623f300()
{
    __asm
    {
        fld dword ptr ds : [public_624bc38]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x44
        jp public_623f330
        fld dword ptr ds : [public_624bc38]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_623f329
        fld dword ptr ds : [public_624f7a4]
        ret 
        public_623f329 : nop
        fld dword ptr ds : [public_624f7a0]
        ret 
        public_623f330 : nop
        fld dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp+8]
        push ecx
        fstp dword ptr ss : [esp]
        call public_623f260
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_624bc38]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_623f35b
        fadd dword ptr ds : [public_624f7a8]
        public_623f35b : nop
        ret 
        UNREACHABLE_TRAP(0x623f300)
    }
}

#undef public_623f329
#undef public_623f330
#undef public_623f35b
