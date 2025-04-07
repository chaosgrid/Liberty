#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ea80, internal_620ea80, public_620ea80);
extern "C" NAKED register_t __cdecl internal_620ea80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x620ea80)
    }
}
