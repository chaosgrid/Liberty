#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334580);

PROC_DECLARE(0x6334580, internal_6334580, public_6334580);
extern "C" NAKED register_t __cdecl internal_6334580()
{
    __asm
    {
        mov eax, ecx
        mov word ptr ds : [eax], 0x21
        ret 
        UNREACHABLE_TRAP(0x6334580)
    }
}
