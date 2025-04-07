#include "Alchemy-PCH.h"

PROC_DECLARE(0x62032c0, internal_62032c0, public_62032c0);
extern "C" NAKED register_t __cdecl internal_62032c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 1
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62032c0)
    }
}
