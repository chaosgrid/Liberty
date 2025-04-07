#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37a20);

PROC_DECLARE(0x6f37b00, internal_6f37b00, public_6f37b00);
extern "C" NAKED register_t __cdecl internal_6f37b00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6f37a20
        UNREACHABLE_TRAP(0x6f37b00)
    }
}
