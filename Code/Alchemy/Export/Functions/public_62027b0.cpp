#include "Alchemy-PCH.h"

PROC_DECLARE(0x62027b0, internal_62027b0, public_62027b0);
extern "C" NAKED register_t __cdecl internal_62027b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62027b0)
    }
}
