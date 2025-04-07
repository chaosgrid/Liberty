#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226b40);

PROC_DECLARE(0x6226a00, internal_6226a00, public_6226a00);
extern "C" NAKED register_t __cdecl internal_6226a00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6226b40
        UNREACHABLE_TRAP(0x6226a00)
    }
}
