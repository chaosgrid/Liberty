#include "Shading-PCH.h"

PROC_DECLARE(0x6ec7290, internal_6ec7290, public_6ec7290);
extern "C" NAKED register_t __cdecl internal_6ec7290()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+8], eax
        ret 
        UNREACHABLE_TRAP(0x6ec7290)
    }
}
