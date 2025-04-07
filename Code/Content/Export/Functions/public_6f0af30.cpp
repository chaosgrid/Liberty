#include "Content-PCH.h"

PROC_DECLARE(0x6f0af30, internal_6f0af30, public_6f0af30);
extern "C" NAKED register_t __cdecl internal_6f0af30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        ret 8
        UNREACHABLE_TRAP(0x6f0af30)
    }
}
