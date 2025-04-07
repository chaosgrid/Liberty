#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209790, internal_6209790, public_6209790);
extern "C" NAKED register_t __cdecl internal_6209790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6209790)
    }
}
