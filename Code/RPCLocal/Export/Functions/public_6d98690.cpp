#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d98690);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d986a9 _public_6d986a9

PROC_DECLARE(0x6d98690, internal_6d98690, public_6d98690);
extern "C" NAKED register_t __cdecl internal_6d98690()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6db3ff8
        je public_6d986a9
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d986a9 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d98690)
    }
}

#undef public_6d986a9
