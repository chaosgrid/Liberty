#include "FLServer-PCH.h"

PROC_DECLARE(0x403930, internal_403930, public_403930);
extern "C" NAKED register_t __cdecl internal_403930()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xCC]
        UNREACHABLE_TRAP(0x403930)
    }
}
