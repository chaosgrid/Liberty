#include "Common-PCH.h"

PROC_DECLARE(0x631da40, internal_631da40, public_631da40);
extern "C" NAKED register_t __cdecl internal_631da40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_640180c]
        push eax
        call dword ptr ds : [public_63990cc]
        ret 
        UNREACHABLE_TRAP(0x631da40)
    }
}
