#include "FreeLancer-PCH.h"

PROC_DECLARE(0x534860, internal_534860, public_534860);
extern "C" NAKED register_t __cdecl internal_534860()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x1C8]
        UNREACHABLE_TRAP(0x534860)
    }
}
