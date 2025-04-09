#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457e20);

PROC_DECLARE(0x457e20, internal_457e20, public_457e20);
extern "C" NAKED register_t __cdecl internal_457e20()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        ret 
        UNREACHABLE_TRAP(0x457e20)
    }
}
