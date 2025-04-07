#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6f20, internal_6bd6f20, public_6bd6f20);
extern "C" NAKED register_t __cdecl internal_6bd6f20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b7b4]
        mov dword ptr ds : [public_6c139d8], eax
        ret 
        UNREACHABLE_TRAP(0x6bd6f20)
    }
}
