#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b2b70, internal_4b2b70, public_4b2b70);
extern "C" NAKED register_t __cdecl internal_4b2b70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d51a8]
        mov dword ptr ds : [public_672244], eax
        ret 
        UNREACHABLE_TRAP(0x4b2b70)
    }
}
