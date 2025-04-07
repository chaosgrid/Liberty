#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6f10, internal_6bd6f10, public_6bd6f10);
extern "C" NAKED register_t __cdecl internal_6bd6f10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b7b0]
        mov dword ptr ds : [public_6c139e8], eax
        ret 
        UNREACHABLE_TRAP(0x6bd6f10)
    }
}
