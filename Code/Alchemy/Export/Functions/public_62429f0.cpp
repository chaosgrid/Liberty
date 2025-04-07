#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62429f0);

PROC_DECLARE(0x62429f0, internal_62429f0, public_62429f0);
extern "C" NAKED register_t __cdecl internal_62429f0()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        fadd st(0), st
        fsubr dword ptr ds : [public_624bb14]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        fmulp 
        fadd dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x62429f0)
    }
}
