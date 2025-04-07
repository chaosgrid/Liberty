#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ed40);

#define public_6d4ed57 _public_6d4ed57
#define public_6d4ed5d _public_6d4ed5d
#define public_6d4ed7b _public_6d4ed7b

PROC_DECLARE(0x6d4ed40, internal_6d4ed40, public_6d4ed40);
extern "C" NAKED register_t __cdecl internal_6d4ed40()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6d4ed57
        fld dword ptr ss : [esp+4]
        jmp public_6d4ed5d
        public_6d4ed57 : nop
        fld dword ptr ds : [public_6d65188]
        public_6d4ed5d : nop
        fst dword ptr ds : [ecx+0x3C4]
        fld st(0)
        fcomp dword ptr ds : [public_6d6b734]
        fnstsw ax
        test ah, 5
        jp public_6d4ed7b
        fstp dword ptr ds : [ecx+0x3C4]
        ret 4
        public_6d4ed7b : nop
        fstp st(0)
        mov dword ptr ds : [ecx+0x3C4], 0x40000000
        ret 4
        UNREACHABLE_TRAP(0x6d4ed40)
    }
}

#undef public_6d4ed57
#undef public_6d4ed5d
#undef public_6d4ed7b
