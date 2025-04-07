#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd290, internal_6bfd290, public_6bfd290);
extern "C" NAKED register_t __cdecl internal_6bfd290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e31c]
        mov dword ptr ds : [public_6c13f94], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd290)
    }
}
