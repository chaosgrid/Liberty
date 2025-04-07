#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26d50);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

PROC_DECLARE(0x6c26d50, internal_6c26d50, public_6c26d50);
extern "C" NAKED register_t __cdecl internal_6c26d50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c34ea0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c26d50)
    }
}
