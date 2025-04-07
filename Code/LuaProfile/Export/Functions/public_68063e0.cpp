#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68063e0);

#define public_6806405 _public_6806405
#define public_680640f _public_680640f
#define public_6806419 _public_6806419

PROC_DECLARE(0x68063e0, internal_68063e0, public_68063e0);
extern "C" NAKED register_t __cdecl internal_68063e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        fld qword ptr ds : [public_680c198]
        test eax, eax
        mov dword ptr ss : [esp], 0
        mov dword ptr ss : [esp+4], 0x40240000
        je public_6806419
        fld qword ptr ss : [esp]
        public_6806405 : nop
        test al, 1
        je public_680640f
        fxch 
        fmul st, st(1)
        fxch 
        public_680640f : nop
        shr eax, 1
        fld st(0)
        fmulp 
        jne public_6806405
        fstp st(0)
        public_6806419 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x68063e0)
    }
}

#undef public_6806405
#undef public_680640f
#undef public_6806419
