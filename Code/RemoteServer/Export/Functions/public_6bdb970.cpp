#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdb970, internal_6bdb970, public_6bdb970);
extern "C" NAKED register_t __cdecl internal_6bdb970()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb14]
        mov dword ptr ds : [public_6c13a80], eax
        ret 
        UNREACHABLE_TRAP(0x6bdb970)
    }
}
