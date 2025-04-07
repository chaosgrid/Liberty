#include "Alchemy-PCH.h"

PROC_DECLARE(0x6207bc0, internal_6207bc0, public_6207bc0);
extern "C" NAKED register_t __cdecl internal_6207bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6207bc0)
    }
}
