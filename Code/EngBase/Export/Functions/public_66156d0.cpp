#include "EngBase-PCH.h"

PROC_DECLARE(0x66156d0, internal_66156d0, public_66156d0);
extern "C" NAKED register_t __cdecl internal_66156d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+0xC]
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x66156d0)
    }
}
