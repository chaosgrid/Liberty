#include "Common-PCH.h"

PROC_DECLARE(0x634ac90, internal_634ac90, public_634ac90);
extern "C" NAKED register_t __cdecl internal_634ac90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x634ac90)
    }
}
