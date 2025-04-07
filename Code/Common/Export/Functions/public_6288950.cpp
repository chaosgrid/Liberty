#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343130);

PROC_DECLARE(0x6288950, internal_6288950, public_6288950);
extern "C" NAKED register_t __cdecl internal_6288950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6343130
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6288950)
    }
}
