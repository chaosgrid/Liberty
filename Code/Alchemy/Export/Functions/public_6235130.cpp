#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235c10);

PROC_DECLARE(0x6235130, internal_6235130, public_6235130);
extern "C" NAKED register_t __cdecl internal_6235130()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235c10
        UNREACHABLE_TRAP(0x6235130)
    }
}
