#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309b80);

PROC_DECLARE(0x6309b80, internal_6309b80, public_6309b80);
extern "C" NAKED register_t __cdecl internal_6309b80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fcf0c]
        mov dword ptr ds : [ecx+8], eax
        ret 
        UNREACHABLE_TRAP(0x6309b80)
    }
}
