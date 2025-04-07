#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240f40);

PROC_DECLARE(0x6240f40, internal_6240f40, public_6240f40);
/* CHUNK of public_6204ec0 */
extern "C" NAKED register_t __cdecl internal_6240f40()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax+8], cl
        mov word ptr ds : [eax+0xA], cx
        mov word ptr ds : [eax+0xC], cx
        ret 
        UNREACHABLE_TRAP(0x6240f40)
    }
}
