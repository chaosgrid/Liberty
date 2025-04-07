#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63170, internal_6b63170, public_6b63170);
extern "C" NAKED register_t __cdecl internal_6b63170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e938]
        mov dword ptr ds : [public_6b744a4], eax
        ret 
        UNREACHABLE_TRAP(0x6b63170)
    }
}
