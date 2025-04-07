#include "Content-PCH.h"

PROC_DECLARE(0x6f4bd00, internal_6f4bd00, public_6f4bd00);
extern "C" NAKED register_t __cdecl internal_6f4bd00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x220]
        dec eax
        mov dword ptr ds : [ecx+0x220], eax
        ret 
        UNREACHABLE_TRAP(0x6f4bd00)
    }
}
