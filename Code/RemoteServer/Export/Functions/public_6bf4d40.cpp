#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf4d40, internal_6bf4d40, public_6bf4d40);
extern "C" NAKED register_t __cdecl internal_6bf4d40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e080]
        mov dword ptr ds : [public_6c13d64], eax
        ret 
        UNREACHABLE_TRAP(0x6bf4d40)
    }
}
