#include "Alchemy-PCH.h"

PROC_DECLARE(0x622e950, internal_622e950, public_622e950);
extern "C" NAKED register_t __cdecl internal_622e950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xE4]
        xor eax, eax
        shl ecx, 2
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x622e950)
    }
}
