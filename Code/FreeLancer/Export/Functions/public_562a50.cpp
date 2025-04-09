#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562a50);

PROC_DECLARE(0x562a50, internal_562a50, public_562a50);
extern "C" NAKED register_t __cdecl internal_562a50()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        ret 
        UNREACHABLE_TRAP(0x562a50)
    }
}
