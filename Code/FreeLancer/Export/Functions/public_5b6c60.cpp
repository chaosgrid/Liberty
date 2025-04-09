#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad350);
CLANG_FORWARD_PROC_SYMBOL(public_5b6c60);

PROC_DECLARE(0x5b6c60, internal_5b6c60, public_5b6c60);
/* CHUNK of public_5a9970 */
extern "C" NAKED register_t __cdecl internal_5b6c60()
{
    __asm
    {
        push ecx
        add ecx, 4
        call public_5ad350
        mov eax, dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x5b6c60)
    }
}
