#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c4c0);
CLANG_FORWARD_PROC_SYMBOL(public_57b260);

PROC_DECLARE(0x46c4c0, internal_46c4c0, public_46c4c0);
extern "C" NAKED register_t __cdecl internal_46c4c0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], offset public_5cffc4
        mov dword ptr ds : [ecx+0x7C], offset public_5cffb8
        mov dword ptr ds : [ecx+0x49C], eax
        mov dword ptr ds : [ecx+0x498], eax
        jmp public_57b260
        UNREACHABLE_TRAP(0x46c4c0)
    }
}
