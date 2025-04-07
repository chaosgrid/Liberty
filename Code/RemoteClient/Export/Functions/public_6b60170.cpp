#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60170, internal_6b60170, public_6b60170);
extern "C" NAKED register_t __cdecl internal_6b60170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7a4]
        mov dword ptr ds : [public_6b7435c], eax
        ret 
        UNREACHABLE_TRAP(0x6b60170)
    }
}
