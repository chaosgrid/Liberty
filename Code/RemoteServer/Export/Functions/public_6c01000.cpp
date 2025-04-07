#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01000, internal_6c01000, public_6c01000);
extern "C" NAKED register_t __cdecl internal_6c01000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e424]
        mov dword ptr ds : [public_6c140b4], eax
        ret 
        UNREACHABLE_TRAP(0x6c01000)
    }
}
