#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6beec90, internal_6beec90, public_6beec90);
extern "C" NAKED register_t __cdecl internal_6beec90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dec4]
        mov dword ptr ds : [public_6c13bf4], eax
        ret 
        UNREACHABLE_TRAP(0x6beec90)
    }
}
