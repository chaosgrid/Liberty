#include "Alchemy-PCH.h"

PROC_DECLARE(0x6227110, internal_6227110, public_6227110);
extern "C" NAKED register_t __cdecl internal_6227110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0xC]
        UNREACHABLE_TRAP(0x6227110)
    }
}
