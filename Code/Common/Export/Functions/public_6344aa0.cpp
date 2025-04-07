#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344aa0);
CLANG_FORWARD_PROC_SYMBOL(public_63522f0);

PROC_DECLARE(0x6344aa0, internal_6344aa0, public_6344aa0);
extern "C" NAKED register_t __cdecl internal_6344aa0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a5408
        jmp public_63522f0
        UNREACHABLE_TRAP(0x6344aa0)
    }
}
