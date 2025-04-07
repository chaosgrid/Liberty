#include "FLServer-PCH.h"

PROC_DECLARE(0x4183b0, internal_4183b0, public_4183b0);
extern "C" NAKED register_t __cdecl internal_4183b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x60]
        UNREACHABLE_TRAP(0x4183b0)
    }
}
