#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d85531 _public_6d85531
#define public_6d85546 _public_6d85546
#define public_6d8554f _public_6d8554f
#define public_6d85553 _public_6d85553
#define public_6d85568 _public_6d85568
#define public_6d85579 _public_6d85579
#define public_6d85590 _public_6d85590

PROC_DECLARE(0x6d85520, internal_6d85520, public_6d85520);
extern "C" NAKED register_t __cdecl internal_6d85520()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6db3758
        je public_6d85553
        public_6d85531 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d85546
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d8554f
        public_6d85546 : nop
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d8554f : nop
        test edi, edi
        jne public_6d85531
        public_6d85553 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d85579
        public_6d85568 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6db1dc2
        add esp, 4
        test edi, edi
        jne public_6d85568
        public_6d85579 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d85590
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d85590 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d85520)
    }
}

#undef public_6d85531
#undef public_6d85546
#undef public_6d8554f
#undef public_6d85553
#undef public_6d85568
#undef public_6d85579
#undef public_6d85590
