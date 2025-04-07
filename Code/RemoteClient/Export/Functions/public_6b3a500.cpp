#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3a500, internal_6b3a500, public_6b3a500);
extern "C" NAKED register_t __cdecl internal_6b3a500()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        ret 
        UNREACHABLE_TRAP(0x6b3a500)
    }
}
