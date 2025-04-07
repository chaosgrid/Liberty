#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfdaf0, internal_6bfdaf0, public_6bfdaf0);
extern "C" NAKED register_t __cdecl internal_6bfdaf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e378]
        mov dword ptr ds : [public_6c13fd8], eax
        ret 
        UNREACHABLE_TRAP(0x6bfdaf0)
    }
}
