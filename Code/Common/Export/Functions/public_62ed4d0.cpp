#include "Common-PCH.h"

PROC_DECLARE(0x62ed4d0, internal_62ed4d0, public_62ed4d0);
extern "C" NAKED register_t __cdecl internal_62ed4d0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax], offset public_63a0880
        ret 
        UNREACHABLE_TRAP(0x62ed4d0)
    }
}
