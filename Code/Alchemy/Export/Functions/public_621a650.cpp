#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a650);
CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

PROC_DECLARE(0x621a650, internal_621a650, public_621a650);
extern "C" NAKED register_t __cdecl internal_621a650()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x621a650)
    }
}
