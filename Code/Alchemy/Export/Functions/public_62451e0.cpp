#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623faf0);
CLANG_FORWARD_PROC_SYMBOL(public_62451e0);

PROC_DECLARE(0x62451e0, internal_62451e0, public_62451e0);
extern "C" NAKED register_t __cdecl internal_62451e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x62451e0)
    }
}
