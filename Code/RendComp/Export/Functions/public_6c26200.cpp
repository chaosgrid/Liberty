#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26200);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

PROC_DECLARE(0x6c26200, internal_6c26200, public_6c26200);
extern "C" NAKED register_t __cdecl internal_6c26200()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x204]
        push eax
        call public_6c34ea0
        add esp, 4
        mov dword ptr ds : [esi+0x204], 0
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c26200)
    }
}
