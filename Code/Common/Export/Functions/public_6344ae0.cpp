#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344ae0);
CLANG_FORWARD_PROC_SYMBOL(public_63522f0);

PROC_DECLARE(0x6344ae0, internal_6344ae0, public_6344ae0);
extern "C" NAKED register_t __cdecl internal_6344ae0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a5420
        jmp public_63522f0
        UNREACHABLE_TRAP(0x6344ae0)
    }
}
