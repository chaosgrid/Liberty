#include "Alchemy-PCH.h"

PROC_DECLARE(0x62270d0, internal_62270d0, public_62270d0);
extern "C" NAKED register_t __cdecl internal_62270d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x14]
        UNREACHABLE_TRAP(0x62270d0)
    }
}
