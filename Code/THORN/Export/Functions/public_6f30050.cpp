#include "THORN-PCH.h"


#define public_6f3007b _public_6f3007b
#define public_6f30083 _public_6f30083
#define public_6f300ab _public_6f300ab

PROC_DECLARE(0x6f30050, internal_6f30050, public_6f30050);
extern "C" NAKED register_t __cdecl internal_6f30050()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_6f5a554]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx], edx
        fnstsw ax
        test ah, 5
        jnp public_6f3007b
        fcom dword ptr ds : [public_6f5a550]
        fnstsw ax
        test ah, 0x41
        jne public_6f30083
        public_6f3007b : nop
        fstp st(0)
        fld dword ptr ds : [public_6f5a550]
        public_6f30083 : nop
        fmul qword ptr ds : [public_6f5a548]
        fptan 
        fstp st(0)
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6f5a550]
        fnstsw ax
        test ah, 0x41
        jne public_6f300ab
        mov dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        ret 0x10
        public_6f300ab : nop
        fld dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_6f5a548]
        fptan 
        fstp st(0)
        fstp dword ptr ds : [ecx+0xC]
        ret 0x10
        UNREACHABLE_TRAP(0x6f30050)
    }
}

#undef public_6f3007b
#undef public_6f30083
#undef public_6f300ab
