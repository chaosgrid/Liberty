#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02510, internal_6c02510, public_6c02510);
extern "C" NAKED register_t __cdecl internal_6c02510()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e474]
        mov dword ptr ds : [public_6c1412c], eax
        ret 
        UNREACHABLE_TRAP(0x6c02510)
    }
}
