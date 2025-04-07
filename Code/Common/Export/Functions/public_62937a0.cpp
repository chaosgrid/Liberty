#include "Common-PCH.h"

PROC_DECLARE(0x62937a0, internal_62937a0, public_62937a0);
extern "C" NAKED register_t __cdecl internal_62937a0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax], offset public_639c6cc
        ret 
        UNREACHABLE_TRAP(0x62937a0)
    }
}
