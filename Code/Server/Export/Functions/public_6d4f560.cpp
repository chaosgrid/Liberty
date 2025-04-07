#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f560);
CLANG_FORWARD_PROC_SYMBOL(public_6d4faf0);

PROC_DECLARE(0x6d4f560, internal_6d4f560, public_6d4f560);
extern "C" NAKED register_t __cdecl internal_6d4f560()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d4faf0
        mov dword ptr ds : [esi+0x320], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4f560)
    }
}
