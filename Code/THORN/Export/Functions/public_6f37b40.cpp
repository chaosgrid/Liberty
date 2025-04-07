#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37a30);

PROC_DECLARE(0x6f37b40, internal_6f37b40, public_6f37b40);
extern "C" NAKED register_t __cdecl internal_6f37b40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_6f37a30
        UNREACHABLE_TRAP(0x6f37b40)
    }
}
