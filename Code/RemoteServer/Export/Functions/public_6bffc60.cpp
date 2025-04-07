#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bffc60, internal_6bffc60, public_6bffc60);
extern "C" NAKED register_t __cdecl internal_6bffc60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3f4]
        mov dword ptr ds : [public_6c14074], eax
        ret 
        UNREACHABLE_TRAP(0x6bffc60)
    }
}
