#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63160, internal_6b63160, public_6b63160);
extern "C" NAKED register_t __cdecl internal_6b63160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e938]
        mov dword ptr ds : [public_6b744a0], eax
        ret 
        UNREACHABLE_TRAP(0x6b63160)
    }
}
