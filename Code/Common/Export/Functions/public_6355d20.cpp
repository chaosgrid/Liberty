#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355d20);

PROC_DECLARE(0x6355d20, internal_6355d20, public_6355d20);
extern "C" NAKED register_t __cdecl internal_6355d20()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x10]
        fadd st(0), st
        fmul st, st(2)
        fsubp 
        fabs 
        fsqrt 
        fsubr dword ptr ss : [esp+4]
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(2)
        fmulp 
        fstp st(1)
        ret 0x10
        UNREACHABLE_TRAP(0x6355d20)
    }
}
