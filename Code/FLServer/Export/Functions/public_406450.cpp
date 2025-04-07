#include "FLServer-PCH.h"

PROC_DECLARE(0x406450, internal_406450, public_406450);
extern "C" NAKED register_t __cdecl internal_406450()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xCC]
        UNREACHABLE_TRAP(0x406450)
    }
}
