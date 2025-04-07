#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203250, internal_6203250, public_6203250);
extern "C" NAKED register_t __cdecl internal_6203250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 1
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6203250)
    }
}
