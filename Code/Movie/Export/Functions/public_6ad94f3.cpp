#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5c86);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5cd8);
CLANG_FORWARD_PROC_SYMBOL(public_6ad94f3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9524);

#define public_6ad9508 _public_6ad9508
#define public_6ad951f _public_6ad951f

PROC_DECLARE(0x6ad94f3, internal_6ad94f3, public_6ad94f3);
extern "C" NAKED register_t __cdecl internal_6ad94f3()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        or edi, 0xFFFFFFFF
        test byte ptr ds : [esi+0xC], 0x40
        je public_6ad9508
        and dword ptr ds : [esi+0xC], 0
        jmp public_6ad951f
        public_6ad9508 : nop
        push esi
        call public_6ad5c86
        push esi
        call public_6ad9524
        push esi
        mov edi, eax
        call public_6ad5cd8
        add esp, 0xC
        public_6ad951f : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad94f3)
    }
}

#undef public_6ad9508
#undef public_6ad951f
