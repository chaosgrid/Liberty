#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d07570);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d07576 _public_6d07576
#define public_6d0757f _public_6d0757f
#define public_6d07581 _public_6d07581
#define public_6d07597 _public_6d07597
#define public_6d075a0 _public_6d075a0
#define public_6d075b5 _public_6d075b5
#define public_6d075be _public_6d075be
#define public_6d075c2 _public_6d075c2
#define public_6d075e8 _public_6d075e8

PROC_DECLARE(0x6d07570, internal_6d07570, public_6d07570);
extern "C" NAKED register_t __cdecl internal_6d07570()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        public_6d07576 : nop
        test esi, esi
        jne public_6d0757f
        mov esi, dword ptr ds : [edi+0x60]
        jmp public_6d07581
        public_6d0757f : nop
        mov esi, dword ptr ds : [esi]
        public_6d07581 : nop
        test esi, esi
        je public_6d07597
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6d07576
        lea ecx, ds:[eax+0xC]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        jmp public_6d07576
        public_6d07597 : nop
        mov esi, dword ptr ds : [edi+0x60]
        test esi, esi
        je public_6d075c2
        mov edi, edi
        public_6d075a0 : nop
        mov cl, byte ptr ds : [edi+0x68]
        test cl, cl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6d075b5
        mov ecx, dword ptr ds : [edi+0x6C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x6C], eax
        jmp public_6d075be
        public_6d075b5 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d075be : nop
        test esi, esi
        jne public_6d075a0
        public_6d075c2 : nop
        mov dword ptr ds : [edi+0x64], 0
        mov dword ptr ds : [edi+0x60], 0
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        je public_6d075e8
        push eax
        call dword ptr ds : [public_6d64678]
        add esp, 4
        mov dword ptr ds : [edi+0x20], 0
        public_6d075e8 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d07570)
    }
}

#undef public_6d07576
#undef public_6d0757f
#undef public_6d07581
#undef public_6d07597
#undef public_6d075a0
#undef public_6d075b5
#undef public_6d075be
#undef public_6d075c2
#undef public_6d075e8
