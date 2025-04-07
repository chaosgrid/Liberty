#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62429a0);

PROC_DECLARE(0x62429a0, internal_62429a0, public_62429a0);
extern "C" NAKED register_t __cdecl internal_62429a0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fmulp 
        fadd dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x62429a0)
    }
}
