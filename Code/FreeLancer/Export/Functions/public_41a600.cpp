#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41a600, internal_41a600, public_41a600);
extern "C" NAKED register_t __cdecl internal_41a600()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_5c9034
        ret 4
        UNREACHABLE_TRAP(0x41a600)
    }
}
