#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ea60, internal_620ea60, public_620ea60);
extern "C" NAKED register_t __cdecl internal_620ea60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 4
        UNREACHABLE_TRAP(0x620ea60)
    }
}
