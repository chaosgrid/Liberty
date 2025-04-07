#include "Common-PCH.h"

PROC_DECLARE(0x62befa0, internal_62befa0, public_62befa0);
extern "C" NAKED register_t __cdecl internal_62befa0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0xC], offset public_639e004
        mov dword ptr ds : [eax], offset public_639effc
        mov dword ptr ds : [eax+4], offset public_639ef7c
        mov dword ptr ds : [eax+0xC], offset public_639ef74
        ret 
        UNREACHABLE_TRAP(0x62befa0)
    }
}
