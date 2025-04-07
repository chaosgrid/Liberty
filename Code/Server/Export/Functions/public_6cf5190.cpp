#include "Server-PCH.h"

PROC_DECLARE(0x6cf5190, internal_6cf5190, public_6cf5190);
extern "C" NAKED register_t __cdecl internal_6cf5190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6697c]
        mov dword ptr ds : [public_6d8d7ec], eax
        ret 
        UNREACHABLE_TRAP(0x6cf5190)
    }
}
