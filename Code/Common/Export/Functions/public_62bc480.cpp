#include "Common-PCH.h"

PROC_DECLARE(0x62bc480, internal_62bc480, public_62bc480);
extern "C" NAKED register_t __cdecl internal_62bc480()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+8], cl
        mov byte ptr ds : [eax+9], cl
        mov ecx, 0xBF800000
        mov dword ptr ds : [eax+4], 0x4B189680
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x62bc480)
    }
}
