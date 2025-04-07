#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209b40, internal_6209b40, public_6209b40);
extern "C" NAKED register_t __cdecl internal_6209b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_625581c
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6209b40)
    }
}
