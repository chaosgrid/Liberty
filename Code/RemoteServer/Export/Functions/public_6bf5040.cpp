#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5040, internal_6bf5040, public_6bf5040);
extern "C" NAKED register_t __cdecl internal_6bf5040()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0a8]
        mov dword ptr ds : [public_6c13d78], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5040)
    }
}
