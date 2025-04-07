#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ed50);

PROC_DECLARE(0x622e370, internal_622e370, public_622e370);
extern "C" NAKED register_t __cdecl internal_622e370()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ed50
        UNREACHABLE_TRAP(0x622e370)
    }
}
