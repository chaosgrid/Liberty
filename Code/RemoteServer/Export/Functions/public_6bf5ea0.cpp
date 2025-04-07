#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5ea0, internal_6bf5ea0, public_6bf5ea0);
extern "C" NAKED register_t __cdecl internal_6bf5ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e10c]
        mov dword ptr ds : [public_6c13dd4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5ea0)
    }
}
