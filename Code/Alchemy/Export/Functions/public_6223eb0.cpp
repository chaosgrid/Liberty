#include "Alchemy-PCH.h"

PROC_DECLARE(0x6223eb0, internal_6223eb0, public_6223eb0);
extern "C" NAKED register_t __cdecl internal_6223eb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x6223eb0)
    }
}
