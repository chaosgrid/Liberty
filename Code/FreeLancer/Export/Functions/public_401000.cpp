#include "FreeLancer-PCH.h"

PROC_DECLARE(0x401000, internal_401000, public_401000);
extern "C" NAKED register_t __cdecl internal_401000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c732c]
        mov dword ptr ds : [public_61645c], eax
        ret 
        UNREACHABLE_TRAP(0x401000)
    }
}
