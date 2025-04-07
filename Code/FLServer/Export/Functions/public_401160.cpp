#include "FLServer-PCH.h"

PROC_DECLARE(0x401160, internal_401160, public_401160);
extern "C" NAKED register_t __cdecl internal_401160()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        ret 
        UNREACHABLE_TRAP(0x401160)
    }
}
