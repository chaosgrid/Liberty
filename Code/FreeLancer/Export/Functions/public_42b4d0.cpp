#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_42c370);
CLANG_FORWARD_PROC_SYMBOL(public_42c750);
CLANG_FORWARD_PROC_SYMBOL(public_42c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_42cbc0);
CLANG_FORWARD_PROC_SYMBOL(public_438930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42b4e0 _public_42b4e0
#define public_42b502 _public_42b502
#define public_42b510 _public_42b510
#define public_42b51a _public_42b51a
#define public_42b51f _public_42b51f
#define public_42b521 _public_42b521
#define public_42b52a _public_42b52a
#define public_42b555 _public_42b555
#define public_42b589 _public_42b589
#define public_42b5ab _public_42b5ab
#define public_42b5b0 _public_42b5b0
#define public_42b5d3 _public_42b5d3

PROC_DECLARE(0x42b4d0, internal_42b4d0, public_42b4d0);
extern "C" NAKED register_t __cdecl internal_42b4d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667cc4]
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_42b52a
        public_42b4e0 : nop
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_42b4e0
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        jne public_42b502
        push eax
        call public_42c9e0
        add esp, 4
        jmp public_42b51f
        public_42b502 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_42b51a
        lea ebx, ds:[ebx]
        public_42b510 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_42b510
        public_42b51a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_42b521
        public_42b51f : nop
        mov esi, eax
        public_42b521 : nop
        mov eax, dword ptr ds : [public_667cc4]
        cmp esi, eax
        jne public_42b4e0
        public_42b52a : nop
        mov edx, dword ptr ds : [public_667cd0]
        test edx, edx
        mov ecx, dword ptr ds : [eax]
        mov edi, eax
        mov dword ptr ss : [esp+8], ecx
        je public_42b5ab
        mov edx, ecx
        cmp ecx, edx
        jne public_42b5ab
        cmp edi, eax
        jne public_42b5ab
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_667cc8]
        cmp edi, ecx
        mov esi, edi
        je public_42b589
        public_42b555 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov ecx, offset public_667cc0
        call public_42c750
        mov esi, dword ptr ds : [esi]
        push 0
        lea ecx, ds:[edi+0xC]
        call public_42cbc0
        push edi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_667cc8]
        add esp, 4
        cmp esi, ecx
        mov edi, esi
        jne public_42b555
        mov eax, dword ptr ds : [public_667cc4]
        public_42b589 : nop
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_667cc4]
        mov dword ptr ds : [public_667cd0], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_667cc4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_42b5ab : nop
        cmp ecx, edi
        je public_42b5d3
        nop 
        public_42b5b0 : nop
        mov esi, ecx
        lea ecx, ss:[esp+8]
        call public_438930
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_667cc0
        call public_42c370
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, edi
        jne public_42b5b0
        public_42b5d3 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x42b4d0)
    }
}

#undef public_42b4e0
#undef public_42b502
#undef public_42b510
#undef public_42b51a
#undef public_42b51f
#undef public_42b521
#undef public_42b52a
#undef public_42b555
#undef public_42b589
#undef public_42b5ab
#undef public_42b5b0
#undef public_42b5d3
