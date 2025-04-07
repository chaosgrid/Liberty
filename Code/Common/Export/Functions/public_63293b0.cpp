#include "Common-PCH.h"

PROC_DECLARE(0x63293b0, internal_63293b0, public_63293b0);
extern "C" NAKED register_t __cdecl internal_63293b0()
{
    __asm
    {
        push esi
        mov eax, ecx
        mov esi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        push eax
        call dword ptr ds : [edx+0xC]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x63293b0)
    }
}
