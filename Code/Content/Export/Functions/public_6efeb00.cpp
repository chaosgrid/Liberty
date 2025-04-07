#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efeb00);

PROC_DECLARE(0x6efeb00, internal_6efeb00, public_6efeb00);
extern "C" NAKED register_t __cdecl internal_6efeb00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fcf42c]
        inc eax
        mov dword ptr ds : [public_6fcf42c], eax
        ret 
        UNREACHABLE_TRAP(0x6efeb00)
    }
}
