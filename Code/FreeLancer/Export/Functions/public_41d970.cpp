#include "FreeLancer-PCH.h"


#define public_41d98f _public_41d98f
#define public_41d9a8 _public_41d9a8

PROC_DECLARE(0x41d970, internal_41d970, public_41d970);
extern "C" NAKED register_t __cdecl internal_41d970()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_41d98f
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        jmp public_41d9a8
        public_41d98f : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_41d9a8
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_41d9a8 : nop
        fmul dword ptr ds : [public_5c94fc]
        fadd dword ptr ds : [public_5c94f8]
        fstp dword ptr ds : [public_6107d0]
        ret 4
        UNREACHABLE_TRAP(0x41d970)
    }
}

#undef public_41d98f
#undef public_41d9a8
