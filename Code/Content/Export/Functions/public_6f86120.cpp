#include "Content-PCH.h"


#define public_6f8617d _public_6f8617d
#define public_6f861ae _public_6f861ae

PROC_DECLARE(0x6f86120, internal_6f86120, public_6f86120);
extern "C" NAKED register_t __cdecl internal_6f86120()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+4]
        mov ecx, edi
        call dword ptr ds : [public_6fb3068]
        fld dword ptr ss : [esp+0x18]
        fld st(0)
        xor eax, eax
        fmul st, st(1)
        mov ecx, 6
        rep stosd
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f8617d
        fld dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f8617d
        fld dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f861ae
        public_6f8617d : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x48], eax
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+0x50]
        mov dword ptr ds : [esi+0x4C], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [esi+0x5C], ecx
        mov dword ptr ds : [edx+8], eax
        pop esi
        ret 0x18
        public_6f861ae : nop
        mov edx, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [esi+0x5C], edx
        pop esi
        ret 0x18
        UNREACHABLE_TRAP(0x6f86120)
    }
}

#undef public_6f8617d
#undef public_6f861ae
