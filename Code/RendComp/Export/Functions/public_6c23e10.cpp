#include "RendComp-PCH.h"

PROC_DECLARE(0x6c23e10, internal_6c23e10, public_6c23e10);
extern "C" NAKED register_t __cdecl internal_6c23e10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x21C]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push esi
        add ecx, 0x14
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x6c23e10)
    }
}
