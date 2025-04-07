#include "FLServer-PCH.h"

PROC_DECLARE(0x403990, internal_403990, public_403990);
extern "C" NAKED register_t __cdecl internal_403990()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x60]
        UNREACHABLE_TRAP(0x403990)
    }
}
