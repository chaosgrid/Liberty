#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdc540, internal_6bdc540, public_6bdc540);
extern "C" NAKED register_t __cdecl internal_6bdc540()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb50]
        mov dword ptr ds : [public_6c13aa8], eax
        ret 
        UNREACHABLE_TRAP(0x6bdc540)
    }
}
