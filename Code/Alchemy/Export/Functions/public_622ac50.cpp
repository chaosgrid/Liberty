#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ac50);

PROC_DECLARE(0x622ac50, internal_622ac50, public_622ac50);
extern "C" NAKED register_t __cdecl internal_622ac50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        ret 
        UNREACHABLE_TRAP(0x622ac50)
    }
}
