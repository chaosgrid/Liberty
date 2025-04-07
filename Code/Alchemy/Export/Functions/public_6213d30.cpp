#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213920);

PROC_DECLARE(0x6213d30, internal_6213d30, public_6213d30);
extern "C" NAKED register_t __cdecl internal_6213d30()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6213920
        UNREACHABLE_TRAP(0x6213d30)
    }
}
