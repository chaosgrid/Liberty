#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8040, internal_6bf8040, public_6bf8040);
extern "C" NAKED register_t __cdecl internal_6bf8040()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e1f4]
        mov dword ptr ds : [public_6c13e88], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8040)
    }
}
