#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9360, internal_6bf9360, public_6bf9360);
extern "C" NAKED register_t __cdecl internal_6bf9360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e268]
        mov dword ptr ds : [public_6c13ef4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9360)
    }
}
