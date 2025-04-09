#include "FreeLancer-PCH.h"

PROC_DECLARE(0x401010, internal_401010, public_401010);
extern "C" NAKED register_t __cdecl internal_401010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c732c]
        mov dword ptr ds : [public_616458], eax
        ret 
        UNREACHABLE_TRAP(0x401010)
    }
}
