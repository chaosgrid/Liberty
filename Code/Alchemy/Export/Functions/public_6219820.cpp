#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218e80);

PROC_DECLARE(0x6219820, internal_6219820, public_6219820);
extern "C" NAKED register_t __cdecl internal_6219820()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6218e80
        UNREACHABLE_TRAP(0x6219820)
    }
}
