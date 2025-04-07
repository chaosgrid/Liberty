#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5480);

PROC_DECLARE(0x65c3b80, internal_65c3b80, public_65c3b80);
extern "C" NAKED register_t __cdecl internal_65c3b80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call public_65c5480
        add eax, dword ptr ds : [esi+0x40]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c3b80)
    }
}
