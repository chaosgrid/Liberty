#include "Content-PCH.h"

PROC_DECLARE(0x6f07140, internal_6f07140, public_6f07140);
extern "C" NAKED register_t __cdecl internal_6f07140()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        ret 
        UNREACHABLE_TRAP(0x6f07140)
    }
}
