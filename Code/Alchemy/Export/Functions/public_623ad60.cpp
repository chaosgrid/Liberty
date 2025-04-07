#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ad60, internal_623ad60, public_623ad60);
extern "C" NAKED register_t __cdecl internal_623ad60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623ad60)
    }
}
