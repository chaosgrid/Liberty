#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfddb0, internal_6bfddb0, public_6bfddb0);
extern "C" NAKED register_t __cdecl internal_6bfddb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e384]
        mov dword ptr ds : [public_6c13fe8], eax
        ret 
        UNREACHABLE_TRAP(0x6bfddb0)
    }
}
