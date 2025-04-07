#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9480, internal_6bd9480, public_6bd9480);
extern "C" NAKED register_t __cdecl internal_6bd9480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x7C]
        ret 
        UNREACHABLE_TRAP(0x6bd9480)
    }
}
