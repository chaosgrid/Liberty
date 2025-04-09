#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8bc0);

#define public_4c8bd4 _public_4c8bd4

PROC_DECLARE(0x4c8bc0, internal_4c8bc0, public_4c8bc0);
extern "C" NAKED register_t __cdecl internal_4c8bc0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        lea eax, ds:[ecx+0xC]
        fcos 
        mov ecx, 3
        fld dword ptr ss : [esp+4]
        fsin 
        public_4c8bd4 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_4c8bd4
        fstp st(0)
        fstp st(0)
        ret 4
        UNREACHABLE_TRAP(0x4c8bc0)
    }
}

#undef public_4c8bd4
