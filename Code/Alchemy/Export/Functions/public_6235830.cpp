#include "Alchemy-PCH.h"

PROC_DECLARE(0x6235830, internal_6235830, public_6235830);
extern "C" NAKED register_t __cdecl internal_6235830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x20], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6235830)
    }
}
