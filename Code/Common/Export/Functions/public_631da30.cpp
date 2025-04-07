#include "Common-PCH.h"

PROC_DECLARE(0x631da30, internal_631da30, public_631da30);
extern "C" NAKED register_t __cdecl internal_631da30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6401810]
        push eax
        call dword ptr ds : [public_63990cc]
        ret 
        UNREACHABLE_TRAP(0x631da30)
    }
}
