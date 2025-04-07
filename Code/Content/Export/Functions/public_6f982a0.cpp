#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f982a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa28a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f982be _public_6f982be
#define public_6f982c0 _public_6f982c0
#define public_6f982f0 _public_6f982f0
#define public_6f9830f _public_6f9830f
#define public_6f98334 _public_6f98334
#define public_6f98338 _public_6f98338
#define public_6f98358 _public_6f98358

PROC_DECLARE(0x6f982a0, internal_6f982a0, public_6f982a0);
extern "C" NAKED register_t __cdecl internal_6f982a0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd3ce8]
        mov al, 1
        test al, cl
        jne public_6f982be
        or cl, al
        mov byte ptr ds : [public_6fd3ce8], cl
        mov ecx, offset public_6fd3cec
        jmp public_6f982c0
        public_6f982be : nop
        ret 
        nop 
        public_6f982c0 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6f98334
        mov ecx, eax
        cmp eax, ecx
        jne public_6f98334
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f9830f
        nop 
        lea esp, ss:[esp]
        public_6f982f0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6fa28a0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f982f0
        public_6f9830f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6f98358
        public_6f98334 : nop
        cmp eax, edi
        je public_6f98358
        public_6f98338 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f98338
        public_6f98358 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f982a0)
    }
}

#undef public_6f982be
#undef public_6f982c0
#undef public_6f982f0
#undef public_6f9830f
#undef public_6f98334
#undef public_6f98338
#undef public_6f98358
