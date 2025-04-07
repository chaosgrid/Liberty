#include "Alchemy-PCH.h"

PROC_DECLARE(0x620eb60, internal_620eb60, public_620eb60);
extern "C" NAKED register_t __cdecl internal_620eb60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x88]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x620eb60)
    }
}
