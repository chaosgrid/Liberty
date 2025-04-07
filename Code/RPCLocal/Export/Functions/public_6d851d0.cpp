#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d851d0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

PROC_DECLARE(0x6d851d0, internal_6d851d0, public_6d851d0);
extern "C" NAKED register_t __cdecl internal_6d851d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6db1dc2
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d851d0)
    }
}
