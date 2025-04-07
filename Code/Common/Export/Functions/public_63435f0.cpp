#include "Common-PCH.h"


#define public_6343611 _public_6343611
#define public_6343636 _public_6343636
#define public_6343646 _public_6343646
#define public_634366b _public_634366b

PROC_DECLARE(0x63435f0, internal_63435f0, public_63435f0);
extern "C" NAKED register_t __cdecl internal_63435f0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x64]
        fsub dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x64]
        fld dword ptr ds : [ecx+0x68]
        fsub dword ptr ss : [esp+8]
        fst dword ptr ds : [ecx+0x68]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        jne public_6343636
        public_6343611 : nop
        fld dword ptr ds : [ecx+0x64]
        fadd dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [ecx+0x64]
        fld dword ptr ds : [ecx+0x68]
        fsub dword ptr ds : [public_63a53d0]
        fst dword ptr ds : [ecx+0x68]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_6343611
        public_6343636 : nop
        fld dword ptr ds : [ecx+0x68]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_634366b
        public_6343646 : nop
        fld dword ptr ds : [ecx+0x64]
        fsub dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [ecx+0x64]
        fld dword ptr ds : [ecx+0x68]
        fadd dword ptr ds : [public_63a53d0]
        fst dword ptr ds : [ecx+0x68]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6343646
        public_634366b : nop
        ret 8
        UNREACHABLE_TRAP(0x63435f0)
    }
}

#undef public_6343611
#undef public_6343636
#undef public_6343646
#undef public_634366b
