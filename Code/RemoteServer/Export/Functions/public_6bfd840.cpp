#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd840, internal_6bfd840, public_6bfd840);
extern "C" NAKED register_t __cdecl internal_6bfd840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e36c]
        mov dword ptr ds : [public_6c13fcc], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd840)
    }
}
