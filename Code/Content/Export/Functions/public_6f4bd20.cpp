#include "Content-PCH.h"

PROC_DECLARE(0x6f4bd20, internal_6f4bd20, public_6f4bd20);
extern "C" NAKED register_t __cdecl internal_6f4bd20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x220]
        ret 
        UNREACHABLE_TRAP(0x6f4bd20)
    }
}
