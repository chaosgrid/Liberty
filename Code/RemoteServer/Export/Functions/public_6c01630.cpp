#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01630, internal_6c01630, public_6c01630);
extern "C" NAKED register_t __cdecl internal_6c01630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e444]
        mov dword ptr ds : [public_6c140e8], eax
        ret 
        UNREACHABLE_TRAP(0x6c01630)
    }
}
