#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bead20);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);

PROC_DECLARE(0x6bead20, internal_6bead20, public_6bead20);
extern "C" NAKED register_t __cdecl internal_6bead20()
{
    __asm
    {
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bead20)
    }
}
