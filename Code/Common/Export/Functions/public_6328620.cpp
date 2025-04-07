#include "Common-PCH.h"

PROC_DECLARE(0x6328620, internal_6328620, public_6328620);
extern "C" NAKED register_t __cdecl internal_6328620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        ret 4
        UNREACHABLE_TRAP(0x6328620)
    }
}
