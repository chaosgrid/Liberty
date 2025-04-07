#include "Freelancer-PCH.h"

PROC_DECLARE(0x466710, internal_466710, public_466710);
extern "C" NAKED register_t __cdecl internal_466710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+4]
        sub ecx, edx
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x466710)
    }
}
