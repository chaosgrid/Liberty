#include "Content-PCH.h"

PROC_DECLARE(0x6f4bd10, internal_6f4bd10, public_6f4bd10);
extern "C" NAKED register_t __cdecl internal_6f4bd10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x220]
        inc eax
        mov dword ptr ds : [ecx+0x220], eax
        ret 
        UNREACHABLE_TRAP(0x6f4bd10)
    }
}
