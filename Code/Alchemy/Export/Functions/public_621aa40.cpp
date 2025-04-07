#include "Alchemy-PCH.h"

PROC_DECLARE(0x621aa40, internal_621aa40, public_621aa40);
extern "C" NAKED register_t __cdecl internal_621aa40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0xC]
        UNREACHABLE_TRAP(0x621aa40)
    }
}
