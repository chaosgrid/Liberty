#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215930);
CLANG_FORWARD_PROC_SYMBOL(public_6218ae0);

PROC_DECLARE(0x6218ae0, internal_6218ae0, public_6218ae0);
extern "C" NAKED register_t __cdecl internal_6218ae0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6215930
        UNREACHABLE_TRAP(0x6218ae0)
    }
}
