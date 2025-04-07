#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ac60);

PROC_DECLARE(0x622ac60, internal_622ac60, public_622ac60);
extern "C" NAKED register_t __cdecl internal_622ac60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x622ac60)
    }
}
