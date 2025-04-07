#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242980);

PROC_DECLARE(0x6242980, internal_6242980, public_6242980);
extern "C" NAKED register_t __cdecl internal_6242980()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x6242980)
    }
}
