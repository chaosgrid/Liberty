#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620db40);

PROC_DECLARE(0x620da00, internal_620da00, public_620da00);
extern "C" NAKED register_t __cdecl internal_620da00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620db40
        UNREACHABLE_TRAP(0x620da00)
    }
}
