#include "Content-PCH.h"

PROC_DECLARE(0x6eacd40, internal_6eacd40, public_6eacd40);
extern "C" NAKED register_t __cdecl internal_6eacd40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        inc eax
        mov dword ptr ds : [ecx+4], eax
        ret 
        UNREACHABLE_TRAP(0x6eacd40)
    }
}
