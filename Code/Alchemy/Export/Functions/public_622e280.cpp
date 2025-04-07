#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622eca0);

PROC_DECLARE(0x622e280, internal_622e280, public_622e280);
extern "C" NAKED register_t __cdecl internal_622e280()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622eca0
        UNREACHABLE_TRAP(0x622e280)
    }
}
