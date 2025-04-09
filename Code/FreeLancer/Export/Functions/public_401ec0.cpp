#include "FreeLancer-PCH.h"

PROC_DECLARE(0x401ec0, internal_401ec0, public_401ec0);
extern "C" NAKED register_t __cdecl internal_401ec0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c7408]
        mov dword ptr ds : [public_616464], eax
        ret 
        UNREACHABLE_TRAP(0x401ec0)
    }
}
