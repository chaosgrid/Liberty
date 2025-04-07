#include "FLServer-PCH.h"

PROC_DECLARE(0x406360, internal_406360, public_406360);
extern "C" NAKED register_t __cdecl internal_406360()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x60]
        UNREACHABLE_TRAP(0x406360)
    }
}
