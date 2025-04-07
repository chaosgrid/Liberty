#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b42f30, internal_6b42f30, public_6b42f30);
extern "C" NAKED register_t __cdecl internal_6b42f30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6b42f30)
    }
}
