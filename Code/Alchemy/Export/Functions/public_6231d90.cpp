#include "Alchemy-PCH.h"

PROC_DECLARE(0x6231d90, internal_6231d90, public_6231d90);
extern "C" NAKED register_t __cdecl internal_6231d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6231d90)
    }
}
