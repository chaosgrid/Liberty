#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_63691f0);

PROC_DECLARE(0x63691f0, internal_63691f0, public_63691f0);
extern "C" NAKED register_t __cdecl internal_63691f0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a56a4
        jmp public_63522f0
        UNREACHABLE_TRAP(0x63691f0)
    }
}
