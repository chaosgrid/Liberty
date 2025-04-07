#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x6306070, internal_6306070, public_6306070);
extern "C" NAKED register_t __cdecl internal_6306070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6306070)
    }
}
