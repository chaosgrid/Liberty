#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf23e0, internal_6bf23e0, public_6bf23e0);
extern "C" NAKED register_t __cdecl internal_6bf23e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfd4]
        mov dword ptr ds : [public_6c13cd8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf23e0)
    }
}
