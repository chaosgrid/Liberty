#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf72f0, internal_6bf72f0, public_6bf72f0);
extern "C" NAKED register_t __cdecl internal_6bf72f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e168]
        mov dword ptr ds : [public_6c13e38], eax
        ret 
        UNREACHABLE_TRAP(0x6bf72f0)
    }
}
