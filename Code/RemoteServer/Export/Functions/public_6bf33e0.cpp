#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf33e0, internal_6bf33e0, public_6bf33e0);
extern "C" NAKED register_t __cdecl internal_6bf33e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e02c]
        mov dword ptr ds : [public_6c13d18], eax
        ret 
        UNREACHABLE_TRAP(0x6bf33e0)
    }
}
