#include "Common-PCH.h"

PROC_DECLARE(0x6273b00, internal_6273b00, public_6273b00);
extern "C" NAKED register_t __cdecl internal_6273b00()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x14], eax
        mov dword ptr ds : [ecx+0x18], eax
        lea eax, ds:[ecx+0x1C]
        mov dword ptr ds : [ecx+0x10], 0xFFFFFFFF
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6273b00)
    }
}
