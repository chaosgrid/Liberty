#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a3c);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a42);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c107b _public_65c107b

PROC_DECLARE(0x65c1050, internal_65c1050, public_65c1050);
extern "C" NAKED register_t __cdecl internal_65c1050()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+4]
        push eax
        mov dword ptr ds : [esi], offset public_65c713c
        call public_65c6a42
        lea ecx, ds:[esi+0x3C]
        push ecx
        call public_65c6a3c
        test byte ptr ss : [esp+8], 1
        je public_65c107b
        push esi
        call public_65c6a60
        add esp, 4
        public_65c107b : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65c1050)
    }
}

#undef public_65c107b
