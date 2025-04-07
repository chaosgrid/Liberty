#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355d60);

PROC_DECLARE(0x6355d60, internal_6355d60, public_6355d60);
extern "C" NAKED register_t __cdecl internal_6355d60()
{
    __asm
    {
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        fdivr dword ptr ss : [esp+4]
        fld st(0)
        fmul dword ptr ss : [esp+0x14]
        fsubr dword ptr ss : [esp+4]
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0xC]
        fld st(1)
        fmul st, st(2)
        fmul dword ptr ss : [esp+8]
        fsubp 
        fsub dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63a5460]
        fstp st(1)
        ret 
        UNREACHABLE_TRAP(0x6355d60)
    }
}
