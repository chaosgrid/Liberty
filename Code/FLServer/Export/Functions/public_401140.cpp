#include "FLServer-PCH.h"

PROC_DECLARE(0x401140, internal_401140, public_401140);
extern "C" NAKED register_t __cdecl internal_401140()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x401140)
    }
}
