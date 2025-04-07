#include "Common-PCH.h"

PROC_DECLARE(0x627caf0, internal_627caf0, public_627caf0);
extern "C" NAKED register_t __cdecl internal_627caf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        ret 
        UNREACHABLE_TRAP(0x627caf0)
    }
}
