#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6f00, internal_6bd6f00, public_6bd6f00);
extern "C" NAKED register_t __cdecl internal_6bd6f00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b7b0]
        mov dword ptr ds : [public_6c139dc], eax
        ret 
        UNREACHABLE_TRAP(0x6bd6f00)
    }
}
