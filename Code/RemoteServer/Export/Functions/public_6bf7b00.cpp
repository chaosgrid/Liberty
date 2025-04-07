#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7b00, internal_6bf7b00, public_6bf7b00);
extern "C" NAKED register_t __cdecl internal_6bf7b00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e188]
        mov dword ptr ds : [public_6c13e5c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7b00)
    }
}
