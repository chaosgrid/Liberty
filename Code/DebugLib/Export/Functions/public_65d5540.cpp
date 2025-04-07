#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5540);

PROC_DECLARE(0x65d5540, internal_65d5540, public_65d5540);
extern "C" NAKED register_t __cdecl internal_65d5540()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+4], 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x100C], eax
        mov dword ptr ds : [ecx+0x1008], eax
        mov dword ptr ds : [ecx+0x2014], eax
        mov dword ptr ds : [ecx+0x2010], eax
        ret 
        UNREACHABLE_TRAP(0x65d5540)
    }
}
