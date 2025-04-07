#include "Shading-PCH.h"

PROC_DECLARE(0x6eb2b30, internal_6eb2b30, public_6eb2b30);
extern "C" NAKED register_t __cdecl internal_6eb2b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0xA2
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6eb2b30)
    }
}
