#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf4730, internal_6bf4730, public_6bf4730);
extern "C" NAKED register_t __cdecl internal_6bf4730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e06c]
        mov dword ptr ds : [public_6c13d5c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf4730)
    }
}
