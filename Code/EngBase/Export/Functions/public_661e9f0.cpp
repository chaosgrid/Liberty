#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6625c00);

PROC_DECLARE(0x661e9f0, internal_661e9f0, public_661e9f0);
extern "C" NAKED register_t __cdecl internal_661e9f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_662b168
        push eax
        call public_6625c00
        ret 
        UNREACHABLE_TRAP(0x661e9f0)
    }
}
