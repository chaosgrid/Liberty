#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b45460, internal_6b45460, public_6b45460);
extern "C" NAKED register_t __cdecl internal_6b45460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c2bc]
        mov dword ptr ds : [public_6b73ec0], eax
        ret 
        UNREACHABLE_TRAP(0x6b45460)
    }
}
