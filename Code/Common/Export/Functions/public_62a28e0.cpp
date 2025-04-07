#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af420);

PROC_DECLARE(0x62a28e0, internal_62a28e0, public_62a28e0);
extern "C" NAKED register_t __cdecl internal_62a28e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], edx
        jmp public_62af420
        UNREACHABLE_TRAP(0x62a28e0)
    }
}
