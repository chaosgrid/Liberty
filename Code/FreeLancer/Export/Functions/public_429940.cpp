#include "Freelancer-PCH.h"

PROC_DECLARE(0x429940, internal_429940, public_429940);
extern "C" NAKED register_t __cdecl internal_429940()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax]
        UNREACHABLE_TRAP(0x429940)
    }
}
