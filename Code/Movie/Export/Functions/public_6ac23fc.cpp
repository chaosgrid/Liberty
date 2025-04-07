#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac23fc);

PROC_DECLARE(0x6ac23fc, internal_6ac23fc, public_6ac23fc);
extern "C" NAKED register_t __cdecl internal_6ac23fc()
{
    __asm
    {
        mov eax, ecx
        and dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_6ada770
        mov dword ptr ds : [eax+4], 1
        ret 
        UNREACHABLE_TRAP(0x6ac23fc)
    }
}
