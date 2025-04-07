#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2fb0, internal_6bf2fb0, public_6bf2fb0);
extern "C" NAKED register_t __cdecl internal_6bf2fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e008]
        mov dword ptr ds : [public_6c13d04], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2fb0)
    }
}
