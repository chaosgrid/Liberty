#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16d51 _public_6d16d51
#define public_6d16d66 _public_6d16d66
#define public_6d16d6f _public_6d16d6f
#define public_6d16d73 _public_6d16d73
#define public_6d16d88 _public_6d16d88
#define public_6d16d99 _public_6d16d99
#define public_6d16db0 _public_6d16db0

PROC_DECLARE(0x6d16d40, internal_6d16d40, public_6d16d40);
extern "C" NAKED register_t __cdecl internal_6d16d40()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d68348
        je public_6d16d73
        public_6d16d51 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16d66
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d16d6f
        public_6d16d66 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16d6f : nop
        test edi, edi
        jne public_6d16d51
        public_6d16d73 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d16d99
        public_6d16d88 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6d16d88
        public_6d16d99 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d16db0
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d16db0 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d16d40)
    }
}

#undef public_6d16d51
#undef public_6d16d66
#undef public_6d16d6f
#undef public_6d16d73
#undef public_6d16d88
#undef public_6d16d99
#undef public_6d16db0
