#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f6a0);

PROC_DECLARE(0x661f6a0, internal_661f6a0, public_661f6a0);
extern "C" NAKED register_t __cdecl internal_661f6a0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_662b168], 0x38
        mov dword ptr ds : [public_662b16c], eax
        mov dword ptr ds : [public_662b170], 0x40
        mov dword ptr ds : [public_662b174], eax
        ret 
        UNREACHABLE_TRAP(0x661f6a0)
    }
}
