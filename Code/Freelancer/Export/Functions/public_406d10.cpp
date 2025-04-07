#include "Freelancer-PCH.h"

PROC_DECLARE(0x406d10, internal_406d10, public_406d10);
extern "C" NAKED register_t __cdecl internal_406d10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x2C]
        UNREACHABLE_TRAP(0x406d10)
    }
}
