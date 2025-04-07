#include "Content-PCH.h"

PROC_DECLARE(0x6f70570, internal_6f70570, public_6f70570);
extern "C" NAKED register_t __cdecl internal_6f70570()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fbbd7c]
        mov dword ptr ds : [public_6fd1d50], eax
        ret 
        UNREACHABLE_TRAP(0x6f70570)
    }
}
