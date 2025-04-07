#include "Server-PCH.h"

PROC_DECLARE(0x6ce6890, internal_6ce6890, public_6ce6890);
extern "C" NAKED register_t __cdecl internal_6ce6890()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x1EC]
        UNREACHABLE_TRAP(0x6ce6890)
    }
}
