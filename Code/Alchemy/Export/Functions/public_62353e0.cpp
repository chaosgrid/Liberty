#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62353e0);
CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

PROC_DECLARE(0x62353e0, internal_62353e0, public_62353e0);
extern "C" NAKED register_t __cdecl internal_62353e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x62353e0)
    }
}
