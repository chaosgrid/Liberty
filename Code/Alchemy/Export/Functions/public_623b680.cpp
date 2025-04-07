#include "Alchemy-PCH.h"

PROC_DECLARE(0x623b680, internal_623b680, public_623b680);
extern "C" NAKED register_t __cdecl internal_623b680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6257b94], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623b680)
    }
}
