#include "Content-PCH.h"


#define public_6f86205 _public_6f86205
#define public_6f8621e _public_6f8621e

PROC_DECLARE(0x6f861c0, internal_6f861c0, public_6f861c0);
extern "C" NAKED register_t __cdecl internal_6f861c0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x50]
        add ecx, 0x50
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f86205
        fld dword ptr ds : [ecx+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f86205
        fld dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f8621e
        public_6f86205 : nop
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        ret 4
        public_6f8621e : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6f861c0)
    }
}

#undef public_6f86205
#undef public_6f8621e
