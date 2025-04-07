#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213b30);

PROC_DECLARE(0x6213d90, internal_6213d90, public_6213d90);
extern "C" NAKED register_t __cdecl internal_6213d90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6213b30
        UNREACHABLE_TRAP(0x6213d90)
    }
}
