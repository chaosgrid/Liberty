#include "Alchemy-PCH.h"

PROC_DECLARE(0x62024d0, internal_62024d0, public_62024d0);
extern "C" NAKED register_t __cdecl internal_62024d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6257910], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62024d0)
    }
}
