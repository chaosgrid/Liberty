#include "Freelancer-PCH.h"

PROC_DECLARE(0x51e080, internal_51e080, public_51e080);
extern "C" NAKED register_t __cdecl internal_51e080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        add eax, 8
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x51e080)
    }
}
