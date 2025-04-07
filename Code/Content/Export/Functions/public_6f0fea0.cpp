#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0fea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f0fec0 _public_6f0fec0
#define public_6f0fed0 _public_6f0fed0
#define public_6f0fedd _public_6f0fedd
#define public_6f0fef1 _public_6f0fef1
#define public_6f0ff10 _public_6f0ff10
#define public_6f0ff1d _public_6f0ff1d
#define public_6f0ff25 _public_6f0ff25
#define public_6f0ff2f _public_6f0ff2f
#define public_6f0ff36 _public_6f0ff36
#define public_6f0ff43 _public_6f0ff43
#define public_6f0ff7d _public_6f0ff7d

PROC_DECLARE(0x6f0fea0, internal_6f0fea0, public_6f0fea0);
extern "C" NAKED register_t __cdecl internal_6f0fea0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+8], esi
        je public_6f0ff43
        push ebx
        push ebp
        lea ebx, ds:[ebx]
        public_6f0fec0 : nop
        mov ebp, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea ebx, ss:[ebp+8]
        je public_6f0fef1
        nop 
        public_6f0fed0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f0fedd
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f0fedd : nop
        mov edx, dword ptr ds : [ebx]
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ebx+8]
        jne public_6f0fed0
        public_6f0fef1 : nop
        mov ecx, ebp
        call public_6f1d110
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f0ff1d
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f0ff36
        lea ecx, ds:[ecx]
        public_6f0ff10 : nop
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6f0ff10
        jmp public_6f0ff36
        public_6f0ff1d : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f0ff2f
        public_6f0ff25 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_6f0ff25
        public_6f0ff2f : nop
        cmp dword ptr ds : [edi+8], eax
        je public_6f0ff36
        mov edi, eax
        public_6f0ff36 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [ecx+0x40]
        jne public_6f0fec0
        pop ebp
        mov esi, ecx
        pop ebx
        public_6f0ff43 : nop
        lea edx, ds:[esi+0xC]
        push edx
        call public_6f49b00
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6f0ff7d
        mov ecx, edi
        call public_6f487c0
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f0ff7d
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov ecx, dword ptr ds : [esi+4]
        push 1
        push 3
        push ecx
        mov ecx, edi
        call public_6f48a20
        pop edi
        pop esi
        add esp, 8
        ret 
        public_6f0ff7d : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x58]
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f0fea0)
    }
}

#undef public_6f0fec0
#undef public_6f0fed0
#undef public_6f0fedd
#undef public_6f0fef1
#undef public_6f0ff10
#undef public_6f0ff1d
#undef public_6f0ff25
#undef public_6f0ff2f
#undef public_6f0ff36
#undef public_6f0ff43
#undef public_6f0ff7d
