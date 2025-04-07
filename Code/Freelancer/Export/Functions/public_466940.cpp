#include "Freelancer-PCH.h"

PROC_DECLARE(0x466940, internal_466940, public_466940);
extern "C" NAKED register_t __cdecl internal_466940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [eax]
        sub eax, dword ptr ds : [ecx]
        ret 
        UNREACHABLE_TRAP(0x466940)
    }
}
