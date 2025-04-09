#include "FreeLancer-PCH.h"

PROC_DECLARE(0x568fb0, internal_568fb0, public_568fb0);
extern "C" NAKED register_t __cdecl internal_568fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+0x234]
        mov ecx, dword ptr ds : [ecx+0x234]
        sub ecx, edx
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x568fb0)
    }
}
