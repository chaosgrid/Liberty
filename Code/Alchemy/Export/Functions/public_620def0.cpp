#include "Alchemy-PCH.h"

PROC_DECLARE(0x620def0, internal_620def0, public_620def0);
extern "C" NAKED register_t __cdecl internal_620def0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x620def0)
    }
}
