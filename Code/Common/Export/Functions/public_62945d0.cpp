#include "Common-PCH.h"


#define public_62945e7 _public_62945e7
#define public_62945ef _public_62945ef
#define public_6294622 _public_6294622
#define public_629464c _public_629464c
#define public_6294652 _public_6294652

PROC_DECLARE(0x62945d0, internal_62945d0, public_62945d0);
extern "C" NAKED register_t __cdecl internal_62945d0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [ecx+0x50]
        mov dl, byte ptr ds : [ecx+0x51]
        cmp al, dl
        jne public_62945ef
        test dl, dl
        je public_62945e7
        fld dword ptr ds : [public_639a1d0]
        pop ecx
        ret 
        public_62945e7 : nop
        fld dword ptr ds : [public_6399408]
        pop ecx
        ret 
        public_62945ef : nop
        test al, al
        mov eax, dword ptr ds : [ecx+0xC]
        je public_6294622
        mov edx, dword ptr ds : [eax+0x90]
        fld dword ptr ds : [public_639a1d0]
        mov dword ptr ss : [esp], edx
        fld dword ptr ss : [esp]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_6294652
        fstp st(0)
        fld dword ptr ds : [ecx+0x4C]
        fdiv dword ptr ss : [esp]
        pop ecx
        ret 
        public_6294622 : nop
        mov edx, dword ptr ds : [eax+0x8C]
        fld dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp], edx
        fld dword ptr ss : [esp]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_629464c
        fstp st(0)
        fld dword ptr ds : [ecx+0x4C]
        fdiv dword ptr ss : [esp]
        public_629464c : nop
        fsubr qword ptr ds : [public_6399410]
        public_6294652 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62945d0)
    }
}

#undef public_62945e7
#undef public_62945ef
#undef public_6294622
#undef public_629464c
#undef public_6294652
