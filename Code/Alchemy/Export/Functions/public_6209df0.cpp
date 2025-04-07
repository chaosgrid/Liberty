#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209df0, internal_6209df0, public_6209df0);
extern "C" NAKED register_t __cdecl internal_6209df0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6209df0)
    }
}
