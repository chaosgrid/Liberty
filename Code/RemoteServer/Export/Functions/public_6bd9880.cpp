#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9880, internal_6bd9880, public_6bd9880);
extern "C" NAKED register_t __cdecl internal_6bd9880()
{
    __asm
    {
        mov eax, offset public_6c13a08
        ret 
        UNREACHABLE_TRAP(0x6bd9880)
    }
}
