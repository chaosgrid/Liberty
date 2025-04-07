#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6befe30, internal_6befe30, public_6befe30);
extern "C" NAKED register_t __cdecl internal_6befe30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df54]
        mov dword ptr ds : [public_6c13c5c], eax
        ret 
        UNREACHABLE_TRAP(0x6befe30)
    }
}
