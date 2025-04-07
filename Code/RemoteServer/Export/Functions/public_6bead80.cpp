#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bead80);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);

PROC_DECLARE(0x6bead80, internal_6bead80, public_6bead80);
extern "C" NAKED register_t __cdecl internal_6bead80()
{
    __asm
    {
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bead80)
    }
}
