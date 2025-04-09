#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41c190, internal_41c190, public_41c190);
extern "C" NAKED register_t __cdecl internal_41c190()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_5c9358
        ret 4
        UNREACHABLE_TRAP(0x41c190)
    }
}
