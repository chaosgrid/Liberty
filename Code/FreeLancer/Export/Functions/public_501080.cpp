#include "FreeLancer-PCH.h"

PROC_DECLARE(0x501080, internal_501080, public_501080);
extern "C" NAKED register_t __cdecl internal_501080()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+0x2A4], eax
        mov dword ptr ds : [ecx+0x26C], eax
        mov dword ptr ds : [ecx+0x270], eax
        mov dword ptr ds : [ecx+0x264], eax
        mov dword ptr ds : [ecx+0x260], eax
        ret 
        UNREACHABLE_TRAP(0x501080)
    }
}
