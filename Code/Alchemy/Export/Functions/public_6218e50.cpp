#include "Alchemy-PCH.h"

PROC_DECLARE(0x6218e50, internal_6218e50, public_6218e50);
extern "C" NAKED register_t __cdecl internal_6218e50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6218e50)
    }
}
