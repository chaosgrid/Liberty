#include "Alchemy-PCH.h"

PROC_DECLARE(0x6218d60, internal_6218d60, public_6218d60);
extern "C" NAKED register_t __cdecl internal_6218d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0xE4]
        lea ecx, ds:[eax+eax*2]
        xor eax, eax
        add ecx, ecx
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6218d60)
    }
}
