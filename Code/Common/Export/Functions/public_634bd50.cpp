#include "Common-PCH.h"

PROC_DECLARE(0x634bd50, internal_634bd50, public_634bd50);
extern "C" NAKED register_t __cdecl internal_634bd50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x40]
        push esi
        mov esi, dword ptr ds : [eax+0x44]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        fadd dword ptr ss : [esp+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634bd50)
    }
}
