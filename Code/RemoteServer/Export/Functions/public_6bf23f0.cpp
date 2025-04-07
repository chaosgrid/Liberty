#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf23f0, internal_6bf23f0, public_6bf23f0);
extern "C" NAKED register_t __cdecl internal_6bf23f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfd4]
        mov dword ptr ds : [public_6c13cdc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf23f0)
    }
}
