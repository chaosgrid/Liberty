#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd590, internal_6bfd590, public_6bfd590);
extern "C" NAKED register_t __cdecl internal_6bfd590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e364]
        mov dword ptr ds : [public_6c13fb4], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd590)
    }
}
