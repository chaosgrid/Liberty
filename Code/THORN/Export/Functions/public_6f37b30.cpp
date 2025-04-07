#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37a20);

PROC_DECLARE(0x6f37b30, internal_6f37b30, public_6f37b30);
extern "C" NAKED register_t __cdecl internal_6f37b30()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_6f37a20
        UNREACHABLE_TRAP(0x6f37b30)
    }
}
