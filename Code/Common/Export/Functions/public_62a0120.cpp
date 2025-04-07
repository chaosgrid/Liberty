#include "Common-PCH.h"

PROC_DECLARE(0x62a0120, internal_62a0120, public_62a0120);
extern "C" NAKED register_t __cdecl internal_62a0120()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ax, word ptr ds : [eax+4]
        ret 
        UNREACHABLE_TRAP(0x62a0120)
    }
}
