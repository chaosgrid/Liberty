#include "Content-PCH.h"

PROC_DECLARE(0x6f070f0, internal_6f070f0, public_6f070f0);
extern "C" NAKED register_t __cdecl internal_6f070f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        ret 8
        UNREACHABLE_TRAP(0x6f070f0)
    }
}
