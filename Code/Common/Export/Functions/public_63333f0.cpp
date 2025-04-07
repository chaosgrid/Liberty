#include "Common-PCH.h"

PROC_DECLARE(0x63333f0, internal_63333f0, public_63333f0);
extern "C" NAKED register_t __cdecl internal_63333f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], offset public_63a49cc
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        ret 
        UNREACHABLE_TRAP(0x63333f0)
    }
}
