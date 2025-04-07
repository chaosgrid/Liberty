#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6800, internal_6bf6800, public_6bf6800);
extern "C" NAKED register_t __cdecl internal_6bf6800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e148]
        mov dword ptr ds : [public_6c13e18], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6800)
    }
}
