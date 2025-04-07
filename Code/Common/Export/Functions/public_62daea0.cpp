#include "Common-PCH.h"


#define public_62daee9 _public_62daee9
#define public_62daeec _public_62daeec
#define public_62daeff _public_62daeff
#define public_62daf10 _public_62daf10
#define public_62daf20 _public_62daf20

PROC_DECLARE(0x62daea0, internal_62daea0, public_62daea0);
extern "C" NAKED register_t __cdecl internal_62daea0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        je public_62daeec
        fld dword ptr ds : [ecx+0x10]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62daee9
        fld dword ptr ds : [ecx+0x14]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62daee9
        fld dword ptr ds : [ecx+0x18]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_62daeec
        public_62daee9 : nop
        xor al, al
        ret 
        public_62daeec : nop
        fld dword ptr ds : [ecx+0x50]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62daeff
        xor al, al
        ret 
        public_62daeff : nop
        mov al, byte ptr ds : [ecx+0x5A]
        test al, al
        je public_62daf10
        mov al, byte ptr ds : [ecx+0x5B]
        test al, al
        je public_62daf10
        xor al, al
        ret 
        public_62daf10 : nop
        fld dword ptr ds : [ecx+0x60]
        fcomp dword ptr ds : [ecx+0x64]
        fnstsw ax
        test ah, 0x41
        jne public_62daf20
        xor al, al
        ret 
        public_62daf20 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62daea0)
    }
}

#undef public_62daee9
#undef public_62daeec
#undef public_62daeff
#undef public_62daf10
#undef public_62daf20
