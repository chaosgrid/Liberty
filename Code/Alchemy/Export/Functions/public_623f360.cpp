#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f260);

#define public_623f39f _public_623f39f
#define public_623f3a7 _public_623f3a7
#define public_623f3d2 _public_623f3d2

PROC_DECLARE(0x623f360, internal_623f360, public_623f360);
extern "C" NAKED register_t __cdecl internal_623f360()
{
    __asm
    {
        push ecx
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fsubr dword ptr ds : [public_624bac4]
        fsqrt 
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [public_624bc38]
        fcomp dword ptr ss : [esp]
        fnstsw ax
        test ah, 0x44
        jp public_623f3a7
        fld dword ptr ds : [public_624bc38]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jp public_623f39f
        fld dword ptr ds : [public_624f7a4]
        pop ecx
        ret 
        public_623f39f : nop
        fld dword ptr ds : [public_624f7a0]
        pop ecx
        ret 
        public_623f3a7 : nop
        fld dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp]
        push ecx
        fstp dword ptr ss : [esp]
        call public_623f260
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_624bc38]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_623f3d2
        fadd dword ptr ds : [public_624f7a8]
        public_623f3d2 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x623f360)
    }
}

#undef public_623f39f
#undef public_623f3a7
#undef public_623f3d2
