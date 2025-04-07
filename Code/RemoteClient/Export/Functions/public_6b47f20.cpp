#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b47f20, internal_6b47f20, public_6b47f20);
extern "C" NAKED register_t __cdecl internal_6b47f20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c31c]
        mov dword ptr ds : [public_6b73ef4], eax
        ret 
        UNREACHABLE_TRAP(0x6b47f20)
    }
}
