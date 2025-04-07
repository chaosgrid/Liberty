#include "Alchemy-PCH.h"


#define public_62464fd _public_62464fd
#define public_6246505 _public_6246505
#define public_624652f _public_624652f

PROC_DECLARE(0x62464d0, internal_62464d0, public_62464d0);
extern "C" NAKED register_t __cdecl internal_62464d0()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        fcom dword ptr ds : [public_624fea0]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx], edx
        fnstsw ax
        test ah, 5
        jnp public_62464fd
        fcom dword ptr ds : [public_624fe9c]
        fnstsw ax
        and eax, 0x4100
        jne public_6246505
        public_62464fd : nop
        fstp st(0)
        fld dword ptr ds : [public_624fe9c]
        public_6246505 : nop
        fmul dword ptr ds : [public_624d4c4]
        fptan 
        fstp st(0)
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624fe9c]
        fnstsw ax
        and eax, 0x4100
        jne public_624652f
        mov dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        ret 0x10
        public_624652f : nop
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624d4c4]
        fptan 
        fstp st(0)
        fstp dword ptr ds : [ecx+0xC]
        ret 0x10
        UNREACHABLE_TRAP(0x62464d0)
    }
}

#undef public_62464fd
#undef public_6246505
#undef public_624652f
