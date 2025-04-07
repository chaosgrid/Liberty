#include "FLServer-PCH.h"

PROC_DECLARE(0x401150, internal_401150, public_401150);
extern "C" NAKED register_t __cdecl internal_401150()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x401150)
    }
}
