#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae00);
CLANG_FORWARD_PROC_SYMBOL(public_629ed20);

PROC_DECLARE(0x629ed20, internal_629ed20, public_629ed20);
extern "C" NAKED register_t __cdecl internal_629ed20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], edx
        jmp public_629ae00
        UNREACHABLE_TRAP(0x629ed20)
    }
}
