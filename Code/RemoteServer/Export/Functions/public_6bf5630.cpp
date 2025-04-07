#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5630, internal_6bf5630, public_6bf5630);
extern "C" NAKED register_t __cdecl internal_6bf5630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0dc]
        mov dword ptr ds : [public_6c13da4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5630)
    }
}
