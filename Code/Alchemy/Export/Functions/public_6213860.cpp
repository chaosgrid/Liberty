#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213860, internal_6213860, public_6213860);
extern "C" NAKED register_t __cdecl internal_6213860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x6213860)
    }
}
