#include "Server-PCH.h"

PROC_DECLARE(0x6d30510, internal_6d30510, public_6d30510);
extern "C" NAKED register_t __cdecl internal_6d30510()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x24]
        UNREACHABLE_TRAP(0x6d30510)
    }
}
