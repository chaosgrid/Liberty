#include "Alchemy-PCH.h"

PROC_DECLARE(0x6223f20, internal_6223f20, public_6223f20);
extern "C" NAKED register_t __cdecl internal_6223f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6223f20)
    }
}
