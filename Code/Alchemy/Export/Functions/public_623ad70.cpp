#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ad70, internal_623ad70, public_623ad70);
extern "C" NAKED register_t __cdecl internal_623ad70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x1C], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623ad70)
    }
}
