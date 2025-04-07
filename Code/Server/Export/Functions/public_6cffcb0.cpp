#include "Server-PCH.h"

PROC_DECLARE(0x6cffcb0, internal_6cffcb0, public_6cffcb0);
extern "C" NAKED register_t __cdecl internal_6cffcb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67008]
        mov dword ptr ds : [public_6d8d91c], eax
        ret 
        UNREACHABLE_TRAP(0x6cffcb0)
    }
}
