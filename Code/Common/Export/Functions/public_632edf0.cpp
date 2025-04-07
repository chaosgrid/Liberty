#include "Common-PCH.h"

PROC_DECLARE(0x632edf0, internal_632edf0, public_632edf0);
extern "C" NAKED register_t __cdecl internal_632edf0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x632edf0)
    }
}
