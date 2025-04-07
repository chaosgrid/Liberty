#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63345a0);

PROC_DECLARE(0x63345a0, internal_63345a0, public_63345a0);
extern "C" NAKED register_t __cdecl internal_63345a0()
{
    __asm
    {
        mov eax, ecx
        mov word ptr ds : [eax], 0xFFF0
        ret 
        UNREACHABLE_TRAP(0x63345a0)
    }
}
