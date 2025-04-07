#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226c70);

PROC_DECLARE(0x6226930, internal_6226930, public_6226930);
extern "C" NAKED register_t __cdecl internal_6226930()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6226c70
        UNREACHABLE_TRAP(0x6226930)
    }
}
