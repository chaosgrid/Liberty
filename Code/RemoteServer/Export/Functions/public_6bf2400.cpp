#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2400, internal_6bf2400, public_6bf2400);
extern "C" NAKED register_t __cdecl internal_6bf2400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfd8]
        mov dword ptr ds : [public_6c13cd4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2400)
    }
}
