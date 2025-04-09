#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c78d0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4c78f5 _public_4c78f5
#define public_4c790e _public_4c790e
#define public_4c7946 _public_4c7946

PROC_DECLARE(0x4c78d0, internal_4c78d0, public_4c78d0);
extern "C" NAKED register_t __cdecl internal_4c78d0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        sub esp, 0xC
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_4c78f5
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4c790e
        public_4c78f5 : nop
        mov eax, dword ptr ds : [public_674aa0]
        mov cl, byte ptr ds : [eax+0x5B9]
        test cl, cl
        jne public_4c7946
        mov cl, byte ptr ds : [eax+0x5BA]
        test cl, cl
        jne public_4c7946
        public_4c790e : nop
        call public_54baf0
        push eax
        call dword ptr ds : [public_5c6470]
        add esp, 4
        test eax, eax
        je public_4c7946
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edx
        lea edx, ss:[esp]
        mov dword ptr ss : [esp+8], ecx
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c646c]
        public_4c7946 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4c78d0)
    }
}

#undef public_4c78f5
#undef public_4c790e
#undef public_4c7946
