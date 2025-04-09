#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51c1e0, internal_51c1e0, public_51c1e0);
extern "C" NAKED register_t __cdecl internal_51c1e0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [edx+0x10]
        ret 4
        UNREACHABLE_TRAP(0x51c1e0)
    }
}
