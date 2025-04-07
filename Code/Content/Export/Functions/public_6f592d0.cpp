#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f592d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f592d0, internal_6f592d0, public_6f592d0);
extern "C" NAKED register_t __cdecl internal_6f592d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f592d0)
    }
}
