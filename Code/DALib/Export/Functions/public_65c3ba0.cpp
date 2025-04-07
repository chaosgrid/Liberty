#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c54c0);

PROC_DECLARE(0x65c3ba0, internal_65c3ba0, public_65c3ba0);
extern "C" NAKED register_t __cdecl internal_65c3ba0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call public_65c54c0
        add eax, dword ptr ds : [esi+0x3C]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c3ba0)
    }
}
