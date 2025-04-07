#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209b50, internal_6209b50, public_6209b50);
extern "C" NAKED register_t __cdecl internal_6209b50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_625582c
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6209b50)
    }
}
