#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5800, internal_6bf5800, public_6bf5800);
extern "C" NAKED register_t __cdecl internal_6bf5800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0e8]
        mov dword ptr ds : [public_6c13db8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5800)
    }
}
