#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63322f0);

#define public_6332310 _public_6332310

PROC_DECLARE(0x63322f0, internal_63322f0, public_63322f0);
extern "C" NAKED register_t __cdecl internal_63322f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6332310
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        public_6332310 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63322f0)
    }
}

#undef public_6332310
