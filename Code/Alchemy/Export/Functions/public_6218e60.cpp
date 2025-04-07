#include "Alchemy-PCH.h"

PROC_DECLARE(0x6218e60, internal_6218e60, public_6218e60);
extern "C" NAKED register_t __cdecl internal_6218e60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x6218e60)
    }
}
