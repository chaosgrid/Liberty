#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c3d0, internal_621c3d0, public_621c3d0);
extern "C" NAKED register_t __cdecl internal_621c3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0xC]
        UNREACHABLE_TRAP(0x621c3d0)
    }
}
