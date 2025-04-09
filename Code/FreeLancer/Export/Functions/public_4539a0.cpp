#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4539a0, internal_4539a0, public_4539a0);
extern "C" NAKED register_t __cdecl internal_4539a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cdadc]
        mov dword ptr ds : [public_66d28c], eax
        ret 
        UNREACHABLE_TRAP(0x4539a0)
    }
}
