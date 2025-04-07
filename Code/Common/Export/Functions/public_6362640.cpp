#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345300);
CLANG_FORWARD_PROC_SYMBOL(public_6362640);

PROC_DECLARE(0x6362640, internal_6362640, public_6362640);
extern "C" NAKED register_t __cdecl internal_6362640()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a585c
        jmp public_6345300
        UNREACHABLE_TRAP(0x6362640)
    }
}
