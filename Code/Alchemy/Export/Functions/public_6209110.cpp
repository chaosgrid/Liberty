#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209110, internal_6209110, public_6209110);
extern "C" NAKED register_t __cdecl internal_6209110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6209110)
    }
}
