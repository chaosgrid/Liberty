#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5391b1 _public_5391b1
#define public_5391c6 _public_5391c6
#define public_5391cf _public_5391cf
#define public_5391d3 _public_5391d3
#define public_5391e8 _public_5391e8
#define public_5391f9 _public_5391f9
#define public_539210 _public_539210

PROC_DECLARE(0x5391a0, internal_5391a0, public_5391a0);
extern "C" NAKED register_t __cdecl internal_5391a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5de728
        je public_5391d3
        public_5391b1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_5391c6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_5391cf
        public_5391c6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5391cf : nop
        test edi, edi
        jne public_5391b1
        public_5391d3 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_5391f9
        public_5391e8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_5391e8
        public_5391f9 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_539210
        push esi
        call public_5b7e1d
        add esp, 4
        public_539210 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5391a0)
    }
}

#undef public_5391b1
#undef public_5391c6
#undef public_5391cf
#undef public_5391d3
#undef public_5391e8
#undef public_5391f9
#undef public_539210
