#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d868c0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d868cf _public_6d868cf

PROC_DECLARE(0x6d868c0, internal_6d868c0, public_6d868c0);
extern "C" NAKED register_t __cdecl internal_6d868c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        shl eax, 2
        test eax, eax
        jge public_6d868cf
        xor eax, eax
        public_6d868cf : nop
        push eax
        call public_6db1f8a
        add esp, 4
        mov dword ptr ds : [esi+0x24], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d868c0)
    }
}

#undef public_6d868cf
