#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd2c0, internal_6bfd2c0, public_6bfd2c0);
extern "C" NAKED register_t __cdecl internal_6bfd2c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e358]
        mov dword ptr ds : [public_6c13fa4], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd2c0)
    }
}
