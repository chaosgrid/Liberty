#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5690d0, internal_5690d0, public_5690d0);
extern "C" NAKED register_t __cdecl internal_5690d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+0x234]
        sub eax, dword ptr ds : [ecx+0x234]
        ret 
        UNREACHABLE_TRAP(0x5690d0)
    }
}
