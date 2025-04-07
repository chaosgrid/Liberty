#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7610, internal_6bf7610, public_6bf7610);
extern "C" NAKED register_t __cdecl internal_6bf7610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e178]
        mov dword ptr ds : [public_6c13e48], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7610)
    }
}
