#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9470, internal_6bd9470, public_6bd9470);
extern "C" NAKED register_t __cdecl internal_6bd9470()
{
    __asm
    {
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6bd9470)
    }
}
