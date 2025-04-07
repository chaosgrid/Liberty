#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b140, internal_6b5b140, public_6b5b140);
extern "C" NAKED register_t __cdecl internal_6b5b140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e604]
        mov dword ptr ds : [public_6b741ec], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b140)
    }
}
