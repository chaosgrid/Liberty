#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635a160);

#define public_635a181 _public_635a181
#define public_635a1a6 _public_635a1a6
#define public_635a1b6 _public_635a1b6
#define public_635a1db _public_635a1db

PROC_DECLARE(0x635a160, internal_635a160, public_635a160);
extern "C" NAKED register_t __cdecl internal_635a160()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x68]
        fsub dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x68]
        fld dword ptr ds : [ecx+0x6C]
        fsub dword ptr ss : [esp+8]
        fst dword ptr ds : [ecx+0x6C]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        jne public_635a1a6
        public_635a181 : nop
        fld dword ptr ds : [ecx+0x68]
        fadd dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [ecx+0x68]
        fld dword ptr ds : [ecx+0x6C]
        fsub dword ptr ds : [public_63a53d0]
        fst dword ptr ds : [ecx+0x6C]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_635a181
        public_635a1a6 : nop
        fld dword ptr ds : [ecx+0x6C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_635a1db
        public_635a1b6 : nop
        fld dword ptr ds : [ecx+0x68]
        fsub dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [ecx+0x68]
        fld dword ptr ds : [ecx+0x6C]
        fadd dword ptr ds : [public_63a53d0]
        fst dword ptr ds : [ecx+0x6C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_635a1b6
        public_635a1db : nop
        ret 8
        UNREACHABLE_TRAP(0x635a160)
    }
}

#undef public_635a181
#undef public_635a1a6
#undef public_635a1b6
#undef public_635a1db
