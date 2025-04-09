#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552530);

PROC_DECLARE(0x552530, internal_552530, public_552530);
extern "C" NAKED register_t __cdecl internal_552530()
{
    __asm
    {
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ss : [esp+4]
        fld dword ptr ds : [public_5c75e0]
        fmul st, st(1)
        fadd dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+8]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_5c75dc]
        fld dword ptr ds : [public_5c75dc]
        fsub st, st(1)
        fmul dword ptr ds : [public_5e0e10]
        fadd st, st(1)
        fstp dword ptr ds : [ecx+0xAC]
        fstp st(0)
        ret 4
        UNREACHABLE_TRAP(0x552530)
    }
}
