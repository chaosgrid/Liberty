#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226f60);

PROC_DECLARE(0x6226730, internal_6226730, public_6226730);
extern "C" NAKED register_t __cdecl internal_6226730()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6226f60
        UNREACHABLE_TRAP(0x6226730)
    }
}
