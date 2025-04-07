#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37a10);

PROC_DECLARE(0x6f37b20, internal_6f37b20, public_6f37b20);
extern "C" NAKED register_t __cdecl internal_6f37b20()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_6f37a10
        UNREACHABLE_TRAP(0x6f37b20)
    }
}
