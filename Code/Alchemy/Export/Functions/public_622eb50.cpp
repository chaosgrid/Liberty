#include "Alchemy-PCH.h"

PROC_DECLARE(0x622eb50, internal_622eb50, public_622eb50);
extern "C" NAKED register_t __cdecl internal_622eb50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x90]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x622eb50)
    }
}
