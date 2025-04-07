#include "Alchemy-PCH.h"

PROC_DECLARE(0x62024c0, internal_62024c0, public_62024c0);
extern "C" NAKED register_t __cdecl internal_62024c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6257914], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62024c0)
    }
}
