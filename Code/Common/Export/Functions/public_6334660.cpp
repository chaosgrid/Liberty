#include "Common-PCH.h"

PROC_DECLARE(0x6334660, internal_6334660, public_6334660);
extern "C" NAKED register_t __cdecl internal_6334660()
{
    __asm
    {
        xor eax, eax
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+0x14], edx
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x1C], eax
        ret 
        UNREACHABLE_TRAP(0x6334660)
    }
}
