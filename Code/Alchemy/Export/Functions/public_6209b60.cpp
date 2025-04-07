#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209b60, internal_6209b60, public_6209b60);
extern "C" NAKED register_t __cdecl internal_6209b60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6255838
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6209b60)
    }
}
