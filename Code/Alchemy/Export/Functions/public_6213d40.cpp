#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213a70);

PROC_DECLARE(0x6213d40, internal_6213d40, public_6213d40);
extern "C" NAKED register_t __cdecl internal_6213d40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6213a70
        UNREACHABLE_TRAP(0x6213d40)
    }
}
