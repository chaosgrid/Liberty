#include "FLServer-PCH.h"

PROC_DECLARE(0x418390, internal_418390, public_418390);
extern "C" NAKED register_t __cdecl internal_418390()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x60]
        UNREACHABLE_TRAP(0x418390)
    }
}
