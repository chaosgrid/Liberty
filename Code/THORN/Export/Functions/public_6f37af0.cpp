#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37a10);

PROC_DECLARE(0x6f37af0, internal_6f37af0, public_6f37af0);
extern "C" NAKED register_t __cdecl internal_6f37af0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6f37a10
        UNREACHABLE_TRAP(0x6f37af0)
    }
}
