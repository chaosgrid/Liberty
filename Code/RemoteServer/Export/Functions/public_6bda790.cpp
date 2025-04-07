#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bda790, internal_6bda790, public_6bda790);
extern "C" NAKED register_t __cdecl internal_6bda790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bad0]
        mov dword ptr ds : [public_6c13a64], eax
        ret 
        UNREACHABLE_TRAP(0x6bda790)
    }
}
