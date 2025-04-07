#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fbd0);

#define public_6f4fbf5 _public_6f4fbf5
#define public_6f4fbff _public_6f4fbff
#define public_6f4fc09 _public_6f4fc09

PROC_DECLARE(0x6f4fbd0, internal_6f4fbd0, public_6f4fbd0);
extern "C" NAKED register_t __cdecl internal_6f4fbd0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        fld qword ptr ds : [public_6f5b448]
        test eax, eax
        mov dword ptr ss : [esp], 0
        mov dword ptr ss : [esp+4], 0x40240000
        je public_6f4fc09
        fld qword ptr ss : [esp]
        public_6f4fbf5 : nop
        test al, 1
        je public_6f4fbff
        fxch 
        fmul st, st(1)
        fxch 
        public_6f4fbff : nop
        shr eax, 1
        fld st(0)
        fmulp 
        jne public_6f4fbf5
        fstp st(0)
        public_6f4fc09 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4fbd0)
    }
}

#undef public_6f4fbf5
#undef public_6f4fbff
#undef public_6f4fc09
