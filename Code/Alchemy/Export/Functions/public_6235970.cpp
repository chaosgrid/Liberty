#include "Alchemy-PCH.h"

PROC_DECLARE(0x6235970, internal_6235970, public_6235970);
extern "C" NAKED register_t __cdecl internal_6235970()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0xC]
        UNREACHABLE_TRAP(0x6235970)
    }
}
