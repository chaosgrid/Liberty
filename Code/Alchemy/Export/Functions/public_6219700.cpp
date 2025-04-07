#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218be0);

PROC_DECLARE(0x6219700, internal_6219700, public_6219700);
extern "C" NAKED register_t __cdecl internal_6219700()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6218be0
        UNREACHABLE_TRAP(0x6219700)
    }
}
