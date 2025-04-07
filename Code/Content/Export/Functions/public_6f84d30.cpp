#include "Content-PCH.h"

PROC_DECLARE(0x6f84d30, internal_6f84d30, public_6f84d30);
extern "C" NAKED register_t __cdecl internal_6f84d30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6f84d30)
    }
}
