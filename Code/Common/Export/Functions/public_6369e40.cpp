#include "Common-PCH.h"

PROC_DECLARE(0x6369e40, internal_6369e40, public_6369e40);
extern "C" NAKED register_t __cdecl internal_6369e40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        ret 4
        UNREACHABLE_TRAP(0x6369e40)
    }
}
