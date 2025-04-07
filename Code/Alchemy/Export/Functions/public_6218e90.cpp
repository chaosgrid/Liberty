#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218e90);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x6218e90, internal_6218e90, public_6218e90);
extern "C" NAKED register_t __cdecl internal_6218e90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x6218e90)
    }
}
