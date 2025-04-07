#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212360, internal_6212360, public_6212360);
extern "C" NAKED register_t __cdecl internal_6212360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x1C], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6212360)
    }
}
