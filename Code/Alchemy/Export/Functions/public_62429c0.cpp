#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62429c0);

PROC_DECLARE(0x62429c0, internal_62429c0, public_62429c0);
extern "C" NAKED register_t __cdecl internal_62429c0()
{
    __asm
    {
        fld dword ptr ds : [public_624bac4]
        fsub dword ptr ss : [esp+0xC]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_624bac4]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        fmulp 
        fadd dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x62429c0)
    }
}
