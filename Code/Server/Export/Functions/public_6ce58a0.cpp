#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce58b1 _public_6ce58b1
#define public_6ce58c6 _public_6ce58c6
#define public_6ce58cf _public_6ce58cf
#define public_6ce58d3 _public_6ce58d3
#define public_6ce58e8 _public_6ce58e8
#define public_6ce58f9 _public_6ce58f9
#define public_6ce5910 _public_6ce5910

PROC_DECLARE(0x6ce58a0, internal_6ce58a0, public_6ce58a0);
extern "C" NAKED register_t __cdecl internal_6ce58a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d64f2c
        je public_6ce58d3
        public_6ce58b1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6ce58c6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6ce58cf
        public_6ce58c6 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce58cf : nop
        test edi, edi
        jne public_6ce58b1
        public_6ce58d3 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6ce58f9
        public_6ce58e8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6ce58e8
        public_6ce58f9 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6ce5910
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ce5910 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce58a0)
    }
}

#undef public_6ce58b1
#undef public_6ce58c6
#undef public_6ce58cf
#undef public_6ce58d3
#undef public_6ce58e8
#undef public_6ce58f9
#undef public_6ce5910
